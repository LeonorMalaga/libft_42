/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:34:18 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/16 12:24:36 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
static void ft_print_n (unsigned int n)
{
	char c;
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
	int node;
	
	node = 0;
	write(1,"Printing nodes:\n",17);
    while (lst)
    {
		printf("nodo: %d, contenido: %s\n",node, lst->content);
        lst = lst->next;
		node ++;
    }
}

int main (void)
{
	t_list	*new= ft_lstnew("cadena1 ,");
	//t_list	*new2= ft_lstnew("");
	//t_list	*new3= ft_lstnew(NULL);
	t_list	*new4= ft_lstnew("cadena2 ,");
	printf("new: %s\n", new->content);
	//printf("new2: %s\n", new2->content);
	//printf("new3: %s\n", new3->content);
	printf("new4: %s\n", new4->content);
	ft_lstadd_front(&new, new4);
	printf("nodo1: %s\n", new->content);
	printf("nodo2: %s\n", new->next->content);
	ft_print_list(new);

	return(0);
}
*/
