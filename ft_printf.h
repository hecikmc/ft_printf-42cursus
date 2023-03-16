/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:23:20 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/16 19:53:34 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/* 
This is the main function and it is performing of writing the main string 
on the screen and classifying each variable to later be able to print
it on the screen
*/
int		ft_printf(const char *str, ...);

/*
These functions are responsible for printing on the screen each of 
the admitted variables
*/
void	ft_putstr_c(char *str, int *cont);
void	ft_putchar_c(int c, int *total);
char	*ft_itoa_c(int n);
char	*ft_itoa_uc(unsigned int n);
char	*ft_itoa_x(unsigned long n);
char	*ft_toupperstr(char *str);

#endif
