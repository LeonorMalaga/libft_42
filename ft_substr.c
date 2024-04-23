/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:20:18 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/23 17:28:32 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	str = 0;
	len_s = 0;
	len_s = ft_strlen(s);
	if (len_s == 0 || start > len_s || len <= 0 || start < 0)
		len = 0;
	else
	{
		if ((len + start) > len_s)
			len = (len_s - start);
	}
	str = (char *)malloc((len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*
 int main()
{
	//const char *or = "123456789";
	const char *or = "";
	unsigned int s = 0;
	//size_t leng = 4;
	//size_t leng = 11;
	size_t leng = 0;
	char *substring = ft_substr(or, s, leng);
	
	if (substring)
	{
		printf("\n Source: %s\n", or);
		printf("\n ft_Substring: %s\n", substring);
		free(substring);
	}
	return 0;
}*/
