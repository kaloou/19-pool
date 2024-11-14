/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_logic_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:10:53 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/22 14:12:20 by mwattier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_print_number_name(int i, char *dict)
{
	while (dict[i] != ':')
		i++;
	i++;
	while (dict[i] == ' ')
		i++;
	while (dict[i] >= 32 && dict[i] <= 126)
	{
		write(1, &dict[i], 1);
		i++;
	}
	return ;
}

void	ft_print_unit(char c, char *dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (dict[i] == c && (dict[i + 1] == ' ' || dict[i + 1] == ':') \
					&& (dict[i - 1] == ' ' || dict[i - 1] == '\n'))
		{
			ft_print_number_name(i, dict);
			return ;
		}
		else
			i = ft_get_next_number(i, dict);
		i++;
	}
	return ;
}

void	ft_handle_diz(char *nb, char *dict) // HANDLE DEEZ NUTS
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if ((dict[i] == nb[1] && nb[1] == '1') && dict[i + 1] == nb[2])
		{
			ft_print_number_name(i, dict);
			return ;
		}
		else if (dict[i] == nb[1] && dict[i + 1] == '0'
			&& (dict[i + 2] == ' ' || dict[i + 2] == ':') && nb[1] > '1')
			ft_print_number_name(i, dict);
		else
			i = ft_get_next_number(i, dict);
		i++;
	}
	return ;
}

void	ft_print_hundred(char *dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (dict[i] == '1' && dict[i + 1] == '0' && dict[i + 2] == '0' \
				&& (dict[i + 3] == ' ' || dict[i + 3] == ':'))
			ft_print_number_name(i, dict);
		else
			i = ft_get_next_number(i, dict);
		i++;
	}
	return ;
}

void	ft_put_hundred(char *nb, char *dict)
{
	if (nb[0] != '0')
	{
		ft_print_unit(nb[0], dict);
		write(1, " ", 1);
		ft_print_hundred(dict);
		write(1, " ", 1);
	}
	if (nb[1] == '0')
		ft_print_unit(nb[2], dict);
	if (nb[1] == '1')
		ft_handle_diz(nb, dict);
	if (nb[1] > '1' && nb[1] <= '9')
	{
		ft_handle_diz(nb, dict);
		if (nb[2] != '0')
			write(1, "-", 1);
		ft_print_unit(nb[2], dict);
	}
}
