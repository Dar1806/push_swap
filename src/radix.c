/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:04:12 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/26 19:13:04 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	radix_index(t_stack *stack_a)
{
	t_stack	*current;
	t_stack	*compare;

	current = stack_a;
	while (current)
	{
		current->index = 0;
		compare = stack_a;
		while (compare)
		{
			if (current->content > compare->content)
				current->index++;
			compare = compare->next;
		}
		current = current->next;
	}
}