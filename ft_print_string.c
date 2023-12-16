/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:40:44 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/16 19:02:01 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_string(char *string, unsigned int *i)
{
	int	counter;

	if (string == NULL)
	{
		ft_putstr_fd("(null)", 1);
		counter = 6;
		(*i) += 2;
		return (counter);
	}
	else
	{
		counter = ft_strlen(string);
		ft_putstr_fd(string, 1);
		(*i) += 2;
		return (counter);
	}
}
