/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:48:02 by osericol          #+#    #+#             */
/*   Updated: 2023/06/13 15:58:21 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int content;
	int index;
	struct s_stack *next; 
	struct s_stack *before;
} t_stack;





#endif
