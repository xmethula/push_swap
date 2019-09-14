/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_less.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:00:15 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 16:40:20 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void		sort_two(t_stack *stack)
{
	if (stack->num > stack->next->num)
		do_sa(stack, 1);
}

static void		sort_three(t_stack *stack)
{
	if ((stack->num > stack->next->num) &&
		(stack->num < stack->next->next->num))
		do_sa(stack, 1);
	else if ((stack->num > stack->next->num) &&
			(stack->next->num < stack->next->next->num))
		do_ra(stack, 1);
	else if ((stack->num > stack->next->num) &&
			(stack->next->num > stack->next->next->num))
	{
		do_sa(stack, 1);
		do_rra(stack, 1);
	}
	else if ((stack->num < stack->next->num) &&
			(stack->num > stack->next->next->num))
		do_rra(stack, 1);
	else if ((stack->num < stack->next->num) &&
			(stack->next->num > stack->next->next->num))
	{
		do_sa(stack, 1);
		do_ra(stack, 1);
	}
}

static void		sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int			smallest;
	t_stack		*i;

	smallest = find_small_big(*stack_a, "sn");
	i = (*stack_a);
	while (i->num != smallest)
	{
		if (find_small_big(*stack_a, "snp") <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	if (is_sorted(*stack_a))
		return ;
	do_pb(stack_a, stack_b, 1);
	sort_three(*stack_a);
	do_pa(stack_a, stack_b, 1);
}

static void		sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int			smallest;
	int			i;
	t_stack		*p;

	smallest = find_small_big(*stack_a, "sn");
	p = (*stack_a);
	while (p->num != smallest)
	{
		if (find_small_big(*stack_a, "snp") <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	if ((is_sorted(*stack_a)) && (stack_len(*stack_b) == 0))
		return ;
	do_pb(stack_a, stack_b, 1);
	sort_four(stack_a, stack_b);
	do_pa(stack_a, stack_b, 1);
}

void			five_less(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_len(*stack_a) == 2)
		sort_two(*stack_a);
	else if (stack_len(*stack_a) == 3)
		sort_three(*stack_a);
	else if (stack_len(*stack_a) == 4)
		sort_four(stack_a, stack_b);
	else if (stack_len(*stack_a) == 5)
		sort_five(stack_a, stack_b);
}
