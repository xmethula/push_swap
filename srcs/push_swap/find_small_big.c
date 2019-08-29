/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small_big.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:38:52 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/29 16:41:19 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static int		small_nbr_pos(t_stack *stack, int flag)
{
	int			small;
	int			pos;
	int			ctr;
	t_stack		*i;

	small = stack->num;
	i = stack->next;
	pos = 1;
	ctr = 2;
	while (i != NULL)
	{
		if (i->num < small)
		{
			small = i->num;
			pos = ctr;
		}
		i = i->next;
		ctr++;
	}
	if (flag == 0)
		return (small);
	else if (flag == 1)
		return (pos);
	return (0);
}

static int		big_nbr_pos(t_stack *stack, int flag)
{
	int			big;
	int			pos;
	int			ctr;
	t_stack		*i;

	big = stack->num;
	i = stack->next;
	pos = 1;
	ctr = 2;
	while (i != NULL)
	{
		if (i->num > big)
		{
			big = i->num;
			pos = ctr;
		}
		i = i->next;
		ctr++;
	}
	if (flag == 2)
		return (big);
	else if (flag == 3)
		return (pos);
	return (0);
}

int			find_small_big(t_stack *stack, int flag)
{
	if (flag == 0)
		return (small_nbr_pos(stack, flag));
	else if (flag == 1)
		return (small_nbr_pos(stack, flag));
	else if (flag == 2)
		return (big_nbr_pos(stack, flag));
	else if (flag == 3)
		return (big_nbr_pos(stack, flag));
	return (0);
}
