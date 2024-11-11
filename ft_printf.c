/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:53:38 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 20:00:01 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_make(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_print_c(va_arg(args, int));
	else if (c == 's')
		i += ft_print_s(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		i += ft_print_d_i(va_arg(args, int));
	else if (c == 'u')
		i += ft_print_u(va_arg(args, unsigned int));
	else if (c == 'x')
		i += ft_print_x(va_arg(args, unsigned int));
	else if (c == 'X')
		i += ft_print_hex(va_arg(args, unsigned int));
	else if (c == 'p')
		i += ft_print_p(va_arg(args, void *));
	else if (c == '%')
		i += ft_print_c('%');
	return (i);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		i;
	int		j;

	j = 0;
	i = 0;
	va_start(args, form);
	while (form[j])
	{
		if (form[j] == '%' && form[j + 1])
		{
			j++;
			i += ft_make(form[j], args);
		}
		else
			i += ft_print_c(form[j]);
		j++;
	}
	va_end(args);
	return (i);
}
