/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:34:10 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/14 16:06:33 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst -> content);
		free(lst);
	}
}
/*

void del_string (void *s)
{
  if(s)
  {
   free(s);
   s = 0;
  }
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
	
	char *c1;
    c1 = malloc (2);
	c1[0] = '1';
	c1[1] = '\0';

	char *c2;
    c2 = malloc (2);
	c2[0] = '2';
	c2[1] = '\0';

	char *c3;
    c3 = malloc (2);
	c3[0] = '3';
	c3[1] = '\0';

	t_list	*new= ft_lstnew(c1);
	//t_list	*new6= ft_lstnew("");
	//t_list	*new5= ft_lstnew(NULL);
	t_list	*new2= ft_lstnew(c2);
	t_list	*new3= ft_lstnew(c3);

	ft_lstadd_back(&new, new2);
	ft_print_list(new);
	ft_lstadd_back(&new, new3);
	ft_print_list(new);
	ft_lstdelone(new2,del_string);
	ft_print_list(new);

	return(0);
}*/
