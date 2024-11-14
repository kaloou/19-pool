/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:32:20 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/15 12:07:35 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**sorting(char **list_params, int size)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(list_params[j], list_params[j + 1]) > 0)
			{
				swap = list_params[j];
				list_params[j] = list_params[j + 1];
				list_params[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
	return (list_params);
}

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
	int		i;
	char	**new_argv;

	i = 0;
	new_argv = sorting(argv + 1, argc -1);
	while (i < argc - 1)
	{
		ft_putstr(new_argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
