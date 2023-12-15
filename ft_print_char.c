/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:32:46 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 15:03:50 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft/libft.h"

int	ft_print_char(int args, unsigned int *i)
{
	int	counter;

	counter = 1;
	ft_put_uns_char_fd((unsigned char)args, 1);
	(*i) += 2;
	return (counter);
}
