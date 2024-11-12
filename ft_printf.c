/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:53:38 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/12 15:42:11 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_make(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_print_c(va_arg(args, int));
	else if (c == 's')
		i = ft_print_s(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		i = ft_print_d_i(va_arg(args, int));
	else if (c == 'u')
		i = ft_print_u(va_arg(args, unsigned int));
	else if (c == 'x')
		i = ft_print_x(va_arg(args, unsigned int));
	else if (c == 'X')
		i = ft_print_hex(va_arg(args, unsigned int));
	else if (c == 'p')
		i = ft_print_p(va_arg(args, void *));
	else
		i = ft_print_c(c);
	return (i);
}

void	ft_sity(int a[2])
{
	a[0] = 0;
	a[1] = 0;
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		a[2];

	ft_sity(a);
	va_start(args, form);
	if (!form || write(1, 0, 0) == -1)
		return (-1);
	while (*form)
	{
		if (*form == '%' && *(form + 1))
		{
			a[0] = ft_make(*(++form), args);
			if (a[0] == -1)
				return (va_end(args), -1);
			a[1] += a[0];
		}
		else
		{
			if (ft_print_c(*form) == -1)
				return (va_end(args), -1);
			a[1]++;
		}
		form++;
	}
	return (va_end(args), a[1]);
}
