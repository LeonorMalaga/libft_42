/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:32:40 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/21 12:27:45 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	needle_len;
	char			*hay;
	char			*nee;

	needle_len = ft_strlen((char *)needle);
	hay = (char *)haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*hay != '\0' && len >= needle_len)
	{
		nee = (char *)needle;
		if (ft_strncmp(hay, nee, needle_len) == 0)
			return (hay);
		hay++;
		len--;
	}
	return (0);
}
/*
void	ft_putstr (char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, " ", 1);
	}
	else
	{
		while (str[i])
		{
			write (1, &str[i], 1);
			i++;
		}
	}
}
#include <string.h>

int	main(void)
{
	char *r;
	char *r2;
	unsigned int len;
	const char *haystack;
	const char *needle;
	//len = 15;
    //haystack = "lorem ipsum dolor sit amet";
	//haystack = "MZIRIBMZIRIBMZE123";
	//haystack = "teste";
	//haystack = "";
	//haystack = "abcdefgh";
	haystack = (void *)0;
   // haystack = "aaxx";
	//needle = "lorem";
	//needle = "MZIRIBMZE";
	//needle = "";
	//needle = "abc";
	needle = "fake";
	//needle = "xx";
	//len = ft_strlen((const char *)needle);//-->la original peta
	//len = 0;
	//len = 2;
	len = 3;
	r2= ft_strnstr(haystack, needle, len);
	write(1, "\n" , 1);
	ft_putstr(r2);
	r = strnstr(haystack, needle, len);
	ft_putstr(r);
	write(1, "\n" , 1);
	return (0);
}*/
