/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:53 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 10:20:50 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_s(char *s)
{
    int i;

    i = 0;
    if (!s)
        return (0);
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
    
}