/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:40:44 by juestrel          #+#    #+#             */
/*   Updated: 2023/12/15 15:04:16 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft/libft.h"

int	ft_print_string(char *string, unsigned int *i)
{
	int	counter;

	counter = ft_strlen(string);
	ft_putstr_fd(string, 1);
	(*i) += 2;
	return (counter);
}
