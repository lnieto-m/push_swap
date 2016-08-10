/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 10:52:36 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/10 16:15:56 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

static int		is_number(char *nb)
{
	int		i;

	i = 0;
	while (nb[i] == '\t' || nb[i] == ' ' || nb[i] == '\n' || nb[i] == '\r'
			|| nb[i] == '\f' || nb[i] == '\v')
		i++;
	if (nb[i] == '\0')
		return (-1);
	if (nb[i] == '+' || nb[i] == '-')
		i++;
	while (nb[i] != '\0')
	{
		if (ft_isdigit(nb[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}

int				ft_error(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (is_number(av[i]) == -1)
			return (-1);
		if (ft_atol(av[i]) < MIN_INT || ft_atol(av[i]) > MAX_INT)
			return (-1);
		i++;
	}
	return (ft_doublon(ac, av));
}
