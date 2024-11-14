/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:41:29 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/11 09:20:54 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dstlen;

	i = 0;
	dstlen = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest[20] = "";
	char src[] = "abc";
	strcat(dest, src);
	printf("Concatenated string: %s\n", dest);
	
	char ddest[20] = "";
	char ssrc[] = "abc";
	ft_strcat(ddest, ssrc);
	printf("Concatenated string: %s\n", ddest);
}*/
