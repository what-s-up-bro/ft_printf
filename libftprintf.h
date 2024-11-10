/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:55:11 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/10 18:47:49 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_print_c(char c);
int		ft_print_s(char *s);
int		ft_print_d_i(int nb);
int		ft_print_u(unsigned int nb);
int		ft_print_2(int nb);
int		ft_print_x(int nb);
int		ft_my_printf(const char *form, ...);
int		ft_print_p(void *ptr);
char	*ft_itoa(int n);

#endif
