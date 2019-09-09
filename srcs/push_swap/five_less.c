/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_less.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:00:15 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/09 11:48:11 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void		sort_two(t_stack *stack)
{
	if (stack->num > stack->next->num)
		do_sa(stack, 1);
}

void			sort_three(t_stack *stack)
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

	smallest = find_small_big(*stack_a, 0);
	i = (*stack_a);
	while (i->num != smallest)
	{
		if (find_small_big(*stack_a, 1) <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	do_pb(stack_a, stack_b, 1);
	sort_three(*stack_a);
	do_pa(stack_a, stack_b, 1);
}

static void		sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int			smallest;
	t_stack		*i;

	smallest = find_small_big(*stack_a, 0);
	i = (*stack_a);
	while (i->num != smallest)
	{
		if (find_small_big(*stack_a, 1) <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	do_pb(stack_a, stack_b, 1);
	smallest = find_small_big(*stack_a, 0);
	i = (*stack_a);
	while (i->num != smallest)
	{
		if (find_small_big(*stack_a, 1) <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	do_pb(stack_a, stack_b, 1);
	sort_three(*stack_a);
	do_pa(stack_a, stack_b, 1);
	do_pa(stack_a, stack_b, 1);
}

void			sort_five_less(t_stack **stack_a, t_stack **stack_b)
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
