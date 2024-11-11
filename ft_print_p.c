/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:27:14 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 15:19:11 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *ptr)
{
	unsigned long	ad;
	int				i;

	ad = (unsigned long)ptr;
	i = ft_print_s("0x");
	if (i == -1)
		return (-1);
	if (ad == 0)
		return (i + ft_print_c('0'));
	return (i + ft_print_x(ad));
}
