/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:49:00 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/03 21:19:24 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push(t_list **Node, int content)
// {
// 	t_list	*New;
// 	New = malloc(sizeof(*New));
// 	New -> content = content;
// 	New -> next = *Node;
// 	*Node = New;
// }

void	sort_3(t_list **Node)
{
	t_list *current;
	t_list *max;
	t_list *temp;
	current = *Node;
	temp = *Node;
	max = current;
	while (current -> next)
	{		if (current -> next -> content > max -> content)
			max = current -> next;
		current = current -> next;
	}
	if(max -> content == temp -> content)
		rotate(Node);
	else if(temp -> next -> content == max -> content)
		reverse(Node);
	temp = *Node;
	if (temp -> content > temp -> next -> content)
		Swap(Node);
}

// int main(void)
// {
//     t_list *Stack;
// 	Stack = NULL;
// 	push(&Stack, 20);
// 	push(&Stack, 30);
// 	push(&Stack, 10);
// 	t_list *current;
// 	current = Stack;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}
// 	printf("\n");
// 	sort_3(&Stack);
// 	current = Stack;
// 	while (current)
// 	{
// 		printf("%d ", current -> content);
// 		current = current -> next;
// 	}	
// }