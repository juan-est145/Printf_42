/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:28:22 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/16 19:45:21 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *string, ...);
int		ft_print_char(unsigned int arg, unsigned int *i);
void	ft_put_uns_char_fd(unsigned char c, int fd);
int		ft_print_string(char *string, unsigned int *i);
int		ft_print_base10(int number, unsigned int *i);
int		ft_print_lower_hex(unsigned int hexa, unsigned int *i);
int		ft_print_upper_hex(unsigned int hexa, unsigned int *i);
int		ft_print_uns_base10(unsigned int number, unsigned int *i);
char	*ft_itoa_uns(unsigned int n);
int		ft_print_percentage(char c, unsigned int *i);
#endif
