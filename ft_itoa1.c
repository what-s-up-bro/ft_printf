/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:46:50 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 10:49:56 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned int nb)
{
	int	i;

	i = 1;
	while (nb / 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa1(unsigned int n)
{
	int				i;
	char			*yas;
	unsigned int	nb;

	nb = n;
	i = ft_count(nb);
	yas = malloc ((i + 1) * sizeof(char));
	if (!yas)
		return (NULL);
	yas[i] = '\0';
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
