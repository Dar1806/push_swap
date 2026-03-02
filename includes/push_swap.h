/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:39:58 by nmeunier          #+#    #+#             */
/*   Updated: 2026/03/02 18:22:27 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	int				size;
	struct s_stack	*next;
}	t_stack;

void	sort_stack(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_four(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack_a);
int	stack_size(t_stack *stack);
t_stack	*create_node(char *str, t_stack *stack_a);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	radix_index(t_stack *stack_a);
t_stack	*create_mult_arg(char **tab);
t_stack	*parsing(char **tab, int ac);
void	free_list(t_stack *stack_a);
t_stack	*create_one_arg(char *tab);
int		is_valid(t_stack *nrb1);
int		create_list(char **tab);
int		verif_number(char *tab);
void	free_tab(char **tab);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rra(t_stack **stack_a);

#endif