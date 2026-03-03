/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:04:48 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/03 11:08:36 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_size(t_stack **stack)
{
	t_stack *temp;
	int	size;

	temp = *stack;
	size = 0;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}