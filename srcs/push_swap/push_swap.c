/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 09:06:37 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/27 09:56:37 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void     push_swap(t_stack **stack_a, t_stack **stack_b)
{
    sort_5_or_less(stack_a, stack_b);
}

int             main(int argc, char **argv)
{
    t_stack     *stack_a;
	t_stack		*stack_b;
    
    stack_a = NULL;
	stack_b = NULL;
	if (argc > 2)
	{
		fill_stack(argc, argv, &stack_a);
		if (duplicates(stack_a))
        {
            ft_putendl("Error");
			return (0);
        }
        if (is_sorted(stack_a))
            return (0);
        push_swap(&stack_a, &stack_b);
	}
	return (0);
}
