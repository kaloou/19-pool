/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:16:32 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/22 19:14:09 by mwattier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char	*dict_to_string(char *dict)
{
	char	*str;
	char	*buffer;
	int		fd;
	ssize_t	bytes_read;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (0);
	str = (char *)malloc(sizeof(char));
	buffer = (char *)malloc(256);
	if (buffer == NULL)
	{
		close (fd);
		return (0);
	}
	bytes_read = read(fd, buffer, 255);
	buffer[bytes_read] = '\0';
	while (bytes_read > 0)
	{
		str = ft_strjoin(bytes_read, str, buffer);
		bytes_read = read(fd, buffer, 255);
		buffer[bytes_read] = '\0';
	}
	free (buffer);
	return (str);
}

int	parse_dict(char *nbr, char *dict_name)
{
	char	*string;

	string = dict_to_string(dict_name);
	if (!check_nbr(nbr, string))
		return (0);
	split_nbr(nbr, string);
	free (string);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (!(parse_dict(av[1], "numbers.dict")))
			return (0);
	}
	else if (ac == 3)
	{
		if (!(parse_dict(av[2], av[1])))
			return (0);
	}
	else
		ft_putstr("The number of argument is not good !");
	return (0);
}
