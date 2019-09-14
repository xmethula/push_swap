/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_hundred_less.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 08:35:33 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 16:40:12 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void		create_eleven_chunks(t_stack **stack_a, t_stack **stack_b)
{
	int			small;
	int			big;
	int			div;

	small = find_small_big(*stack_a, "sn");
	big = find_small_big(*stack_a, "bn");
	div = ((big - small) / 11);
	range(stack_a, stack_b, small, (small + div));
	range(stack_a, stack_b, (small + div + 1), (small + (div * 2)));
	range(stack_a, stack_b, (small + (div * 2) + 1), (small + (div * 3)));
	range(stack_a, stack_b, (small + (div * 3) + 1), (small + (div * 4)));
	range(stack_a, stack_b, (small + (div * 4) + 1), (small + (div * 5)));
	range(stack_a, stack_b, (small + (div * 5) + 1), (small + (div * 6)));
	range(stack_a, stack_b, (small + (div * 6) + 1), (small + (div * 7)));
	range(stack_a, stack_b, (small + (div * 7) + 1), (small + (div * 8)));
	range(stack_a, stack_b, (small + (div * 8) + 1), (small + (div * 9)));
	range(stack_a, stack_b, (small + (div * 9) + 1), (small + (div * 10)));
	range(stack_a, stack_b, (small + (div * 10) + 1), big);
}

void			five_hundred_less(t_stack **stack_a, t_stack **stack_b)
{
	int			big;
	int			len;
	t_stack		*i;

	create_eleven_chunks(stack_a, stack_b);
	len = stack_len(*stack_b);
	while (len != 0)
	{
		i = (*stack_b);
		big = find_small_big(*stack_b, "bn");
		while (i->num != big)
		{
			if (find_small_big(*stack_b, "bnp") <= (stack_len(*stack_b) / 2))
				do_rb(*stack_b, 1);
			else
				do_rrb(*stack_b, 1);
		}
		do_pa(stack_a, stack_b, 1);
		len--;
	}
}
