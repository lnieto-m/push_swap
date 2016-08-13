/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:41:31 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/13 17:42:27 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*rra(t_stack *a)
{
	stack = reverse_rotate(a);
	ft_printf("rra");
	return (stack);
}

t_stack		*rrb(t_stack *b)
{
	stack = reverse_rotate(b);
	ft_printf("rrb");
	return (stack);
}

t_a_and_b	*rrr(t_a_and_b stack)
{
	stack.a = reverse_rotate(stack.a);
	stack.b = reverse_rotate(stack.b);
	ft_printf("rrr");
	return (stack);
}
