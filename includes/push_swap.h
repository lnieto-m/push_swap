/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 11:16:52 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/08/13 14:50:01 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libftprintf.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct		s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

int					ft_error(int ac, char **av);
int					ft_doublon(int ac, char **av);
t_stack				*add_element(t_stack *begin, int data);
t_stack				*remove_element(t_stack *begin);
t_stack				*add_last_element(t_stack *begin, int data);
t_stack				*remove_last_element(t_stack *begin);
void				print_error(void);

#endif
