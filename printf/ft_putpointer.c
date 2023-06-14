/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:17:55 by osericol          #+#    #+#             */
/*   Updated: 2023/04/26 12:06:03 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n, char *ptr)
{
	int	i;

	i = 2;
	ft_putchar('0');
	ft_putchar('x');
	i += ft_puthex(n, ptr);
	return (i);
}
