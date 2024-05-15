/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 07:06:06 by leonor            #+#    #+#             */
/*   Updated: 2024/05/15 15:13:16 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_while(t_list *lst2,void *new_content, void (*del)(void *))
{
		t_list	*node2;

		node2 = ft_lstnew(new_content);
        if (!node2)
        {
            del(new_content);	
            ft_lstclear(&lst2, del);
            return (NULL);
        }
        ft_lstadd_back(&lst2, node2);
        
		return (lst2);
}
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*lst2;
   
    void	*new_content;

    if (!lst || !f)
        return (NULL);
    lst2 = NULL;
    while (lst)
    {
		new_content = f(lst->content);
	  	if (!new_content)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}	
		lst2= ft_lstmap_while(lst2,new_content, del);
		lst = lst->next;
    }
    return (lst2);
}

/*
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
void *change_string (void *s)
{
   char *c;
	c = s;
	*c = *c + 1;
	return(c);
}

void del(void *s)
{
  if(s)
  {
   free(s);
   s = 0;
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
	t_list	*new_lst= 0;

	ft_lstadd_back(&new, new2);
	ft_print_list(new);
	ft_lstadd_back(&new, new3);
	ft_print_list(new);
	new_lst= ft_lstmap(new, change_string, del);
	ft_print_list(new_lst);
	return(0);
}*/
