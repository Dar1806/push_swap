/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:04:12 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/03 15:45:20 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	indexer(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*compare;

	current = *stack_a;
	while (current)
	{
		current->index = 1;
		compare = *stack_a;
		while (compare)
		{
			if (current->content > compare->content)
				current->index++;
			compare = compare->next;
		}
		current = current->next;
	}

}

void	radix(t_stack **stack_a, t_stack **stack_b)
{
	int	max_bits;
	int	bits;
	int	i;
	int	size;

	size = get_size(stack_a);
	max_bits = 1;
	bits = -1;
	while (size >> max_bits)
		max_bits++;
	while (++bits < max_bits)
	{
		i = -1;
		while (++i < size)
		{
			if (((*stack_a)->index >> bits & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while(*stack_b)
			pa(stack_a, stack_b);
	}
}
