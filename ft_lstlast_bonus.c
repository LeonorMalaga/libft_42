/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:16:39 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/10 15:28:27 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
static void ft_print_n (unsigned int *p)
{
	char c;
	int n;

    n = *p;

	while(n > 10)
	{
		c = '0' + (n % 10);
		write(1,&c,1);
	}
	c = '0' + n;
	write(1,&c,1);
}

static void ft_print_list(t_list *lst)
{
	unsigned int node;
	unsigned int *p;
	
	node = 0;
    p = &node;
	write(1,"Printing nodes:\n",17);

    while (lst)
    {
		write(1,"nodo:",6);
		ft_print_n(p);
		write(1,"\n",1);
        ft_print_n(lst->content);
		write(1,"\n",1);
        lst = lst->next;
		node ++;
    }
}
int main (void)
{
	int a = 1;
	int *i1 = &a;
    int b = 2;
	int *i2 = &b;
	int c = 3;
	int *i3 = &c;
	int d = 4;
	int *i4 = &d;
	unsigned int *plen = 0;
	int len = 0;


	t_list *node1 = ft_lstnew(i1);
	t_list *node2 = ft_lstnew(i2);
	t_list *node3 = ft_lstnew(i3);
	t_list *node4 = ft_lstnew(i4);
	t_list *node = 0;
	ft_lstadd_front(&node1,node2);
	ft_lstadd_front(&node1,node3);
	ft_lstadd_front(&node1,node4);
    ft_print_list(node1);

	node = ft_lstlast(node1);
	ft_print_list(node);

	return (0);
}*/
