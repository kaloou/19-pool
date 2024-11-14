/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:32:01 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/10 10:21:47 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
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
	char *s1 = "";
	char *s2 = "aa";

	printf("%d\n", strncmp(s1,s2,0));
	printf("%d\n", ft_strncmp(s1,s2,0));
	return 0;
}
*/
