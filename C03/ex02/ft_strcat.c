/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:41:29 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/10 12:24:30 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dstlen;
	int	i;

	i = 0;
	dstlen = ft_strlen(dest);
	while (src[i] != '\0')
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
