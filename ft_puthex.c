/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 06:53:11 by noah-baz          #+#    #+#             */
/*   Updated: 2026/06/06 07:10:13 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
    char        *hex;
	int			count;
	char		rest;
	
	hex = "0123456789abcdef";
	count = 0;
	if (format = 'X')
		hex = "0123456789ABCDEF";
	if (num >= 16)
		count += ft_puthex(num / 10, format);
	rest = hex[num % 10] + '0';
	write(1, &rest, 1);
	count++;
	return (count);
}
