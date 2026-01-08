/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 15:17:18 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/03 17:40:44 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    push(t_list **Node, int content)
// {
// 	t_list	*New;
// 	New = malloc(sizeof(*New));
// 	New -> content = content;
// 	New -> next = *Node;
// 	*Node = New;
// }

void	rotate(t_list **Node)
{
	t_list *temp;
	t_list *current;

	temp = *Node;
	current = *Node;
	*Node = temp -> next;
	while (current -> next)
		current = current -> next;

	current -> next = temp;
	temp -> next = NULL;
}

// int main(void)
// {
// 	t_list *Stack;
// 	Stack = NULL;
// 	push(&Stack, 1);
// 	push(&Stack, 2);
// 	push(&Stack, 3);
// 	t_list *current;
// 	current = Stack;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// 	printf("\n");
// 	rotate(&Stack);
// 	current = Stack;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// }