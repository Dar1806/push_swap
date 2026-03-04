/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:08:47 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/04 10:10:44 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **stack_a)
{
	int	temp_content;
	int	temp_index;

	if (!stack_a || !(*stack_a)->next)
		return ;
	temp_content = (*stack_a)->content;
	temp_index = (*stack_a)->index;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->index = (*stack_a)->next->index;
	(*stack_a)->next->content = temp_content;
	(*stack_a)->next->index = temp_index;
	write(1, "sa\n", 3);
}

void	sb(t_stack **stack_b)
{
	int	temp_content;
	int	temp_index;

	if (!stack_b || !(*stack_b)->next)
		return ;
	temp_content = (*stack_b)->content;
	temp_index = (*stack_b)->index;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->index = (*stack_b)->next->index;
	(*stack_b)->next->content = temp_content;
	(*stack_b)->next->index = temp_index;
	write(1, "sb\n", 3);
}
