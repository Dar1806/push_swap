/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:04:39 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/25 16:50:48 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

n_list	*create_node(char *str)
{
	n_list	*node;
	int		valid;

	node = malloc(sizeof(n_list));
	if (!node)
		return (NULL);
	valid = verif_number(str);
	if (valid == -1)
		return (NULL);
	valid = ft_atoi(str);
	node->content = valid;
	node->next = NULL;
	return (node);
}

n_list	*create_mult_arg(char **tab)
{
	int		i;
	n_list	*head;
	n_list	*new_node;
	n_list	*current;

	i = 0;
	head = NULL;
	while (tab[i])
	{
		new_node = create_node(tab[i]);
		if (!new_node)
			return (NULL);
		if (head == NULL)
			head = new_node;
		else
			current->next = new_node;
		current = new_node;
		i++;
	}
	return (head);
}

n_list	*create_one_arg(char *tab)
{
	char	**split;
	n_list	*head;

	split = ft_split(tab, ' ');
	if (!split)
		return (NULL);
	head = create_mult_arg(split);
	free_tab(split);
	return (head);
}

int	parsing(char **tab, int ac)
{
	n_list	*head;

	if (ac == 2)
		head = create_one_arg(tab[1]);
	else
		head = create_mult_arg(tab + 1);
	if (!head)
		return (-1);
	while (head)
	{
		printf("%d\n", head->content);
		head = head->next;
	}
	return (0);
}
