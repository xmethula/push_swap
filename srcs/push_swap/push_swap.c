/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 09:06:37 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 07:33:36 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void		push_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_len(*stack_a) <= 5)
		five_less(stack_a, stack_b);
	else if (stack_len(*stack_a) <= 100)
		hundred_less(stack_a, stack_b);
	else
		five_hundred_less(stack_a, stack_b);
}

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		fill_stack(argc, argv, &stack_a);
		if (duplicates(stack_a))
			print_error();
		if (is_sorted(stack_a))
			return (0);
		push_swap(&stack_a, &stack_b);
	}
	return (0);
}
