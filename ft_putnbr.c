/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:00:29 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/06/06 04:38:50 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nb;
	int			count;
	int			rest;
	
	nb = n;
	count = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		count++;
	}
	if (nb >= 0 && nb <= 9)
	{
		write(1, nb + '0', 1);
		count++;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	rest = (nb % 10) + '0';
	write(1, &rest, 1);
	count++;
	return (count);
}
#include <stdio.h>
int main (void)
{
	ft_putnbr(-2147483647);
    printf("\n%d\n", -2147483647);
} 
