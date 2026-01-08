/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdesala <abdesala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:50:12 by abdesala          #+#    #+#             */
/*   Updated: 2026/01/05 12:28:23 by abdesala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_array(int *arr, int size)
{
	int i;
	int j;
	int temp;
	i = 0;
	while (size - 1> i)
	{
		j = i + 1;
		while (size > j)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	return arr;
}
int main(void)
{
	int *result;
    int arr[] = {40, 30, 20, 10};   
	result = sort_array(arr, 4);
    int i = 0;
    while (4 > i)
    {
        printf("%d ", arr[i]);
        i++;
    }
}