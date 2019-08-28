/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:13:47 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/28 07:55:58 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

static void     do_steps(char *str, t_stack **stack_a, t_stack **stack_b)
{
    if (ft_strequ(str, "sa"))
        do_sa(*stack_a, 0);
    else if (ft_strequ(str, "sb"))
        do_sb(*stack_b, 0);
    else if (ft_strequ(str, "ss"))
        do_ss(*stack_a, *stack_b, 0);
    else if (ft_strequ(str, "pa"))
        do_pa(stack_a, stack_b, 0);
    else if (ft_strequ(str, "pb"))
        do_pb(stack_a, stack_b, 0);
    else if (ft_strequ(str, "ra"))
        do_ra(*stack_a, 0);
    else if (ft_strequ(str, "rb"))
        do_rb(*stack_b, 0);
    else if (ft_strequ(str, "rr"))
        do_rr(*stack_a, *stack_b, 0);
    else if (ft_strequ(str, "rra"))
        do_rra(*stack_a, 0);
    else if (ft_strequ(str, "rrb"))
        do_rrb(*stack_b, 0);
    else if (ft_strequ(str, "rrr"))
        do_rrr(*stack_a, *stack_b, 0);
    else
    {
        ft_putendl("Error");
        exit(0);
    }
}

void            read_stdin(t_stack **stack_a, t_stack **stack_b)
{
    char        *line;

    while (get_next_line(0, &line))
    {
        do_steps(line, stack_a, stack_b);
    }
}