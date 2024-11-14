/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:24:18 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/22 19:03:38 by mwattier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

//include

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

//function

void	ft_putstr(char *str);
int		ft_get_next_number(int i, char *dict);
void	ft_put_hundred(char *nb, char *dict);
int		ft_strlen(char *str);
void	ft_print_number_name(int i, char *dict);
void	split_nbr(char *nbr, char *buffer);
void	print_suffix(char *nbr, char *src, int size, int k);
char	*ft_strcat(char *dest, char *src);
char	*ft_strjoin(int size, char *str1, char *str2);
int		check_nbr(char *nbr, char *dict);
void	ft_put_zero(char *dict);

#endif
