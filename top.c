/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:48:25 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/03 20:57:30 by abdesala         ###   ########.fr       */
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

t_list *get_top(t_list **Node)
{
    t_list *current;
    current = *Node;
    return current;
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
//     t_list *top;
//     top = get_top(&Stack);
//     printf("%d", top -> content);
// }