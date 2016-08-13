/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:25:23 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/13 14:49:37 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack			*add_element(t_stack *begin, int data)
{
	t_stack		*elem;

	if (!(elem = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	elem->prev = NULL;
	if (begin != NULL)
	{
		elem->next = begin;
		return (elem);
	}
	return (begin);
}

t_stack			*remove_element(t_stack *begin)
{
	if (begin == NULL)
		return (NULL);
	if (begin->next == NULL)
	{
		free(begin);
		return (NULL);
	}
	begin = begin->next;
	free(begin->prev);
	begin->prev = NULL;
	return (begin);
}

t_stack			*add_last_element(t_stack *begin, int data)
{
	t_stack		*tmp;
	t_stack		*elem;

	tmp = begin;
	if (!(elem = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	elem->prev = NULL;
	if (begin != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = elem;
		elem->prev = tmp;
	}
	else
		begin = elem;
	return (begin);
}

t_stack			*remove_last_element(t_stack *begin)
{
	t_stack		*tmp;

	if (begin == NULL)
		return (NULL);
	else if (begin->next == NULL)
	{
		free(begin);
		begin = NULL;
		return (begin);
	}
	tmp = begin;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	free(tmp->next);
	tmp->next = NULL;
	return (begin);
}
