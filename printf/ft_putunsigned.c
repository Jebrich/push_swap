/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:16:07 by osericol          #+#    #+#             */
/*   Updated: 2023/04/26 12:06:04 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putunsigned(n / 10);
	count += ft_putchar(n % 10 + 48);
	return (count);
}
