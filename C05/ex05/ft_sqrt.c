/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:29:13 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/21 14:23:44 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	racine;
	int	sqrt;

	racine = 1;
	sqrt = 0;
	if (nb == 1)
		return (1);
	while (racine <= nb / racine)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
			return (racine);
		racine++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main(int    argc,char *argv[])
{
    (void)argc;
    int val = atoi(argv[1]);
        int result = ft_sqrt(val);
    printf("resultat : %d", result);
    return 0;
}
*/
