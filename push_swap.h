/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:48:02 by osericol          #+#    #+#             */
/*   Updated: 2023/07/07 11:30:41 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#include "./printf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct s_node
{
	int content;
	int index;
	struct s_node *next;
	struct s_node *prev;
} t_node;

typedef struct s_stack
{
	t_node *bottom;
	t_node *top;
	int size;
} t_stack;


#endif