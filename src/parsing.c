/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:04:39 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/03 19:27:11 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*create_node(char *str, t_stack *stack_a)
{
	t_stack	*node;
	long	nbr;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	if (verif_number(str) == -1)
	{
		free(node);
		free_list(stack_a);
		return (NULL);
	}
	nbr = ft_atoi_long(str);
	if (nbr > 2147483647 || nbr < -2147483648L)
	{
		free(node);
		free_list(stack_a);
		return (NULL);
	}
	node->content = (int)nbr;
	node->next = NULL;
	return (node);
}

t_stack	*create_mult_arg(char **tab)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*new_node;
	t_stack	*current;

	i = 0;
	stack_a = NULL;
	while (tab[i])
	{
		new_node = create_node(tab[i], stack_a);
		if (!new_node)
			return (NULL);
		if (stack_a == NULL)
			stack_a = new_node;
		else
			current->next = new_node;
		current = new_node;
		i++;
	}
	return (stack_a);
}

t_stack	*create_one_arg(char *tab)
{
	char	**split;
	t_stack	*stack_a;

	split = ft_split(tab, ' ');
	if (!split)
		return (NULL);
	stack_a = create_mult_arg(split);
	free_tab(split);
	return (stack_a);
}

t_stack	*parsing(char **tab, int ac)
{
	t_stack	*stack_a;
	if (ac == 2)
		stack_a = create_one_arg(tab[1]);
	else
		stack_a = create_mult_arg(tab + 1);
	if (!stack_a)
		return (NULL);
	if (is_valid(stack_a) == -1)
	{
		free_list(stack_a);
		return (NULL);
	}
	
	return (stack_a);
}
