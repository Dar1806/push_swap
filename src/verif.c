/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:04:39 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/24 17:03:24 by nmeunier         ###   ########.fr       */
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

int	double_number(char *tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == '-' || tab[i] == '+')
			i++;
		while (tab[i] >= '0' && tab[i] <= '9')
			i++;
		j = i;
	}
	return (0);
}

int	parsing(char **tab, int ac)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (verif_number(tab[i]) == -1)
			return (-1);
		i++;
	}
	i = 1;
	if (ac == 2)
	{
		if (double_number(tab[1]) == -1)
			return (-1);
	}
	return (0);
}
