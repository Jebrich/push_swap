/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:48:00 by osericol          #+#    #+#             */
/*   Updated: 2023/07/07 10:32:42 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "./libft/ft_atoi.c"
#include "./libft/ft_split.c"
#include "./libft/ft_strchr.c"


//+ Function to initialize stacks A and B
void initialize_stacks(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->top = NULL;
	stack_a->size = 0;
	stack_b->top = NULL;
	stack_b->size = 0;
}

//+ Function to create a new node and add it to stack A
void add_node_to_stack_a(t_stack *stack_a, int content, int index)
{
    t_node *new_node;
    t_node *temp;

    new_node = (t_node *)malloc(sizeof(t_node));
    new_node->content = content;
    new_node->index = index;
    new_node->next = NULL;

    if (stack_a->top == NULL)
    {
        new_node->prev = NULL;
        stack_a->top = new_node;
    }
    else
    {
        temp = stack_a->top;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
    stack_a->size++;
}

//+ Function to print stack A
void print_stack_a(t_stack *stack_a)
{
	t_node *temp;

	temp = stack_a->top;
	while (temp != NULL)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
}

int main(int argc, char *argv[])
{
    // Initialize variables
    int i = 0;

    // Initialize stacks A and B
    t_stack *stack_a;
    t_stack *stack_b;

    stack_a = (t_stack *)malloc(sizeof(t_stack));
    stack_b = (t_stack *)malloc(sizeof(t_stack));

    initialize_stacks(stack_a, stack_b);
	
    // Check if argv is a string with spaces
    if (argc == 2 && ft_strchr(argv[1], ' '))
{
    // Split string into array of strings
    char **args = ft_split(argv[1], ' ');
	
    // Add each string to stack A as an integer
    i = 0;
		while (args[i] != NULL)
    {
        add_node_to_stack_a(stack_a, ft_atoi(args[i]), i);
        i++;
    }
	
    // Free memory
    free(args);
}
    else
    {
		i = 1;
        // Add each argument to stack A as an integer
        while (i < argc)			
        {
            add_node_to_stack_a(stack_a, ft_atoi(argv[i]), i);
            i++;
        }
    }

    // Print stack A
	print_stack_a(stack_a);

    // Free memory
    free(stack_a);
    free(stack_b);
    return (0);
}