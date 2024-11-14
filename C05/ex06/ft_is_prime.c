/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:05:51 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/19 21:17:42 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	racine;
	int	sqrt;

	racine = 1;
	sqrt = 0;
	if (nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	while (racine <= nb / 2)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
			return (racine);
		racine++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

/*
#include "stdio.h"
int	main(void)
{	
	printf("%d",ft_is_prime(37));
	return 0;
}
*/
