/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:27:14 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 11:08:06 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *ptr)
{
	unsigned long	ad;
	int				i;

	ad = (unsigned long)ptr;
	i = 0;
	if (ad == 0)
	{
		i += ft_print_s("(nil)");
		return (5);
	}
	i += ft_print_s("0x");
	i += ft_print_x(ad);
	return (i);
}
