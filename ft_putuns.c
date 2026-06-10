/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 06:53:36 by noah-baz          #+#    #+#             */
/*   Updated: 2026/06/06 07:00:38 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int num)
{
    long int	nb;
	int			count;
	int			rest;
	
	nb = num;
	count = 0;
	if (nb >= 0 && nb <= 9)
	{
		write(1, nb + '0', 1);
		count++;
	}
	if (nb > 9)
		count += ft_putuns(nb / 10);
	rest = (nb % 10) + '0';
	write(1, &rest, 1);
	count++;
	return (count);
}