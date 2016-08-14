/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 09:49:59 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/14 11:47:25 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack		*parsing_args(int ac, char **av)
{
	t_stack			*stack;
	int				i;

	i = 1;
	stack = NULL;
	while (i < ac)
	{
		if ((stack = add_last_element(stack, ft_atoi(av[i]))) == NULL)
			print_error();
		i++;
	}
	return (stack);
}

int					main(int ac, char **av)
{
	t_stack			*stack;

	if (ac < 2)
	{
		ft_printf("\n");
		exit(EXIT_SUCCESS);
	}
	if (ft_error(ac, av) == -1 || ft_doublon(ac, av) == -1)
		print_error();
	stack = parsing_args(ac, av);
	delete_stack(stack);
	return (0);
}
