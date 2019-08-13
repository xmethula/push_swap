/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <xmethula@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:59:58 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/13 11:46:55 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct			s_stack
{
	long int			num;
	struct s_stack		*next;
}						t_stack;

void	do_sa(t_stack *lst);
void	do_ra(t_stack *lst);

#endif
