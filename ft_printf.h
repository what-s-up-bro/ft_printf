/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:56:26 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/11 13:38:37 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_print_c(char c);
int		ft_print_s(char *s);
int		ft_print_d_i(int nb);
int		ft_print_u(unsigned int nb);
int		ft_print_hex(unsigned int nb);
int		ft_print_x(unsigned long nb);
int		ft_printf(const char *form, ...);
int		ft_print_p(void *ptr);
char	*ft_itoa(int n);
char	*ft_itoa1(unsigned int n);
int		ft_putchar(char c);

#endif
