/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:54:47 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/04 09:59:04 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	chose_side(t_stack **stack_a, int index)
{
	int		size;
	int		position;
	t_stack	*tmp;

	size = get_size(stack_a);
	position = 0;
	tmp = *stack_a;
	while (tmp && tmp->index != index)
	{
		position++;
		tmp = tmp->next;
	}
	if (position <= size / 2)
	{
		while ((*stack_a)->index != index)
			ra(stack_a);
	}
	else
	{
		while ((*stack_a)->index != index)
			rra(stack_a);
	}
}

void	sort_three(t_stack **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first < second && second > third && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > second && second < third && first < third)
		sa(stack_a);
	else if (first < second && second > third && first > third)
		rra(stack_a);
	else if (first > second && second < third && first > third)
		ra(stack_a);
	else if (first > second && second > third && first > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	chose_side(stack_a, 0);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	chose_side(stack_a, 0);
	pb(stack_a, stack_b);
	chose_side(stack_a, 1);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
