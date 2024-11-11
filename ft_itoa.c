/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:58:06 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 13:38:52 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(long nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb / 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*yas;
	long	nb;

	nb = n;
	i = ft_count(nb);
	yas = malloc ((i + 1) * sizeof(char));
	if (!yas)
		return (NULL);
	yas[i--] = '\0';
	if (nb < 0)
	{
		yas[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		yas[i] = '0';
	while (nb > 0)
	{
		yas[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	return (yas);
}
