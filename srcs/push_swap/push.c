/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:48:20 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/13 17:41:09 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_a_and_b		pa(t_a_and_b stack)
{
	stack = pusha(stack);
	ft_printf("pa");
	return (stack);
}

t_a_and_b		pb(t_a_and_b stack)
{
	stack = pushb(stack);
	ft_printf("pb");
	return (stack);
}
