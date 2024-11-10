/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:56 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 18:52:43 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_u(unsigned int nb)
{
	int		i;
	char	*str;

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
