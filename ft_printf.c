/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:26:26 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 18:13:38 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(char const *str, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	counter;

	va_start(args, str);
	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == 'c')
			counter += ft_print_char(va_arg(args, int), &i);
		else if (str[i] == '%' && str[i + 1] == 's')
			counter += ft_print_string(va_arg(args, char *), &i);
		else if (str[i] == '%' && (str[i + 1] == 'i' || str[i + 1] == 'd'))
			counter += ft_print_base10(va_arg(args, int), &i);
		if (str[i] != '\0')
		{
			ft_put_uns_char_fd(str[i], 1);
			counter++;
			i++;
		}
	}
	va_end(args);
	return (counter);
}
