/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:53:01 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/09 14:59:07 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void     stack_del_top(t_stack **stack)
{
    t_stack     *tmp;

    if ((*stack) != NULL)
    {
        if (stack_len(*stack) == 1)
            ft_memdel((void **)stack);
        else
        {
            tmp = (*stack);
            (*stack) = tmp->next;
            (*stack)->prev = NULL;
            tmp->next = NULL;
            free(tmp);
        }
    }
}

static void     stack_add_top(t_stack **stack, int num)
{
    t_stack     *new;
    t_stack     *tmp;

    new = (t_stack *)malloc(sizeof(t_stack));
    new->num = num;
    new->prev = NULL;
    new->next = NULL;
    if (*stack == NULL)
        (*stack) = new;
    else
    {
        tmp = (*stack);
        new->next = tmp;
        tmp->prev = new;
        (*stack) = new;
    }
}

void    do_pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
    int     tmp;

    if ((*stack_b) != NULL)
    {
        tmp = (*stack_b)->num;
        stack_del_top(stack_b);
        stack_add_top(stack_a, tmp);
    }
    if (flag)
        ft_putendl("pa");
}

void    do_pb(t_stack **stack_a, t_stack **stack_b, int flag)
{
    int    tmp;

    if ((*stack_a) != NULL)
    {
        tmp = (*stack_a)->num;
        stack_del_top(stack_a);
        stack_add_top(stack_b, tmp);
    }
    if (flag)
        ft_putendl("pb");
}