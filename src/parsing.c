/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:04:39 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/25 18:13:46 by nmeunier         ###   ########.fr       */
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

int	is_valid(n_list *head)
{
	n_list	*same;

	while (head)
	{
		same = head->next;
		while (same)
		{
			if (head->content == same->content)
				return (-1);
			same = same->next;
		}
		head = head->next;
	}
	return (0);
}

n_list	*parsing(char **tab, int ac)
{
	n_list	*head;

	if (ac == 2)
		head = create_one_arg(tab[1]);
	else
		head = create_mult_arg(tab + 1);
	if (!head)
		return (NULL);
	if (is_valid(head) == -1)
	{
		free_list(head);
		return (NULL);
	}
	return (head);
}
