/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:32:40 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/19 15:24:41 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if(needle_len > len)
		return (0);
	if (needle[0] == 0 || !needle || haystack == needle)
		return ((char *) haystack);
	
	while (*haystack && i < len )
	{
		if ( ((len - i) >= needle_len) && !ft_strncmp(haystack, needle, needle_len))
			return ((char *) haystack);
		haystack++;
		i++;
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
	haystack = "abcdefgh";
   // haystack = "aaxx";
	//needle = "lorem";
	//needle = "MZIRIBMZE";
	//needle = "";
	needle = "abc";
	//needle = "xx";
	//len = ft_strlen((const char *)needle);//-->la original peta
	//len = 0;
	len = 2;
	//len = 3;
	r = strnstr(haystack, needle, len);
	ft_putstr(r);
	write(1, "\n" , 1);
	r2= ft_strnstr(haystack, needle, len);
	write(1, "\n" , 1);
	ft_putstr(r2);
	return (0);
}*/