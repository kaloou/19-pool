/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_split_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:53:41 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/22 17:30:36 by mwattier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	split_nbr_next(char *nb, char *nbr, char *buffer, int i)
{
	int		size_nbr;

	size_nbr = ft_strlen(nbr);
	if (size_nbr > 2)
	{
		write(1, " ", 1);
		while (size_nbr > 0)
		{
			nb[0] = nbr[i];
			nb[1] = nbr[i + 1];
			nb[2] = nbr[i + 2];
			i += 3;
			print_suffix(nbr, buffer, size_nbr, i);
			size_nbr -= 3;
			if (size_nbr > 0)
			{
				ft_put_hundred(nb, buffer);
				if (size_nbr > 3)
					write(1, " ", 1);
			}
		}
	}
}

void	split_nbr1(char *nb, char *nbr, char *buffer)
{
	int	i;

	nb[2] = nbr[0];
	i = 1;
	ft_put_hundred(nb, buffer);
	split_nbr_next(nb, nbr, buffer, i);
}

void	split_nbr2(char *nb, char *nbr, char *buffer)
{
	int	i;

	nb[1] = nbr[0];
	nb[2] = nbr[1];
	i = 2;
	ft_put_hundred(nb, buffer);
	split_nbr_next(nb, nbr, buffer, i);
}

void	split_nbr3(char *nb, char *nbr, char *buffer)
{
	int	i;

	nb[0] = nbr[0];
	nb[1] = nbr[1];
	nb[2] = nbr[2];
	i = 3;
	ft_put_hundred(nb, buffer);
	split_nbr_next(nb, nbr, buffer, i);
}

void	split_nbr(char *nbr, char *buffer)
{
	int		size_nbr;
	char	nb[4];
	
	nb[0] = '0';
	nb[1] = '0';
	nb[2] = '0';
	nb[3] = '\0';
	size_nbr = ft_strlen(nbr);
	if (size_nbr == 1 && nbr[0] == '0')
		ft_put_zero(buffer);		
	else if (size_nbr % 3 == 1)
		split_nbr1(nb, nbr, buffer);
	else if (size_nbr % 3 == 2)
		split_nbr2(nb, nbr, buffer);
	
	else
		split_nbr3(nb, nbr, buffer);
}
