/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 06:53:11 by noah-baz          #+#    #+#             */
/*   Updated: 2026/06/10 20:30:45 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, char format)
{
    char        *hex;
	int			count;
	char		rest;
	
	hex = "0123456789abcdef";
	count = 0;
	if ((format = 'X'))
		hex = "0123456789ABCDEF";
	if (num >= 16)
		count += ft_puthex(num / 10, format);
	rest = hex[num % 10] + '0';
	write(1, &rest, 1);
	count++;
	return (count);
}
