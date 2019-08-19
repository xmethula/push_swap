/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 09:06:37 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 15:13:11 by xmethula         ###   ########.fr       */
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
    
    stack_a = NULL;
    add_end(&stack_a, 5);
    add_end(&stack_a, 1);
    add_end(&stack_a, 7);
    display_stack(stack_a);
    sort_3_nbr(stack_a);
    ft_putchar('\n');
    display_stack(stack_a);
    return (0);
}