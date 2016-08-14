/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:41:13 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/14 13:52:12 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*ra(t_stack *a)
{
	a = rotate(a);
	ft_printf("ra");
	return (a);
}

t_stack		*rb(t_stack *b)
{
	b = rotate(b);
	ft_printf("rb");
	return (b);
}

t_a_and_b	rr(t_a_and_b stack)
{
	stack.a = rotate(stack.a);
	stack.b = rotate(stack.b);
	ft_printf("rr");
	return (stack);
}
