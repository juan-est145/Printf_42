/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:28:22 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 13:59:23 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *string, ...);
int		ft_print_char(int arg, int *i);
void	ft_put_uns_char_fd(unsigned char c, int fd);
#endif
