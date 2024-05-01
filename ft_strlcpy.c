/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:58:04 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/01 10:58:54 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
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
		unsigned int n= num[0] + '0';
		unsigned int n2 = 0;
		ft_print_string("\nOrignal DST:\n");
		ft_print_string(dst);
		ft_print_string("\nOriginal SRC:\n");
		ft_print_string(src);
		ft_print_string("\nLoNGUTUD\n");
		ft_print_string(num);
		//strlcpy(dst, src, n);
		ft_strlcpy(dst, src, n);
		ft_print_string("\nDST after strlcpy:  ");
		ft_print_string(dst);
		ft_print_string("\nSRC after strlcpy:  ");
		ft_print_string(src);
		ft_print_string("\nNew LoNGUTUD\n");
		ft_print_string(num);
        n2 = ft_strlcpy(dst,src,n);
		printf("\n original: %s ,sice: %d ,copy: %s", src , n2, dst);
	}
		char		*dst;
		char		*src;
		dst= malloc (1);
		src = malloc (3);
		src = "12";
		unsigned int n= 2;
		unsigned int n2 = 0;
	        n2 = ft_strlcpy(dst,src,n);
		printf("\n original: %s ,sice: %d ,copy: %s", src , n2, dst);
}
*/
