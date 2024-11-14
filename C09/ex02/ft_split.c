/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaludet <lpaludet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:20:32 by lpaludet          #+#    #+#             */
/*   Updated: 2024/09/26 23:51:57 by lpaludet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char *str, char *charset);

ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int nb_strings(char *str, char *charset)
{
	int	i;
	int nb_str;

	i = 0;
	nb_str = 0;
	while (str[i])
	{	
		while (str[i] != '\0' && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
			nb_str++;
		while (str[i] != '\0' && check_sep(str[i], charset) == 0)
			i++;
	}
	return (nb_str);
}

/*
int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}


char	*ft_strdup(char *string, char *charset)
{
	char *ptr;
	int	i;
	int	len_str;


	i = 0;
	len_str = ft_strlen(string);
	ptr = malloc(sizeof(char *) * (len_str) + 1)
	if (!ptr)
		return (NULL);
	while(string[i])
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}	
*/


char **ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	k;
	int	diff;
	char	**arr;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] != '\0' && check_sep(str[i], charset) == 1)// = charset
			str[i]++;
		
		if (str[i] != '\0') // = un mot
		{
			k++;
			i++
		}
		diff = k - i;
		while (diff < i)
		{
			arr[j] = strdup(str[i])
			diff--;
		}
		
		while (str[i] != '\0' && check_sep(str[i], charset) == 0) // = 
			i++;
	}
}	
		














