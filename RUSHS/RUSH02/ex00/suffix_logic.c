/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suffix_logic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:38:47 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/22 17:48:57 by mwattier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	print_suffix2(char *src, int size, int i)
{
	int	j;

	j = 1;
	while (src[i + j] == '0')
		j++;
	if (size == 5 || size == 4)
	{
		if (j == 4)
		{
			ft_print_number_name(i, src);
			write(1, " ", 1);
		}
	}
	else if (j == size || j == size - 1 || j == size - 2)
	{
		ft_print_number_name(i, src);
		write(1, " ", 1);
	}
}

void	print_suffix(char *nbr, char *src, int size, int k)
{
	int	i;

	i = -1;
	while (src[++i]
		&& !(nbr[k - 3] == '0' && nbr[k - 4] == '0' && nbr[k - 5] == '0'))
	{
		if (size <= 3)
			return ;
		if (src[i] == '1')
		{
			print_suffix2(src, size, i);
		}
		else
			i = ft_get_next_number(i, src);
	}
}

void	ft_put_zero(char *dict)
{
	int	i;
	write(1, "zero", 4);
	i = 0;
	while (dict[i])
	{
		if (dict[i] == '0' && (dict[i + 1] == ' ' || dict[i + 1] == ':'))
		{
			if (dict[i - 1] == ' ' || dict[i - 1] == '\n')
			{
				ft_print_number_name(i, dict);
				return ;
			}
		}
	i++;
	}
}