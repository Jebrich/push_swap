/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:07:34 by osericol          #+#    #+#             */
/*   Updated: 2023/07/06 19:22:20 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
    int	tmp;

    if (stack_a->size < 2)
        return ;
    tmp = stack_a->top->content;
    stack_a->top->content = stack_a->top->next->content;
    stack_a->top->next->content = tmp;
}


void	pa(t_stack *stack_a, t_stack *stack_b)
{
    t_node	*tmp;

    if (stack_b->size < 1)
        return ;
    tmp = stack_b->top;
    stack_b->top = stack_b->top->next;
    tmp->next = stack_a->top;
    stack_a->top = tmp;
    stack_a->size++;
    stack_b->size--;
}

void ra()
{

	
}

void rra()
{
	
}