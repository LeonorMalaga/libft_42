/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:41:48 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/23 17:59:21 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	len;

	len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (str - len);
}
/*
int main()
{
	char const *s1 = "First ";
	char const *s2 = "Second ";

	char *s3 = ft_strjoin(s1, s2);
	printf("%s",s3);
	return (0);
}*/