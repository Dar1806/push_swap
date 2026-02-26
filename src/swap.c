/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:08:47 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/26 18:37:45 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack_a)
{
	int	temp;

	temp = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = temp;
	write(1, "sa\n", 3);
}