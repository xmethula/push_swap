/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_small_big.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:38:52 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 16:40:01 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int		small(t_stack *stack, char *flag)
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
	if (ft_strequ(flag, "sn"))
		return (nbr);
	else if (ft_strequ(flag, "snp"))
		return (pos);
	return (0);
}

static int		big(t_stack *stack, char *flag)
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
	if (ft_strequ(flag, "bn"))
		return (nbr);
	else if (ft_strequ(flag, "bnp"))
		return (pos);
	return (0);
}

int				find_small_big(t_stack *stack, char *flag)
{
	if (ft_strequ(flag, "sn"))
		return (small(stack, flag));
	else if (ft_strequ(flag, "snp"))
		return (small(stack, flag));
	else if (ft_strequ(flag, "bn"))
		return (big(stack, flag));
	else if (ft_strequ(flag, "bnp"))
		return (big(stack, flag));
	return (0);
}
