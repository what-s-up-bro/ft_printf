/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:27:14 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 18:52:24 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_p(void *ptr)
{
	unsigned long	ad;
	int				i;

	ad = (unsigned long)ptr;
	i = 0;
	if (ad == 0)
		i += ft_print_c('0');
	else
		i += ft_print_x(ad);
	return (i);
}
