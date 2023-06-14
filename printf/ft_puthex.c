/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:17:34 by osericol          #+#    #+#             */
/*   Updated: 2023/04/26 12:06:00 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char *hex)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex(n / 16, hex);
	i += ft_putchar(hex[n % 16]);
	return (i);
}
