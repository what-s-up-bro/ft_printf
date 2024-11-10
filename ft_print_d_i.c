/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:41 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 10:50:33 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfcollector.h"

int ft_print_d_i(int nb)
{
    int i;
    char *str;

    i = 0;
    str = ft_itoa(nb);
    if (str)
    {
        while (str[i])
        {
            write(1, &str[i], 1);
            i++;
        }
        free(str);
    }
    return (i);
}