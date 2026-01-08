/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:30:12 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/03 22:14:37 by abdesala         ###   ########.fr       */
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

void    Rrotate(t_list **Node1, t_list **Node2)
{
    rotate(Node1);
    rotate(Node2);
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
// 	Rrotate(&Stack1, &Stack2);
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