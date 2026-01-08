/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PushB.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:31:39 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/06 17:23:43 by abdesala         ###   ########.fr       */
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

void    Push_B(t_list **Node1, t_list **Node2)
{
    int size;
    size = ft_lstsize(*Node1);
    if (size == 0)
        return;
    t_list *current;
    current = *Node1;
    *Node1 = current -> next;
    current -> next = *Node2;
    *Node2 = current;
}

// int main(void)
// {
//     t_list *Stack_a;
//     t_list *Stack_b;

// 	Stack_a = NULL;
// 	Stack_b = NULL;
// 	push(&Stack_a, 10);
// 	push(&Stack_a, 20);
// 	push(&Stack_a, 30);
// 	t_list *current;
// 	current = Stack_a;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// 	printf("\n");
// 	Push_B(&Stack_a, &Stack_b);
// 	Push_B(&Stack_a, &Stack_b);
// 	current = Stack_b;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// }