/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonor <leonor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:06:06 by leonor            #+#    #+#             */
/*   Updated: 2024/05/15 08:22:03 by leonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void*(*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	int leng;
	void *new_content;

	new_lst = 0;
	new_node = 0;
	new_content = 0;
	leng = 0;

	if(lst && f)
	{
		while (lst)
		{
			leng = ft_strlen((char *)lst->content);
			new_content = ft_calloc(1, leng);
			if(!new_content)
				free(new_content);
				new_content = 0;
			new_node = ft_lstnew(&new_content);
			if(!new_node)
				ft_lstdelone()
			lst = lst->next;
		}
	}
return(new_lst);
}
void change_string (void *s)
{
   char *c;
	c =s;
	*c = *c + 1;
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
	ft_lstiter(new,change_string);
	ft_print_list(new);
	if(!new2)
		write(1,"OK",3);

	return(0);
}

