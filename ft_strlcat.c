/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:00:38 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/15 15:19:07 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	dst_len;
	unsigned int	src_len;

	d = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (!dst && dstsize == 0)
		return (src_len);
	while (dst[d])
		d++;
	dst_len = d;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	s = 0;
	while (src[s] && d < (dstsize - 1))
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (dst_len + src_len);
}
/*
#include <string.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_string(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main (int ar , char **arv)
{
	if (ar == 4)
	{
		char		*dst = arv[1];
		char		*src = arv[2];
		char		*num = arv[3];
        char        aux;
		unsigned int n= num[0] + '0';
		ft_print_string("\nOrignal DST:\n");
		ft_print_string(dst);
		ft_print_string("\nOriginal SRC:\n");
		ft_print_string(src);
		ft_print_string("\nLoNGUTUD\n");
		ft_print_string(num);
		n = strlcat(dst, src, n);
		//n = ft_strlcat(dst, src, n);
		ft_print_string("\nDST after strlcat:  ");
		ft_print_string(dst);
		ft_print_string("\nSRC after strlcat:  ");
		ft_print_string(src);
		ft_print_string("\nNew LoNGUTUD\n");
        aux = (n - '0');
        num = &aux;
		ft_print_string(num);
	}
}*/
