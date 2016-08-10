/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 14:25:23 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/10 16:37:47 by lnieto-m         ###   ########.fr       */
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
	if (begin != NULL)
	{
		elem->next = begin;
		return (elem);
	}
	return (begin);
}

void		remove_element(t_stack *begin, t_stack *elem)
{
	begin = elem->next;
	free(elem);
}

t_stack		*add_last_element(t_stack *begin, int data)
{
	t_stack		*tmp;
	t_stack		*elem;

	tmp = begin;
	if (!(elem = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	if (begin != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = elem;
	}
	return (elem);
}

void		remove_last_element(t_stack *begin)
{
	t_stack		*tmp;

	tmp = begin;
	while (tmp->next != NULL)
		tmp = tmp->next;
	free(tmp);
}
