/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:26:26 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 13:34:52 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft/libft.h"

int	ft_printf(char const *string, ...)
{
	va_list	args;
	int		i;
	int		counter;

	va_start(args, string);
	i = 0;
	counter = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '%' && string[i + 1] == 'c')
		{
			counter += ft_print_char(va_arg(args, int), &i);
		}
		if (string[i] != '\0')
		{
			ft_putchar_fd(string[i], 1);
			counter++;
			i++;
		}
	}
	return (counter);
}
