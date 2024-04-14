/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:58:04 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/14 12:32:25 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_memmove(char *dst, const char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	len;

	if ((!dst && !src))
		return (0);
	i = 0;
	len = ft_strlen(src);
    
	if(src == dst)
		return (len);
	if (src > dst)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
	{
		dst[n] = '\0';
		while (n--)
		{
			dst[n] = src[n];
		}
	}
	return (len);
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

ft_print_string(dst);
ft_print_string("\n");
ft_print_string(src);
ft_print_string("\n");
ft_print_string(num);
char *old_dst=memcpy(dst, src, n);
ft_print_string("\nSRC after memcpy:  ");
ft_print_string(src);
ft_print_string("\nDST after memcpy:  ");
ft_print_string(dst);
ft_print_string("\n Return of memcpy:  ");
ft_print_string(old_dst);
char *o_dst=ft_memcpy(old_dst, src, n);
ft_print_string("\nMI TEST\n");
ft_print_string(old_dst);
ft_print_string("\n");
ft_print_string(o_dst);
	}*/
