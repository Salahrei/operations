/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rreverse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:15:13 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/03 22:14:29 by abdesala         ###   ########.fr       */
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

void    Rreverse(t_list **Node1, t_list **Node2)
{
    reverse(Node1);
    reverse(Node2);
}

// int main(void)
// {
// 	t_list *Stack1;
//     t_list *Stack2;
// 	Stack1 = NULL;
//     Stack2 = NULL;
// 	push(&Stack1, 3);
// 	push(&Stack1, 2);
//     push(&Stack1, 1);
// 	push(&Stack2, 3);
// 	push(&Stack2, 2);
//     push(&Stack2, 1);
// 	t_list *current;
// 	current = Stack1;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// 	printf("\n");
//     current = Stack2;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
//     printf("\n");
// 	Rreverse(&Stack1, &Stack2);
// 	current = Stack1;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
//     printf("\n");
//     	current = Stack2;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// }