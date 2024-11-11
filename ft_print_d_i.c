/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:41 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 15:25:29 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d_i(int nb)
{
	int		i;
	char	*str;
	int		j;

	str = ft_itoa(nb);
	if (!str)
		return (-1);
	j = 0;
	i = 0;
	while (str[j])
	{
		if (ft_print_c(str[j]) == -1)
		{
			free (str);
			return (-1);
		}
		j++;
		i++;
	}
	free(str);
	return (i);
}
