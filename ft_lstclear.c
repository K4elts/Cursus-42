/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:19:15 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/06/05 13:02:39 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next;

	current_node = *lst;
	while (current_node != NULL)
	{
		next = current_node->next;
		del(current_node->content);
		free(current_node);
		current_node = next;
	}
	*lst = NULL;
}
