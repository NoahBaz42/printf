/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:01:11 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/06/10 20:32:12 by nbaz-sil         ###   ########.fr       */
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
    i = ft_puthex((unsigned long)ptr, 'x');
	return (i + 2);
}