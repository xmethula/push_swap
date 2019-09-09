/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_hundred_less.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 08:35:33 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/09 12:11:53 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void		create_eleven_chunks(t_stack **stack_a, t_stack **stack_b)
{
	int			small;
	int			big;
	int			div;

	small = find_small_big(*stack_a, 0);
	big = find_small_big(*stack_a, 2);
	div = ((big - small) / 11);
	interval(stack_a, stack_b, small, (small + div));
	interval(stack_a, stack_b, (small + div + 1), (small + (div * 2)));
	interval(stack_a, stack_b, (small + (div * 2) + 1), (small + (div * 3)));
	interval(stack_a, stack_b, (small + (div * 3) + 1), (small + (div * 4)));
    interval(stack_a, stack_b, (small + (div * 4) + 1), (small + (div * 5)));
	interval(stack_a, stack_b, (small + (div * 5) + 1), (small + (div * 6)));
    interval(stack_a, stack_b, (small + (div * 6) + 1), (small + (div * 7)));
    interval(stack_a, stack_b, (small + (div * 7) + 1), (small + (div * 8)));
	interval(stack_a, stack_b, (small + (div * 8) + 1), (small + (div * 9)));
    interval(stack_a, stack_b, (small + (div * 9) + 1), (small + (div * 10)));
	interval(stack_a, stack_b, (small + (div * 10) + 1), big);
}

void			sort_five_hundred_less(t_stack **stack_a, t_stack **stack_b)
{
	int			big;
	int			len;
	t_stack		*i;

	create_eleven_chunks(stack_a, stack_b);
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

/*
void            add_ten(t_stack *stack)
{
    t_stack     *p;

    p = stack;
    while (p != NULL)
    {
        p->num = p->num + 50;
        p = p->next;
    }
}

void            print(t_stack *stack)
{
    while (stack != NULL)
    {
        ft_putnbr(stack->num);
        ft_putchar(' ');
        stack = stack->next;
    }
    ft_putchar('\n');
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
        sort_hundred_less(&stack_a, &stack_b);
        print(stack_a);
        ft_putchar('\n');
        add_ten(stack_a);
        print(stack_a);

	}
	return (0);
}*/