/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:36:57 by xmethula          #+#    #+#             */
/*   Updated: 2019/08/07 10:13:57 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

void	print_lst(t_list *node)
{
	while (node)
	{
		ft_putnbr_endl(node->data);
		node = node->next;
	}
}

int		lst_len(t_list *node)
{
	int		len;

	len = 0;
	while (node)
	{
		len++;
		node = node->next;
	}
	return (len);
}

void	add_begin(t_list **node, int val)
{
	t_list		*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = val;
	new->next = NULL;
	if ((*node) == NULL)
		(*node) = new;
	else
	{
		new->next = (*node);
		(*node) = new;
	}
}

void	add_end(t_list **node, int val)
{
	t_list		*new;
	t_list		*i;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = val;
	new->next = NULL;
	if ((*node) == NULL)
		(*node) = new;
	else
	{
		i = (*node);
		while (i->next)
			i = i->next;
		i->next = new;
	}
}

void	add_after(t_list **node, int val, int after)
{
	t_list		*new;
	t_list		*i;
	int			len;
	int			j;

	len = lst_len((*node));
	new = (t_list *)malloc(sizeof(t_list));
	new->data = val;
	new->next = NULL;
	if (after > len)
		ft_putendl("error");
	else
	{
		j = 1;
		i = (*node);
		while (j < after)
		{
			i = i->next;
			j++;
		}
		new->next = i->next;
		i->next = new;
	}
}

void	del_begin(t_list **node)
{
	t_list		*tmp;

	tmp = (*node);
	(*node) = tmp->next;
	tmp->next = NULL;
	free(tmp);
}

void	del_end(t_list **node)
{
	t_list		*p;
	t_list		*tmp;
	int			len;
	int			i;

	len = lst_len((*node));
	if (len == 1)
		del_begin(node);
	else
	{
		i = 1;
		p = (*node);
		while (i < (len -1))
		{
			p = p->next;
			i++;
		}
		tmp = p->next;
		p->next = tmp->next;
		tmp->next = NULL;
		free(tmp);
	}
}

void	del_at(t_list **node, int at)
{
	t_list		*p;
	t_list		*tmp;
	int			i;
	int			len;

	len = lst_len(*node);
	if (at > len)
		ft_putendl("error");
	else if (len == 1)
		del_begin(node);
	else
	{
		i = 1;
		p = (*node);
		while (i < (at - 1))
		{
			p = p->next;
			i++;
		}
		tmp = p->next;
		p->next = tmp->next;
		tmp->next = NULL;
		free(tmp);
	}
}

int		main(void)
{
	t_list		*root;

	root = NULL;
	add_begin(&root, 10);
	print_lst(root);
	ft_putchar('\n');

	add_begin(&root, 5);
	print_lst(root);
	ft_putchar('\n');

	add_end(&root, 15);
	print_lst(root);
	ft_putchar('\n');

	add_after(&root, 20, 3);
	print_lst(root);
	ft_putchar('\n');

	del_begin(&root);
	print_lst(root);
	ft_putchar('\n');

	del_at(&root, 2);
	print_lst(root);
	return (0);
}
