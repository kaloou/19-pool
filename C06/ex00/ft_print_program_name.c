/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:14:42 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/15 12:12:54 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
int    ft_atoi(char *str)
{
    int    i;
    int    nb;
    int    nbless;

    nb = 0;
    nbless = 1;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            nbless *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - 48);
        i++;
    }
    return (nb * nbless);
}



int	main(int argc, char *argv[])
{
	(void)argc;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
}
