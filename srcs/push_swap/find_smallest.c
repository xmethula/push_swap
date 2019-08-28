/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:38:52 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/28 08:51:50 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

int				find_smallest(t_stack *stack)
{
	int			smallest;
	t_stack		*i;

	smallest = stack->num;
	i = stack->next;
	while (i != NULL)
	{
		if (i->num < smallest)
			smallest = i->num;
		i = i->next;
	}
	return (smallest);
}

int				small_position(t_stack *stack)
{
	int			smallest;
	int			position;
	int			ctr;
	t_stack		*i;

	smallest = stack->num;
	i = stack->next;
	position = 1;
	ctr = 2;
	while (i != NULL)
	{
		if (i->num < smallest)
		{
			smallest = i->num;
			position = ctr;
		}
		i = i->next;
		ctr++;
	}
	return (position);
}
