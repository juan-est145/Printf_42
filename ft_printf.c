/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:26:26 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 16:09:05 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft/libft.h"

int	ft_printf(char const *string, ...)
{
	va_list				args;
	unsigned int		i;
	unsigned int		counter;

	va_start(args, string);
	i = 0;
	counter = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '%' && string[i + 1] == 'c')
			counter += ft_print_char(va_arg(args, int), &i);
		else if (string[i] == '%' && string[i + 1] == 's')
			counter += ft_print_string(va_arg(args, char *), &i);
		if (string[i] != '\0')
		{
			ft_put_uns_char_fd(string[i], 1);
			counter++;
			i++;
		}
	}
	va_end(args);
	return (counter);
}
