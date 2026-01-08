/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:02:33 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/06 17:25:29 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    push(t_list **Node, int content)
// {
// 	t_list *New;
//     New = malloc(sizeof(*New));
//     New -> content = content;
//     New -> next = *Node;
//     *Node = New;
// }

void	sort_4(t_list **Node1, t_list **Node2)
{
    t_list *current;
    t_list *min;
    current = *Node1;
    min = current;
	while (current -> next)
	{
		if (current -> next -> content < min -> content)
			min = current -> next;
		current = current -> next;
	}
	current = *Node1;
	while (current -> content != min -> content)
	{
		current = current -> next;
		rotate(Node1);
	}
	Push_B(Node1, Node2);
	sort_3(Node1);
	Push_A(Node1, Node2);
}

// int main(void)
// {
// 	t_list *Stack_a;
//     t_list *Stack_b;
//     Stack_a = NULL;
//     Stack_b = NULL;
//     push(&Stack_a, 11);
// 	push(&Stack_a, 1);
// 	push(&Stack_a, 97);
// 	push(&Stack_a, 22);
// 	t_list *current;
// 	current = Stack_a;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// 	printf("\n");
// 	sort_4(&Stack_a, &Stack_b);
// 	current = Stack_a;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// }