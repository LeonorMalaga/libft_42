/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:30:57 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/23 19:06:13 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_c(char const c, char const *set)
{
	int	i;

	i = 0;
	while (*set != '\0')
	{
		if (*set == c)
			i++;
		set++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len_s1;
	unsigned int	len_set;
	unsigned int	len;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	if (len_set >= len_s1)
		len = 0;
	else
		len = len_s1 - len_set;
		
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (*s1)
	{
		while(*set)
		{
			if(*set != *s1)
			{
			   *str = *s1;
			   str++;
			   
			}
		set++;
		}
	set = set - len_set;
	s1++;
	}
	*str = '\0';
	return (str - len);
}

int main ()
{

printf("\n 1234, 12 --> %s", ft_strtrim("1234","12"));

return (0);	
}