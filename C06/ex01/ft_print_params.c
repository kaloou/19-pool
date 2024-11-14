/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:44:23 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/15 12:08:27 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	t;
	int		i;

	t = '\n';
	i = 0;
	(void)argc;
	while (argv[i + 1])
	{
		ft_putstr(argv[i + 1]);
		write(1, &t, 1);
		i++;
	}
}
