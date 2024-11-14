/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:29:35 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/19 18:30:54 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += sep_len * (size - 1);
	return (total_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

void	handling(int size, char **strs, char *sep, char *joinchar)
{
	int		i;
	char	*current_pos;

	i = 0;
	current_pos = joinchar;
	while (i < size)
	{
		ft_strcpy(current_pos, strs[i]);
		current_pos += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(current_pos, sep);
			current_pos += ft_strlen(sep);
		}
		i++;
	}
	*current_pos = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joinchar;
	int		total_len;

	if (size == 0)
	{
		joinchar = (char *)malloc(1);
		if (joinchar)
			joinchar[0] = '\0';
		return (joinchar);
	}
	total_len = get_total_len(size, strs, sep);
	joinchar = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!joinchar)
		return (NULL);
	handling(size, strs, sep, joinchar);
	return (joinchar);
}
/*
#include "stdio.h"
int	main(void)
{
	int size;
	char *sep;

	sep = "/";
	size = 3;
	char *strs[] = {"aaa", "bbb", "ccc"};
	printf("%s",ft_strjoin(size, strs, sep));
}
*/
