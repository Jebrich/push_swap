/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osericol <osericol@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:00:08 by osericol          #+#    #+#             */
/*   Updated: 2023/04/26 12:03:01 by osericol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst && lst)
	{
		c = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = c;
	}
}
