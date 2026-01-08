/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:24:43 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/06 11:04:42 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct t_list
{
	int content;
	int	index;
	struct t_list *next;
}t_list;

int	ft_lstsize(t_list *Node);
void	Swap(t_list **Node);
void	reverse(t_list **Node);
void	rotate(t_list **Node);
void	Push_A(t_list **Node1, t_list **Node2);
void	Push_B(t_list **Node1, t_list **Node2);
void    Rreverse(t_list **Node1, t_list **Node2);
void    Rrotate(t_list **Node1, t_list **Node2);
void    Sswap(t_list **Node1, t_list **Node2);
void	sort_3(t_list **Node);
void	sort_4(t_list **Node1, t_list **Node2);
void	sort_5(t_list **Node1, t_list **Node2);
void	indexing(t_list **Node);

#endif