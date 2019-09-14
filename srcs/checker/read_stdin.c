/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:13:47 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 17:12:11 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void		do_swap(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strequ(str, "sa"))
		do_sa(*stack_a, 0);
	else if (ft_strequ(str, "sb"))
		do_sb(*stack_b, 0);
	else if (ft_strequ(str, "ss"))
		do_ss(*stack_a, *stack_b, 0);
}

static void		do_push(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strequ(str, "pa"))
		do_pa(stack_a, stack_b, 0);
	else if (ft_strequ(str, "pb"))
		do_pb(stack_a, stack_b, 0);
}

static void		do_rotate(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strequ(str, "ra"))
		do_ra(*stack_a, 0);
	else if (ft_strequ(str, "rb"))
		do_rb(*stack_b, 0);
	else if (ft_strequ(str, "rr"))
		do_rr(*stack_a, *stack_b, 0);
}

static void		do_rev_rotate(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strequ(str, "rra"))
		do_rra(*stack_a, 0);
	else if (ft_strequ(str, "rrb"))
		do_rrb(*stack_b, 0);
	else if (ft_strequ(str, "rrr"))
		do_rrr(*stack_a, *stack_b, 0);
}

void			read_stdin(t_stack **stack_a, t_stack **stack_b)
{
	char		*line;

	while (get_next_line(0, &line))
	{
		if (ft_strequ(line, "sa") || ft_strequ(line, "sb")
			|| ft_strequ(line, "ss"))
			do_swap(line, stack_a, stack_b);
		else if (ft_strequ(line, "pa") || ft_strequ(line, "pb"))
			do_push(line, stack_a, stack_b);
		else if (ft_strequ(line, "ra") || ft_strequ(line, "rb")
			|| ft_strequ(line, "rr"))
			do_rotate(line, stack_a, stack_b);
		else if (ft_strequ(line, "rra") || ft_strequ(line, "rrb")
			|| ft_strequ(line, "rrr"))
			do_rev_rotate(line, stack_a, stack_b);
		else
			print_error();
	}
}
