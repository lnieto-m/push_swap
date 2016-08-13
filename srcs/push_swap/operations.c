/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:17:37 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/13 18:03:43 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*swap(t_stack *stack)
{
	int		tmp;

	if (stack == NULL || stack->next == NULL)
		return (stack);
	tmp = stack->next->data;
	stack->next->data = stack->data;
	stack->data = tmp;
	return (stack);
}

t_a_and_b		pushb(t_a_and_b stack)
{
	if (stack.a == NULL)
		return (stack);
	stack.b = add_element(stack.b, stack.a->data);
	stack.a = remove_element(stack.a);
	return (stack);
}

t_a_and_b		pusha(t_a_and_b stack)
{
	if (stack.b == NULL)
		return (stack);
	stack.a = add_element(stack.a, stack.b->data);
	stack.b = remove_element(stack.b);
	return (stack);
}

t_stack		*rotate(t_stack *stack)
{
	if (stack == NULL || stack->next == NULL)
		return (NULL);
	stack = stack->next;
	stack = add_last_element(stack, stack->prev->data);
	free(stack->prev);
	return (stack);
}

t_stack		*reverse_rotate(t_stack *stack)
{
	t_stack		*tmp;

	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (stack == NULL || stack->next == NULL)
		return (stack);
	stack = add_element(stack, tmp->data);
	tmp->prev->next = NULL;
	free(tmp);
	return (stack);
}
