/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_char_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:56:01 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 18:13:41 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_put_uns_char_fd(unsigned char c, int fd)
{
	if (!fd)
	{
		return ;
	}
	write(fd, &c, 1);
}
