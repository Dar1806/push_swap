/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:41:31 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/26 18:26:30 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_list(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

int	verif_number(char *tab)
{
	int	i;

	i = 0;
	if (tab[0] == '\0')
		return (-1);
	while (tab[i])
	{
		if (tab[i] == '-' || tab[i] == '+')
		{
			if (tab[i + 1] >= '0' && tab[i + 1] <= '9'
				&& (i == 0 || tab[i - 1] == ' '
					|| tab[i - 1] == '\t'))
				i++;
			else
				return (-1);
		}
		if ((tab[i] >= '0' && tab[i] <= '9')
			|| tab[i] == ' ' || tab[i] == '\t')
			i++;
		else
			return (-1);
	}
	return (0);
}

int	is_valid(t_stack *nrb1)
{
	t_stack	*current;
	t_stack	*nbr2;

	current = nrb1;
	while (current)
	{
		nbr2 = current->next;
		while (nbr2)
		{
			if (current->content == nbr2->content)
				return (-1);
			nbr2 = nbr2->next;
		}
		current = current->next;
	}
	return (0);
}
