/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:20:58 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/05 17:45:55 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char first_number[2], char second_number[2])
{
	write(1, first_number, 2);
	write(1, " ", 1);
	write(1, second_number, 2);
	if (!(first_number[0] == '9' && first_number[1] == '8'))
	{
		write(1, ", ", 2);
	}
	else if (!(second_number[0] == '9' && second_number[1] == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	first_number[2];
	char	second_number[2];

	first_number[0] = '0';
	while (first_number[0] <= '9')
	{
		first_number[1] = '0';
		while (first_number[1] <= '9')
		{
			second_number[0] = first_number[0];
			second_number[1] = first_number[1] + 1;
			while (second_number[0] <= '9')
			{
				while (second_number[1] <= '9')
				{
					writer(first_number, second_number);
					second_number[1]++;
				}
				second_number[1] = '0';
				second_number[0]++;
			}
			first_number[1]++;
		}
		first_number[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
