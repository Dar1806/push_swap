/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:55:02 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/02 18:54:44 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*current;

	if (ac <= 1)
		return (0);
	stack_b = NULL;
	stack_a = parsing(av, ac);
	if (!stack_a)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	stack_b = NULL;
	radix_index(stack_a);
	current = stack_a;
	while (current)
	{
		printf("index: %d\n", current->index);
		current = current->next;
	}
	sort_stack(&stack_a, &stack_b);
	current = stack_a;
	while (current)
	{
		printf("content: %d\n", current->content);
		current = current->next;
	}
	current = stack_a;
	while (current)
	{
		printf("index: %d\n", current->index);
		current = current->next;
	}
}
