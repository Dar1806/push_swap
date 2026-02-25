/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:41:31 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/25 17:53:30 by nmeunier         ###   ########.fr       */
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

void	free_list(n_list *head)
{
    n_list	*temp;

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}

n_list	*create_node(char *str, n_list *head)
{
	n_list	*node;
	int		valid;

	node = malloc(sizeof(n_list));
	if (!node)
		return (NULL);
	valid = verif_number(str);
	if (valid == -1)
	{
		free(node);
		free_list(head);
		return (NULL);
	}
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
		new_node = create_node(tab[i], head);
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
