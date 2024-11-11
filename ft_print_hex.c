/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:10:09 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 09:26:50 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb)
{
	int		i;
	char	*s;

	i = 0;
	s = "0123456789ABCDEF";
	if (nb >= 16)
		i += ft_print_hex(nb / 16);
	i += ft_print_c(s[nb % 16]);
	return (i);
}
