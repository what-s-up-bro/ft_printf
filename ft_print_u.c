/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:56 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 10:00:56 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa1(nb);
	if (str)
	{
		while (str[i])
		{
			ft_print_c(str[i]);
			i++;
		}
		free(str);
	}
	return (i);
}
