/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:04:53 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 15:14:32 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (ft_print_s("(null)"));
	while (s[i])
	{
		if (ft_print_c(s[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
