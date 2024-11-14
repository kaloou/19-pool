/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:04:20 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/09 10:18:57 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122)
			&& (i == 0 || !((str[i - 1] >= 65 && str[i - 1] <= 90)
					|| (str[i - 1] >= 97 && str[i - 1] <= 122)
					|| (str[i - 1] >= 48 && str[i - 1] <= 57))))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}