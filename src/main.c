/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:55:02 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/04 10:05:12 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac <= 1)
		return (0);
	stack_b = NULL;
	if (check_args(ac, av) == -1)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	stack_a = parsing(av, ac);
	if (!stack_a)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	indexer(&stack_a);
	sort_stack(&stack_a, &stack_b);
	free_list(stack_a);
	free_list(stack_b);
}
