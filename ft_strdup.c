/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:18:29 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:11 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char					*p;
	unsigned int			len;

	len = ft_strlen (s1);
	p = malloc (len + 1);
	if (!p)
		return (0);
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = 0;
	return (p - len);
}
/*
void ft_print(const char *s1)
{
while(*s1)
{
	write(1,&*s1,1);
	s1++;
}
write(1,"\n",1);
}

int main(void)
{

	const char *s1 =  strdup("HOLA");
	printf("\n cadena %s", (char *)s1);

	const char *s2 = strdup("");
	printf("\n NULL %s", (char *)s2);

		const char *s11 =  ft_strdup("HOLA");
	printf("\n cadena %s", (char *)s11);

	const char *s22 = strdup("");
	printf("\n NULL %s", (char *)s22);
  
//const char *s3 =  strdup(0);
//printf("\n NULL %s", (char *)s3);
//ft_print(s3);
	const char *s33 = strdup(0);
	printf("\n NULL0 %s", (char *)s33);
return (0);
}*/
