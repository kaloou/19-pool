/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaillez <nsaillez@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:06:14 by nsaillez          #+#    #+#             */
/*   Updated: 2024/09/07 17:32:42 by nsaillez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*La premiere ligne (ABBBBC)*/
void	first_line(int width)
{
	int	nbr_b;

	ft_putchar('A');
	nbr_b = width - 2;
	while (nbr_b > 0)
	{
		ft_putchar('B');
		nbr_b--;
	}
	if (width > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

/*Les lignes internes (B     B)*/
void	mid_line(int width, int height)
{
	int	nbr_line;
	int	nbr_space;

	nbr_line = height - 2;
	nbr_space = width - 2;
	while (nbr_line > 0)
	{
		ft_putchar('B');
		while (nbr_space > 0)
		{
			ft_putchar(' ');
			nbr_space--;
		}
		nbr_space = width - 2;
		if (width > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		nbr_line--;
	}
}

/*La derniere ligne (CBBBBA)*/
void	last_line(int width)
{
	int	nbr_b;

	nbr_b = width - 2;
	ft_putchar('C');
	while (nbr_b > 0)
	{
		ft_putchar('B');
		nbr_b--;
	}
	if (width > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

/*x = largeur (width) y = longueur (height)*/
void	rush(int x, int y)
{
	int	width;
	int	height;

	width = x;
	height = y;
	if (width <= 0 || height <= 0)
	{
		write(1, "Error: width & height must be > 0", 33);
	}
	else
	{
		first_line(width);
		mid_line(width, height);
		if (height > 1)
		{
			last_line(width);
		}
	}
}
