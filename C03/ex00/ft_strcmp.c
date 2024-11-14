/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:32:01 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/10 07:59:03 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include "stdio.h"
#include "string.h"

int main(void)
{
	char *s1 = "aaaa";
	char *s2 = "aajnh";

	printf("%d\n", strcmp(s1,s2));
	printf("%d\n", ft_strcmp(s1,s2));
}
*/
