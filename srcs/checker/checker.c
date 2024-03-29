/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 12:41:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/17 09:16:23 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			len;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		fill_stack(argc, argv, &stack_a);
		len = stack_len(stack_a);
		if (duplicates(stack_a))
			print_error();
		read_stdin(&stack_a, &stack_b);
		if (is_sorted(stack_a) && (stack_len(stack_a) == len))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
