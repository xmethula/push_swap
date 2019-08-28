/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:08:14 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/28 09:23:58 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void		sort_2(t_stack *stack)
{
	if (stack->num > stack->next->num)
		do_sa(stack, 1);
}

void			sort_3(t_stack *stack)
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

static void     sort_3_above(t_stack **stack_a, t_stack **stack_b)
{
    int			smallest;
	t_stack		*i;
    size_t      len_a;

    len_a = stack_len(*stack_a);
    while (len_a > 3)
    {
        i = (*stack_a);
        smallest = find_smallest(*stack_a);
        while (i->num != smallest)
        {
            if (small_position(*stack_a) <= (stack_len(*stack_a) / 2))
                do_ra(*stack_a, 1);
            else
                do_rra(*stack_a, 1);
        }
        do_pb(stack_a, stack_b, 1);
        len_a--;
    }
    sort_3(*stack_a);
    while (stack_len(*stack_b) != 0)
        do_pa(stack_a, stack_b, 1);
}

void            sort(t_stack **stack_a, t_stack **stack_b)
{
    if (stack_len(*stack_a) <= 3)
        sort_3(*stack_a);
    else
        sort_3_above(stack_a, stack_b);
}