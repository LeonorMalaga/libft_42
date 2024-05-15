/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonor <leonor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 06:46:07 by leonor            #+#    #+#             */
/*   Updated: 2024/05/15 07:02:34 by leonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		if (lst && f)
		{
			f(lst->content);
			lst = lst->next;
		}
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
	char *c;

	node = 0;
	c = 0;
	if(lst)
		c = lst->content;
	write(1,"Printing nodes:\n",17);
    while (lst)
    {
		
		printf("node: %d, content: %s\n",node,c);
       	lst = lst->next;
		if(lst)
			c = lst->content;
		else
			c = 0;
		node ++;
    }
}

int main (void)
{
	int leng = 0;
	char c = 0;
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
	write(1,"\n",1);
	leng = ft_lstsize(new);
	c = leng + '0';
	write(1,&c,1);
	ft_lstiter(new2,del_string);
	write(1,"\n",1);
	leng = ft_lstsize(new);
	c = leng + '0';
	write(1,&c,1);
	ft_print_list(new);
	if(!new2)
		write(1,"OK",3);

	return(0);
}*/
