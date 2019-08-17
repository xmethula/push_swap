/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 12:41:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/17 16:10:57 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_putnbr_endl(stack->num);
		stack = stack->next;
	}
}

int		main(int argc, char **argv)
{
	t_stack		*stack_a;
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
		read_stdout(&stack_a, &stack_b);
		if (is_sorted(stack_a))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	return (0);
}
