/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:55:25 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/22 19:01:17 by mwattier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	check_max_num(int i, char *dict, int max_num)
{
	int	j;

	j = 1;
	while (dict[i + j] == '0')
	{
		if (!(dict[i] >= '0' && dict[i] <= '9' || dict[i] == ' '))
			return (-1);
		j++;
	}
	if (j > max_num)
		max_num = j;
	return (max_num);
}

int	check_printable(int i, char *dict)
{
	while (dict[i] != '\n')
	{
		if (!(dict[i] >= 32 && dict[i] <= 126))
			return (-1);
		i++;
	}
	while (!(dict[i] >= '0' && dict[i] <= '9'))
	{
		if (dict[i] == '\0')
			return (i);
		if (dict[i] != '\n')
			return (-1);
		i++;
	}
	return (i);
}

int	check_dict(char *dict)
{
	int	i;
	int	max_num;

	max_num = 0;
	i = 0;
	while (dict[i])
	{
		if (!(dict[i] >= '0' && dict[i] <= '9'))
			return (-1);
		if (dict[i] == '1' && dict[i + 1] == '0')
			max_num = check_max_num(i, dict, max_num);
		if (max_num < 0)
			return (-1);
		while (dict[i] != ':')
		{
			if (!(dict[i] >= '0' && dict[i] <= '9' || dict[i] == ' '))
				return (-1);
			i++;
		}
		i = check_printable(i, dict);
		if (i < 0)
			return (-1);
	}
	return (max_num + 2);
}

int	check_nbr(char *nbr, char *dict)
{
	int	size_max;
	int	i;

	size_max = check_dict(dict);
	
	if (size_max < 0)
	{
		ft_putstr("Dict zzzzError\n");
		return (0);
	}
	i = 0;
	while (nbr[i])
	{
		if (!(nbr[i] >= '0' && nbr[i] <= '9'))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	if (ft_strlen(nbr) > size_max)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
