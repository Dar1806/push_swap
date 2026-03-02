/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:08:47 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/02 18:01:28 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **stack_a)
{
	int	temp_c;
	int	temp_i;

	if (!stack_a || !(*stack_a)->next)
		return ;
	temp_c = (*stack_a)->content;
	temp_i = (*stack_a)->index;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->index = (*stack_a)->next->index;
	(*stack_a)->next->content = temp_c;
	(*stack_a)->next->index = temp_i;
	write(1, "sa\n", 3);
}

void	sb(t_stack **stack_b)
{
	int	temp_c;
	int	temp_i;

	if (!stack_b || !(*stack_b)->next)
		return ;
	temp_c = (*stack_b)->content;
	temp_i = (*stack_b)->index;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->index = (*stack_b)->next->index;
	(*stack_b)->next->content = temp_c;
	(*stack_b)->next->index = temp_i;
	write(1, "sb\n", 3);
}