/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:17:37 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/13 13:12:42 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap(t_stack *stack)
{
	int		tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->next->data;
	stack->next->data = stack->data;
	stack->data = tmp;
}

void		push(t_stack *a, t_stack *b)
{
	if (a == NULL)
		return ;
	b = add_element(b, a->data);
	a = remove_element(a);
}

void		rotate(t_stack *stack)
{
	if (stack == NULL || stack->next == NULL)
		return ;
	stack = stack->next;
	stack = add_last_element(stack, stack->prev->data);
	free(stack->prev);
}

void		reverse_rotate(t_stack *stack)
{
	t_stack		*tmp;

	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (stack == NULL || stack->next == NULL)
		return ;
	stack = add_element(stack, tmp->data);
	free(tmp);
}
