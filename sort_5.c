/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:51:07 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/06 16:44:54 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_list **Node, int content)
{
	t_list *New;
	New = malloc(sizeof(*New));
	New -> content = content;
	New -> next = *Node;
	*Node = New;
}

void	sort_5(t_list **Node1, t_list **Node2)
{
	t_list *current;
	t_list *min;
	current = *Node1;
	min = *Node1;
	while (current -> next)
	{
		if (current -> next -> content < min -> content)
			min = current ->next;
		current = current -> next;
	}
	current = *Node1;
	while (current -> content != min -> content)
	{
		current = current -> next;
		rotate(Node1);
	}
	Push_B(Node1, Node2);
	sort_4(Node1, Node2);
	Push_A(Node1, Node2);
}

int main(void)
{
	t_list *Stack1;
	t_list *Stack2;
	Stack1 = NULL;
	Stack2 = NULL;
	push(&Stack1, 10);
	push(&Stack1, 20);
	push(&Stack1, 30);
	push(&Stack1, 40);
	push(&Stack1, 50);
	t_list *current;
	current = Stack1;
	while (current)
	{
		printf("%d ", current -> content);
		current = current -> next;
	}
	printf("\n");
	sort_5(&Stack1, &Stack2);
	current = Stack1;
	while (current)
	{
		printf("%d ", current -> content);
		current = current -> next;
	}
}