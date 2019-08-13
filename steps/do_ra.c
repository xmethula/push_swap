/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 08:34:49 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/13 12:18:12 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void    do_ra(t_stack *lst)
{
	t_stack		*p;
	long int	tmp;

	p = lst;
	tmp = lst->num;
	if (lst != NULL)
	{
		while (p->next != NULL)
		{
			p->num = p->next->num;
			p = p->next;
		}
		p->num = tmp;
	}
}
