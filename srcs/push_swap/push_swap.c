/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 09:06:37 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/20 17:47:09 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

void    add_end(t_stack **stack, long int num)
{
    t_stack     *new;
    t_stack     *i;

    new = (t_stack *)malloc(sizeof(t_stack));
    new->num = num;
    new->prev = NULL;
    new->next = NULL;
    if ((*stack) == NULL)
        (*stack) = new;
    else
    {
        i = (*stack);
        while (i->next != NULL)
            i = i->next;
        i->next = new;
        new->prev = i;
    }
}

int     main(void)
{
    t_stack     *stack_a;
	t_stack		*stack_b;
    
    stack_a = NULL;
	stack_b = NULL;
    add_end(&stack_a, 4);
    add_end(&stack_a, 2);
   	add_end(&stack_a, 3);
	add_end(&stack_a, 1);
    display_stack(stack_a);
    //sort_4(&stack_a, &stack_b);
    ft_putchar('\n');
    //display_stack(stack_a);
	ft_putnbr_endl(find_smallest(stack_a));
    return (0);
}
