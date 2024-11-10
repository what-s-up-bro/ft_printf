/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:59 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 11:44:53 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_x(int nb)
{
    int i;
    char    s[16];

    i = 0;
    s[16] = "0123456789abcdef";
    if (nb == 0)
    {
        write(1, "0", 1);
        return (1);
    }
    if (nb >= 16)
        i += ft_print_x(nb / 16);
    if ((nb % 16) >= 'a' && (nb % 16) <= 'z')
        write(1, &s[(nb % 16) - 32], 1);
    else
        write(1, &s[nb % 16], 1);
    i++;
    return (i);
}