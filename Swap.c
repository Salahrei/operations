/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:26:01 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/03 22:30:59 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	Swap(t_list **Node)
{
	int	count;
	count = ft_lstsize(*Node);
	if (count < 2)
		return;	
	t_list *New;
	t_list *temp;
	New = *Node;
	temp = New -> next;

	New -> next = temp -> next;
	*Node = temp;
	temp ->next = New;
}
