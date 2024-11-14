/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:40:17 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/26 07:43:30 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc((sizeof(char) * ft_str_len(src)) + 1);
	if (!p)
		return (NULL);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].str = av[i];
		arr[i].size = ft_str_len(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
/*
#include <stdio.h>
int    main(int ac, char **av)
{
    int i;
    struct s_stock_str *arr;
    i = 1;
    arr = ft_strs_to_tab(ac,av);
    while (arr[i].str != 0)
    {
        printf("Original: %s, Copy: %s, Size: %d\n",
        arr[i].str, arr[i].copy, arr[i].size);
        i++;
    }
    return (0);
}
*/
