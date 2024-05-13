/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:10:33 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/13 14:56:06 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	l = 0;
	if (!lst || !new || new ->content == NULL)
		return ;
	if (*lst)
	{
		l = *lst;
		while (l->next != NULL)
			l = l -> next;
		l ->next = new;
	}
	else
	{
		*lst = new;
	}
}
/*
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
	//t_list	*new6= ft_lstnew("");
	t_list	*new5= ft_lstnew(NULL);
	t_list	*new2= ft_lstnew("cadena2 ,");
	//t_list	*new3= ft_lstnew("cadena3 ,");

	ft_lstadd_front(&new, new2);
	ft_print_list(new);
	ft_lstadd_back(&new, new5);
	ft_print_list(new);
	ft_lstadd_back(&new5, new);
	ft_print_list(new5);

	return(0);
}*/
