/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:46:50 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 10:47:32 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
	yas[i] = '\0';
	if (nb < 0)
	{
		yas[0] = '-';
		nb = -nb;
	}
	i = i - 1;
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