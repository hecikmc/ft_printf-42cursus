/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:23:20 by jmerchan          #+#    #+#             */
/*   Updated: 2022/12/21 16:07:27 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_putstr_c(char *str, int *cont);
void	ft_putchar_c(int c, int *total);
char	*ft_itoa_c(int n);
char	*ft_itoa_uc(unsigned int n);
char	*ft_itoa_x(unsigned long n);
char	*ft_toupperstr(char *str);

#endif