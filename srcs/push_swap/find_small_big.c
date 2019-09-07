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

static int		small(t_stack *stack, int flag)
{
	int			nbr;
	int			pos;
	int			ctr;
	t_stack		*i;

	nbr = stack->num;
	i = stack->next;
	pos = 1;
	ctr = 2;
	while (i != NULL)
	{
		if (i->num < nbr)
		{
			nbr = i->num;
			pos = ctr;
		}
		i = i->next;
		ctr++;
	}
	if (flag == 0)
		return (nbr);
	else if (flag == 1)
		return (pos);
	return (0);
}

static int		big(t_stack *stack, int flag)
{
	int			nbr;
	int			pos;
	int			ctr;
	t_stack		*i;

	nbr = stack->num;
	i = stack->next;
	pos = 1;
	ctr = 2;
	while (i != NULL)
	{
		if (i->num > nbr)
		{
			nbr = i->num;
			pos = ctr;
		}
		i = i->next;
		ctr++;
	}
	if (flag == 2)
		return (nbr);
	else if (flag == 3)
		return (pos);
	return (0);
}

int			find_small_big(t_stack *stack, int flag)
{
	if (flag == 0)
		return (small(stack, flag));
	else if (flag == 1)
		return (small(stack, flag));
	else if (flag == 2)
		return (big(stack, flag));
	else if (flag == 3)
		return (big(stack, flag));
	return (0);
}
