/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:56 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 15:10:25 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_itoa1(nb);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (ft_print_c(str[i]) == -1)
		{
			free (str);
			return (-1);
		}
		i++;
	}
	free(str);
	return (i);
}
