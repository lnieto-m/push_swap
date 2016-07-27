/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 09:49:59 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/04/22 13:52:23 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int				main(int ac, char **av)
{
	if (ac < 2 || (ac < 3 && ft_strcmp("-v", av[1]) == 0))
	{
		ft_printf("\n");
		exit(EXIT_SUCCESS);
	}
	if (ft_error(ac, av) == -1)
		print_error();
	return (0);
}
