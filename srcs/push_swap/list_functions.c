/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:25:23 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/10 14:48:30 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			add_element(t_stack *begin, t_stack *stack, int data)
{
	t_stack		*elem;

	if (stack == NULL)
	{
		if (!(stack = (t_stack *)malloc(sizeof(t_stack))))
			return (-1);
		stack->data = data;
		stack->next = NULL;
		begin = stack;
	}
	else
	{
		if (!(elem = (t_stack *)malloc(sizeof(t_stack))))
			return (-1);
		elem->data = data;
		elem->next = stack;
		begin = elem;
	}
	return (0);
}

void		remove_element(t_stack *begin, t_stack *elem)
{
	begin = elem->next;
	free(elem);
}

int			add_last_element(t_stack *begin, int data)
{
	t_stack		*tmp;
	t_stack		*elem;

	tmp = begin;
	if (begin == NULL)
	{
		if (!(begin = (t_stack *)malloc(sizeof(t_stack))))
			return (-1);
		begin->data = data;
		begin->next = NULL;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		if (!(elem = (t_stack *)malloc(sizeof(t_stack))))
			return (-1);
		elem->data = data;
		elem->next = NULL;
		tmp->next = elem;
	}
	return (0);
}

void		remove_last_element(t_stack *begin)
{
	t_stack		*tmp;

	tmp = begin;
	while (tmp->next != NULL)
		tmp = tmp->next;
	free(tmp);
}
