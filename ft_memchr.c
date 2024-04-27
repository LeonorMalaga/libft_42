/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:13:10 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/27 12:01:30 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	index;
	char			*ms;

	ms = (char *)s;
	index = 0;
	while (index < n)
	{
		if (ms[index] == (char)c)
			return (ms + index);
		index++;
	}
	return (0);
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
	r = memchr(s, c, 7);
	ft_putstr((char *)s);
	write(1, "\n" , 1);
	write(1, &c , 1);
	r2= ft_memchr(s, c, 7);
	write(1, "\n" , 1);
	write(1, &r[0] , 1);
	write(1, "-" , 1);
	write(1, &r2[0] , 1);
	ft_putstr((char *)s);
	return (0);
}*/
