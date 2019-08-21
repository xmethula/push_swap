/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_or_less.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:00:15 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/21 16:20:36 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void		sort_2(t_stack *stack)
{
	if (stack->num > stack->next->num)
		do_sa(stack);
}

static void		sort_3(t_stack *stack)
{
	if ((stack->num > stack->next->num) &&
		(stack->num < stack->next->next->num))
		do_sa(stack);
	else if ((stack->num > stack->next->num) &&
			(stack->next->num < stack->next->next->num))
		do_ra(stack);
	else if ((stack->num > stack->next->num) &&
			(stack->next->num > stack->next->next->num))
	{
		do_sa(stack);
		do_rra(stack);
	}
	else if ((stack->num < stack->next->num) &&
			(stack->num > stack->next->next->num))
		do_rra(stack);
	else if ((stack->num < stack->next->num) &&
			(stack->next->num > stack->next->next->num))
	{
		do_sa(stack);
		do_ra(stack);
	}
}

static void		sort_4(t_stack **stack_a, t_stack **stack_b)
{
	long int	smallest;
	t_stack		*i;

	smallest = find_smallest(*stack_a);
	i = (*stack_a);
	while (i->num != smallest)
		do_ra(*stack_a);
	do_pb(stack_a, stack_b);
	sort_3(*stack_a);
	do_pa(stack_a, stack_b);
}

void			sort_5_or_less(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_len(*stack_a) == 2)
		sort_2(*stack_a);
	else if (stack_len(*stack_a) == 3)
		sort_3(*stack_a);
	else if (stack_len(*stack_a) == 4)
		sort_4(stack_a, stack_b);
}
