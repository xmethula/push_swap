/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_less.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:54:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/09 09:26:23 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void			interval(t_stack **stack_a, t_stack **stack_b, int min, int max)
{
	t_stack		*p;
	t_stack		*i;
	int			nbr;

	p = *stack_a;
	while (p != NULL)
	{
		if ((p->num >= min) && (p->num <= max))
		{
			nbr = p->num;
			i = *stack_a;
			while (i->num != nbr)
				do_ra(*stack_a, 1);
			do_pb(stack_a, stack_b, 1);
			p = *stack_a;
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

	small = find_small_big(*stack_a, 0);
	big = find_small_big(*stack_a, 2);
	div = ((big - small) / 5);
	interval(stack_a, stack_b, small, (small + div));
	interval(stack_a, stack_b, (small + div + 1), (small + (div * 2)));
	interval(stack_a, stack_b, (small + (div * 2) + 1), (small + (div * 3)));
	interval(stack_a, stack_b, (small + (div * 3) + 1), (small + (div * 4)));
	interval(stack_a, stack_b, (small + (div * 4) + 1), big);
}

void			sort_hundred_less(t_stack **stack_a, t_stack **stack_b)
{
	int			big;
	int			len;
	t_stack		*i;

	create_five_chunks(stack_a, stack_b);
	len = stack_len(*stack_b);
	while (len != 0)
	{
		i = (*stack_b);
		big = find_small_big(*stack_b, 2);
		while (i->num != big)
		{
			if (find_small_big(*stack_b, 3) <= (stack_len(*stack_b) / 2))
				do_rb(*stack_b, 1);
			else
				do_rrb(*stack_b, 1);
		}
		do_pa(stack_a, stack_b, 1);
		len--;
	}
}
