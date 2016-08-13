/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:39:09 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/13 17:40:51 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*sa(t_stack *a)
{
	a = swap(a);
	ft_printf("sa");
	return (a);
}

t_stack		*sb(t_stack *b)
{
	b = swap(b);
	ft_printf("sb");
	return (b);
}

t_a_and_b	ss(t_a_and_b stack)
{
	stack.a = swap(stack.a);
	stack.b = swap(stack.b);
	ft_printf("ss");
	return (stack);
}
