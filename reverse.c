/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 18:18:39 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/02 21:29:17 by abdesala         ###   ########.fr       */
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

void	reverse(t_list **Node)
{
	t_list *current;
	t_list *temp;
	t_list *New;
	temp = *Node;
	current = *Node;
	New = *Node;
	while (New -> next)
		New = New -> next;
	while (current -> next -> next)
		current = current -> next;
	current -> next = NULL;
	*Node = New;
	New -> next = temp;
}

// int main(void)
// {
// 	t_list *Stack;
// 	Stack = NULL;
// 	push(&Stack, 3);
// 	push(&Stack, 2);
// 	push(&Stack, 1);
// 	t_list *current;
// 	current = Stack;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// 	printf("\n");
// 	reverse(&Stack);
// 	current = Stack;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// }