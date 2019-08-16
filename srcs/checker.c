/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 12:41:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/16 20:37:47 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void    print_stack(t_stack *stack)
{
    while (stack != NULL)
    {
        ft_putnbr_endl(stack->num);
        stack = stack->next;
    }
}

void    fill_stack(t_stack **stack, long int num)
{
    t_stack     *new;
    t_stack     *p;

    new = (t_stack *)malloc(sizeof(t_stack));
    new->num = num;
    new->prev = NULL;
    new->next = NULL;
    if (*stack == NULL)
        (*stack) = new;
    else
    {
        p = (*stack);
        while (p->next != NULL)
            p = p->next;
        p->next = new;
        new->prev = p;
    }
}

int     main(void)
{
    t_stack     *stack_a;
    t_stack     *stack_b;

    stack_a = NULL;
    stack_b = NULL;

    fill_stack(&stack_a, 3);
    fill_stack(&stack_a, 2);
    fill_stack(&stack_a, 1);
    if (duplicates(stack_a))
    {
        ft_putendl("Error");
        return (0);
    }
    /*read steps from stdout using gnl with file descriptor of 0 */
    do_ra(stack_a);
    do_sa(stack_a);
    if (is_sorted(stack_a))
        ft_putendl("OK");
    else
        ft_putendl("KO");
    return (0);
}
