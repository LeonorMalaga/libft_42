/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:23:22 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/06 15:02:29 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
/*
int main (void)
{
	t_list	*new= ft_lstnew("cadena");
	t_list	*new2= ft_lstnew("");
	t_list	*new3= ft_lstnew(NULL);
	printf("new: %s\n", new->content);
	printf("new2: %s\n", new2->content);
	printf("new3: %s\n", new3->content);
	return(0);
}*/
