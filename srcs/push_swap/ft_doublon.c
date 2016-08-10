/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 13:56:24 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/07/27 18:27:56 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_doublon(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = 2;
	while (i < ac)
	{
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) == 0)
				return (-1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
