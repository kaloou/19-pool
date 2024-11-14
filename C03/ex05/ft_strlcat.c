/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:41:29 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/26 11:46:19 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	i;

	i = 0;
	dstlen = ft_strlen(dest);
	srclen = ft_strlen(dest);
	if (dstlen >= size)
		return (srclen + size);
	while (src[i] != '\0' && dstlen + i < size - 1)
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dstlen + srclen);
}

#include "string.h"
#include "stdio.h"

int	main(void)
{
	char dest[20] = "def";
	char src[] = "abc";
	int size = 3;
	strlcat(dest, src, size);
	printf("Concatenated string: %s\n", dest);
	
	char ddest[20] = "def";
	char ssrc[] = "abc";
	int ssize = 3;
	ft_strlcat(ddest, ssrc, ssize);
	printf("Concatenated string: %s\n", ddest);
	printf("Concatenated string: %d\n", ft_strlcat(ddest,ssrc, ssize));
}
