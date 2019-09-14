/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_less.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:54:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 23:20:27 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void			range(t_stack **a, t_stack **b, int min, int max)
{
	t_stack		*p;
	t_stack		*i;
	int			nbr;

	p = *a;
	while (p != NULL)
	{
		if ((p->num >= min) && (p->num <= max))
		{
			nbr = p->num;
			i = *a;
			while (i->num != nbr)
			{
				do_ra(a, 1);
				i = *a;
			}
			do_pb(a, b, 1);
			p = *a;
		}
		else
			p = p->next;
	}
}

static void		create_five_chunks(t_stack **stack_a, t_stack **stack_b)
{
	int			small;
	int			big;
	int			div;

	small = find_small_big(*stack_a, "sn");
	big = find_small_big(*stack_a, "bn");
	div = ((big - small) / 5);
	range(stack_a, stack_b, small, (small + div));
	range(stack_a, stack_b, (small + div + 1), (small + (div * 2)));
	range(stack_a, stack_b, (small + (div * 2) + 1), (small + (div * 3)));
	range(stack_a, stack_b, (small + (div * 3) + 1), (small + (div * 4)));
	range(stack_a, stack_b, (small + (div * 4) + 1), big);
}

void			hundred_less(t_stack **stack_a, t_stack **stack_b)
{
	int			big;
	int			len;
	t_stack		*p;

	create_five_chunks(stack_a, stack_b);
	len = stack_len(*stack_b);
	while (len != 0)
	{
		p = (*stack_b);
		big = find_small_big(*stack_b, "bn");
		while (p->num != big)
		{
			if (find_small_big(*stack_b, "bnp") <= (stack_len(*stack_b) / 2))
				do_rb(stack_b, 1);
			else
				do_rrb(stack_b, 1);
			p = (*stack_b);
		}
		do_pa(stack_a, stack_b, 1);
		len--;
	}
}
