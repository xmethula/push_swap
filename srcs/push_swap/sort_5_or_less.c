/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_or_less.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:00:15 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/27 10:07:53 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void		sort_2(t_stack *stack)
{
	if (stack->num > stack->next->num)
		do_sa(stack, 1);
}

static void		sort_3(t_stack *stack)
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

static void		sort_4(t_stack **stack_a, t_stack **stack_b)
{
	long int	smallest;
	t_stack		*i;

	smallest = find_smallest(*stack_a);
	i = (*stack_a);
	while (i->num != smallest)
	{
		if (small_position(*stack_a) <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	do_pb(stack_a, stack_b, 1);
	sort_3(*stack_a);
	do_pa(stack_a, stack_b, 1);
}

static void		sort_5(t_stack **stack_a, t_stack **stack_b)
{
	long int	smallest;
	t_stack		*i;

	smallest = find_smallest(*stack_a);
	i = (*stack_a);
	while (i->num != smallest)
	{
		if (small_position(*stack_a) <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	do_pb(stack_a, stack_b, 1);
	smallest = find_smallest(*stack_a);
	i = (*stack_a);
	while (i->num != smallest)
	{
		if (small_position(*stack_a) <= 2)
			do_ra(*stack_a, 1);
		else
			do_rra(*stack_a, 1);
	}
	do_pb(stack_a, stack_b, 1);
	sort_3(*stack_a);
	do_pa(stack_a, stack_b, 1);
	do_pa(stack_a, stack_b, 1);
}

void			sort_5_or_less(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_len(*stack_a) == 2)
		sort_2(*stack_a);
	else if (stack_len(*stack_a) == 3)
		sort_3(*stack_a);
	else if (stack_len(*stack_a) == 4)
		sort_4(stack_a, stack_b);
	else if (stack_len(*stack_a) == 5)
		sort_5(stack_a, stack_b);
}
