/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:41:31 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/14 13:52:01 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*rra(t_stack *a)
{
	a = reverse_rotate(a);
	ft_printf("rra");
	return (a);
}

t_stack		*rrb(t_stack *b)
{
	b = reverse_rotate(b);
	ft_printf("rrb");
	return (b);
}

t_a_and_b	rrr(t_a_and_b stack)
{
	stack.a = reverse_rotate(stack.a);
	stack.b = reverse_rotate(stack.b);
	ft_printf("rrr");
	return (stack);
}
