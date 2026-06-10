/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:47:47 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/06/10 20:30:58 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

	int	ft_printf(const char *format, ...);
	int	ft_putchr(char c);
	int	ft_putstr(char *str); 
	int	ft_putnbr(int n); 
	int	ft_putptr(void *ptr);
	int	ft_puthex(unsigned long num, char format);
	int	ft_putuns(unsigned int num);

#endif