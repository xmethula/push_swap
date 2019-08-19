/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdout.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:13:47 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/19 08:49:12 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void     do_steps(char *str, t_stack **stack_a, t_stack **stack_b)
{
    if (ft_strequ(str, "sa"))
        do_sa(*stack_a);
    else if (ft_strequ(str, "sb"))
        do_sa(*stack_b);
    else if (ft_strequ(str, "ss"))
        do_ss(*stack_a, *stack_b);
    else if (ft_strequ(str, "pa"))
        do_pa(stack_a, stack_b);
    else if (ft_strequ(str, "pb"))
        do_pb(stack_a, stack_b);
    else if (ft_strequ(str, "ra"))
        do_ra(*stack_a);
    else if (ft_strequ(str, "rb"))
        do_ra(*stack_b);
    else if (ft_strequ(str, "rr"))
        do_rr(*stack_a, *stack_b);
    else if (ft_strequ(str, "rra"))
        do_rra(*stack_a);
    else if (ft_strequ(str, "rrb"))
        do_rra(*stack_b);
    else if (ft_strequ(str, "rrr"))
        do_rrr(*stack_a, *stack_b);
    else
    {
        ft_putendl("Error");
        exit(0);
    }
}

void            read_stdout(t_stack **stack_a, t_stack **stack_b)
{
    char        *line;

    while (get_next_line(0, &line))
    {
        do_steps(line, stack_a, stack_b);
    }
}