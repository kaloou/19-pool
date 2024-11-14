/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:43:21 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/11 09:10:08 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	findlen;

	findlen = ft_strlen(to_find);
	j = 0;
	i = 0;
	if (findlen == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (j == findlen)
				return (str + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
/*	
#include "stdio.h"
#include "string.h"

int	main(void)
{
	char str[] = "Salut les gens";
	char find[] = "gens";
	printf("%s", ft_strstr(str, find));
}
*/
