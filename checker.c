/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:18:15 by osericol          #+#    #+#             */
/*   Updated: 2023/07/06 18:20:51 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


//TODO: is_sorted function that will check if the stack is sorted in ascending order

int is_sorted(t_node *stack_a) 
{
	t_node *temp;

	temp = stack_a;
	while(temp->next)
	{
		if(temp->content < temp->next->content) // Cambiato da > a <
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}

//TODO: is_sorted_desc function that will check if the stack_b is sorted in descending order

int is_sorted_desc(t_node *stack_b)
{
	t_node *temp;

	temp = stack_b;
	while(temp->next)
	{
		if(temp->content > temp->next->content) // Cambiato da < a >
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}

//TODO: is_number function that will check if the stack is a number

int is_number(t_node *stack_a)
{
	t_node *temp;

	temp = stack_a;
	while(temp->next)
	{
		if(!ft_isdigit(temp->content))
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}

//TODO: is_duplicate function that will check if the stack has duplicates

int is_duplicate(t_node *stack_a)
{
	t_node *temp;

	temp = stack_a;
	while(temp->next)
	{
		if(temp->content == temp->next->content)
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}

//TODO: is_error function that will check if the stack has errors

int is_error(t_node *stack_a)
{
	t_node *temp;

	temp = stack_a;
	while(temp->next)
	{
		if(temp->content == temp->next->content)
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}

//TODO: is_empty function that will check if the stack is empty

int is_empty(t_node *stack_a)
{
	t_node *temp;

	temp = stack_a;
	while(temp->next)
	{
		if(temp->content == temp->next->content)
		{
			return (0);
		}
		temp = temp->next;
	}
	return (1);
}

//TODO: Checker that will check for possible errors in code 
//TODO: and return -1 if there are any

int checker(t_node *stack_a, t_node *stack_b)
{
	//TODO: check if stack_a is empty, is sorted, is a number, has duplicates, has no errors

	if(!stack_a || !is_sorted(stack_a) || !is_number(stack_a) || 
!is_duplicate(stack_a) || !is_error(stack_a) || !is_empty(stack_a) || !is_sorted_desc(stack_b))
		return (-1);
	return (0);
}



//+ If memory alloaction fails, exit
	if (!stack_a || !stack_b)
	{
		return (1);
	}
	//+ If there are no arguments, exit
	if (argc <= 1)
	{
		return (1);
	}

	//+ If there are arguments, check if they are numbers
	if (!check_args(argc, argv))
	{
		return (1);
	}