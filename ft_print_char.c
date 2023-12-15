/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:32:46 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 11:57:05 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft/libft.h"

int	ft_print_char(int args, int *i)
{
	int	counter;

	counter = 1;
	(*i)++;
	ft_putchar_fd((char)args, 1);
	(*i)++;
	return (counter);
}
