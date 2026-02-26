/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:10:37 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/26 18:51:04 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_stack *stack_a)
{
	t_stack	*current;

	current = stack_a;
	while (current && current->next)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

void	sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	stack_b->size = 0;
	while (!is_sorted(stack_a))
	{
		if (stack_a->size == 2)
			sa(stack_a);
	}
}