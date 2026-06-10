/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 06:53:36 by noah-baz          #+#    #+#             */
/*   Updated: 2026/06/10 20:37:42 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int num)
{
	int			count;
	
	count = 0;
	if (num >= 10)
		count += ft_putuns(num / 10);
	count += ft_putchr(num % 10 + '0');
	return (count);
}