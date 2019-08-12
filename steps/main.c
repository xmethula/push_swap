/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:08:59 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/12 17:30:07 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	print_lst(t_stack *node)
{
	while (node)
	{
		ft_putnbr_endl(node->num);
		node = node->next;
	}
}

void	add_end(t_stack **node, int num)
{
	t_stack		*new;
	t_stack		*i;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->num = num;
	new->next = NULL;
	i = (*node);
	while (i->next)
		i = i->next;
	i->next = new;
}

int		main(void)
{
	t_stack		*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->num = 10;
	new->next = NULL;

	add_end(&new, 20);
	add_end(&new, 30);
	add_end(&new, 40);
	do_sa(new);
	print_lst(new);
	return (0);
}
