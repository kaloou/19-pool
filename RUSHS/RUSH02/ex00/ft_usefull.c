/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usefull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:55:11 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/22 18:54:56 by mwattier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i = i + 1;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_next_number(int i, char *dict)
{
	while (dict[i] != '\n')
	{
		i++;
	}
	while ((dict[i] >= 9 && dict[i] <= 13) || dict[i] == ' ')
		i++;
	return (i - 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char *str1, char *str2)
{
	char	*res;
	int		i;
	int		count;

	count = ft_strlen(str1) + ft_strlen(str2);
	i = 0;
	if (size <= 0)
	{
		res = malloc(sizeof(char));
		return (res);
	}
	res = malloc((count + 1) * sizeof(char));
	if (res == 0)
		return (0);
	res[0] = '\0';
	ft_strcat(res, str1);
	ft_strcat(res, str2);
	free(str1);
	return (res);
}
