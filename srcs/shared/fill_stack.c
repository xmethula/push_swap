/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:23:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/14 17:13:58 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void		add_end(t_stack **stack, int num)
{
	t_stack		*new;
	t_stack		*p;

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

void			free_array(char **arr)
{
	int			i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	arr = NULL;
}

void			fill_stack(int argc, char **argv, t_stack **stack)
{
	char		**arr;
	int			i;
	int			j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		arr = ft_strsplit(argv[i], ' ');
		if (arr[j] == NULL)
			print_error();
		while (arr[j] != NULL)
		{
			if (ft_isnbr(arr[j]) != 1)
				print_error();
			add_end(stack, ft_atoi(arr[j]));
			j++;
		}
		free_array(arr);
		i++;
	}
}
