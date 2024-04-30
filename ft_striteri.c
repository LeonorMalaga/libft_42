/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:30:51 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/30 19:25:44 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	if (s)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			(*f)(i, &s[i]);		  
			i++;
		}
	}
}
/*
void ft_f(unsigned int i, char *c)
{
	*c = *c + i;
}
int main ( )
{
    char s[6] = "abcdef";
	//char *s;

	//s =  malloc(6);
	//s = "abcdef";

	ft_striteri(s,ft_f);

	printf("\n before ft_striteri 'abcdef' after :%s ",s);


	return (0);
}*/
