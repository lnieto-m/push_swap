/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 11:16:52 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/14 11:43:23 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libftprintf.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct		s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct		s_a_and_b
{
	t_stack			*a;
	t_stack			*b;
}					t_a_and_b;

int					ft_error(int ac, char **av);
int					ft_doublon(int ac, char **av);
void				print_error(void);

/*
** -------------- LIST FUNCTIONS -------------------
*/

t_stack				*add_element(t_stack *begin, int data);
t_stack				*remove_element(t_stack *begin);
t_stack				*add_last_element(t_stack *begin, int data);
t_stack				*remove_last_element(t_stack *begin);
void				delete_stack(t_stack *stack);

/*
** -------------- BASIC OPERATIONS ------------------
*/

t_stack				*swap(t_stack *stack);
t_a_and_b			pusha(t_a_and_b ab);
t_a_and_b			pushb(t_a_and_b ab);
t_stack				*rotate(t_stack *stack);
t_stack				*reverse_rotate(t_stack *stack);

/*
** -------------- ADVANCED OPERATIONS ---------------
*/

t_stack				*sa(t_stack *a);
t_stack				*sb(t_stack *b);
t_stack				*ra(t_stack *a);
t_stack				*rb(t_stack *b);
t_stack				*rra(t_stack *a);
t_stack				*rrb(t_stack *b);
t_a_and_b			ss(t_a_and_b stack);
t_a_and_b			pa(t_a_and_b stack);
t_a_and_b			pb(t_a_and_b stack);
t_a_and_b			rr(t_a_and_b stack);
t_a_and_b			rrr(t_a_and_b stack);

#endif
