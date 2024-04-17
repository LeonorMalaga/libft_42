/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:35:50 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/17 16:13:45 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
void	ft_putstr (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
#include <string.h>

int	main(void)
{
	char *r;
	char *r2;
	int c;
	const char *s;
    s="teste";
	//s="";
	c = 'e';
	//c = '0';
	//c = '\0';
	//c = '\n';
	//c = '~';
	r = strchr(s, c);
	ft_putstr((char *)s);
	write(1, "\n" , 1);
	write(1, &c , 1);
	r2= ft_strchr(s, c);
	write(1, "\n" , 1);
	write(1, &r[0] , 1);
	write(1, "-" , 1);
	write(1, &r2[0] , 1);
	ft_putstr((char *)s);
	return (0);
}*/
