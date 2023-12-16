/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:28:22 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/16 18:37:52 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *string, ...);
int		ft_print_char(int arg, unsigned int *i);
void	ft_put_uns_char_fd(unsigned char c, int fd);
int		ft_print_string(char *string, unsigned int *i);
int		ft_print_base10(int number, unsigned int *i);
int		ft_print_lower_hex(unsigned int hexa, unsigned int *i);
int		ft_print_upper_hex(unsigned int hexa, unsigned int *i);
#endif
