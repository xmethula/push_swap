/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:23:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/17 14:56:04 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

static void     add_end(t_stack **stack, long int num)
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

void            fill_stack(int argc, char **argv, t_stack **stack)
{
    int         i;

    i = 1;
    while (i < argc)
    {
        add_end(stack, ft_atoi(argv[i]));
        i++;
    }
}