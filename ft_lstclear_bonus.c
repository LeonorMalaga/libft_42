/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:53:13 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/14 19:17:25 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	p = *lst;
	while (*lst)
	{
		p = p->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
	lst = 0;
}
/*
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ml;
	t_list *tmp;

	ml = 0;
	tmp = 0;
	if(lst && *lst && del)
	{
		ml = *lst;		
		if(ml->next == NULL && ml->content)
		 ft_lstdelone(*lst,del);

		while(*lst && ml->content && ml->next)
		{
            tmp = ml->next;
            ft_lstdelone(*lst,del);
			*lst = tmp;			
		}
	}
}

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
	ft_lstclear(&new2,del_string);
	ft_print_list(new);
	if(!new2)
		write(1,"OK",3);

	return(0);
}*/
