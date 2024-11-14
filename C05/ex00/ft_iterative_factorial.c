/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:32:18 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/13 09:47:48 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		tmp *= nb;
		nb--;
	}
	return (tmp);
}
/*
#include "stdio.h"

int	main(void)
{
	printf("%d",ft_iterative_factorial(5));
	return 0;
}
*/
