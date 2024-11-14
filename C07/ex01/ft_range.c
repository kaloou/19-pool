/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:33:37 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/23 12:42:07 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	diff;

	diff = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * diff);
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
