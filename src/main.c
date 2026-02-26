/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:55:02 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/26 19:07:37 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = calloc(1, sizeof(t_stack));
	stack_a = calloc(1, sizeof(t_stack));
	stack_a->size = 0;
	stack_a->index = 0;
	if (ac <= 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	stack_a = parsing(av, ac);
	if (!stack_a)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	radix_index(stack_a);
	while (stack_a)
	{
		printf("index: %d\n", stack_a->index);
		stack_a = stack_a->next;
	}
	sort_stack(stack_a, stack_b);
	while (stack_a)
	{
		printf("%d\n", stack_a->content);
		stack_a = stack_a->next;
	}
}
