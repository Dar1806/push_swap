/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:39:58 by nmeunier          #+#    #+#             */
/*   Updated: 2026/02/25 16:48:00 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef struct z_list
{
	int				content;
	struct z_list	*next;
}	n_list;

n_list	*create_mult_arg(char **tab);
int		parsing(char **tab, int ac);
n_list	*create_one_arg(char *tab);
int		create_list(char **tab);
n_list	*create_node(char *str);
int		verif_number(char *tab);
void	free_tab(char **tab);

#endif