/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ray <ray@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:23:12 by xmethula          #+#    #+#             */
/*   Updated: 2019/09/11 19:34:40 by ray              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../includes/push_swap.h"

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
	char		**arr;
    int         i;
	int			j;

    i = 1;
    while (i < argc)
    {
		j = 0;
		arr = ft_strsplit(argv[i], ' ');
		if (arr[j] == NULL)
		{
			ft_putendl("Error");
			exit(0);
		}
		while (arr[j] != NULL)
		{
			if (ft_isnbr(arr[j]) != 1)
			{
				ft_putendl("Error");
				exit(0);
			}
        	add_end(stack, ft_atoi(arr[j]));
        	j++;
		}
		i++;
    }
}
