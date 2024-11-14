/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:39:40 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/07 17:07:50 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>
 
int	main(void)
{	
	char	rr[] = "aaa";

	printf("%s",ft_strcpy(rr, "bb"));
	printf("\n");
	printf("%s",strcpy(rr, "bb"));
	return 0;
}

