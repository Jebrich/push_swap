/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:14:46 by osericol          #+#    #+#             */
/*   Updated: 2023/04/26 12:06:02 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		n = (147483648);
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + 48);
	return (count);
}
