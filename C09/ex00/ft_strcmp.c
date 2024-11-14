/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:41:17 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/26 17:49:54 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s2[i] - s1[i]);
		
}
/*
#include "stdio.h"

int main(void)
{
	char *str1 = "adbedhebdehd";
	char *str2 = "zddzefd";

	printf("%d", ft_strcmp(str1, str2));
}
*/
