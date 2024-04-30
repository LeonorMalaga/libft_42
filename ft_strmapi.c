/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:51:20 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/30 15:24:12 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*res;

	if (!s)
		return (0);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
	{
		free (res);
		res = 0;
		return (0);
	}
	i = 0;
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char ft_f(unsigned int i, char c)
{
	char r;
	r = c + i;

	return (r);
}

char ft_rf(char c ,unsigned int i)
{
	char r;
	r = c + i;

	return (r);
}
int main ( )
{

	printf("\n ft_f(unsigned int i, char c) %s ",ft_strmapi("0123456",ft_f));
	//printf("\n int	ft_toupper(int c) %s ",ft_strmapi("una p", ft_toupper));
	//incompatible integer to pointer conversion passing 'char'
	//printf("\n void	*ft_calloc(unsigned int count, unsigned int size);
  //%s ",ft_strmapi("0123456",ft_calloc));
	//incompatible pointer types passing 'void *(unsigned int, unsigned int)' 
 //to parameter of type'char (*)(unsigned int, char)
	//printf("\n ft_strdup %s ",ft_strmapi("0123456",ft_strdup));
	//incompatible pointer types passing 'char *(const char *)' 
 //to parameter of type 'char (*)(unsigned int, char)
	//printf("\n ft_f(unsigned int i, char c) %s ",ft_strmapi("0123456",ft_rf));
	//incompatible pointer types passing 'char (char, unsigned int)'
  //to parameter of type
    //'char (*)(unsigned int, char)'
	return (0);
}*/
