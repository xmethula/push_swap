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

int     main(int argc, char **argv)
{
    t_stack     *stack_a;
    t_stack     *stack_b;
    int         i;
    char        *line;

    stack_a = NULL;
    stack_b = NULL;
    i = 1;
    if (argc > 2)
    {
        while (i < argc)
        {
            fill_stack(&stack_a, ft_atoi(argv[i]));
            i++;
        }
        if (duplicates(stack_a))
        {
            ft_putendl("Error");
            return (0);
        }
        while (get_next_line(0, &line))
        {
            if (ft_strcmp(line, "ra") == 0)
                do_ra(stack_a);
            else if (ft_strcmp(line, "sa") == 0)
                do_sa(stack_a);
        }
        if (is_sorted(stack_a))
            ft_putendl("OK");
        else
        {
            ft_putendl("KO");
        }
    }
    return (0);
}
