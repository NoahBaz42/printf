/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:01:11 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/06/07 16:02:26 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *str)
{
    unsigned long   *ptr;
	int             i;
    
	if(!str)
		write(1, "(nil)", 5);
	ptr = (unsigned long  *)str;
	write(1, "0x", 2);
    i = ft_puthex(ptr, 'x');
	return (i + 2);
}