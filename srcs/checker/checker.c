/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 12:41:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/13 16:32:36 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
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
		{
			ft_putendl_fd("Error", 2);
			return (0);
		}
		read_stdin(&stack_a, &stack_b);
		if (is_sorted(stack_a) && (stack_len(stack_a) == len))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	return (0);
}
