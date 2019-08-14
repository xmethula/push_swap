/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:09:23 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/13 12:18:39 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

void	do_sa(t_stack *lst)
{
	long int	tmp;

	if ((lst != NULL) && (lst->num != lst->next->num))
	{
		tmp = lst->num;
		lst->num = lst->next->num;
		lst->next->num = tmp;
	}
}
