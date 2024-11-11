/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:59 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 15:12:38 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long nb)
{
	int		i;
	char	*s;

	i = 0;
	s = "0123456789abcdef";
	if (nb >= 16)
	{
		i = ft_print_x(nb / 16);
		if (i == -1)
			return (-1);
	}
	if (ft_print_c(s[nb % 16]) == -1)
		return (-1);
	return (i + 1);
}
