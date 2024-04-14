/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:18:08 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/14 12:10:00 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*mdst;
	char			*msrc;

	i = 0;
	mdst = (char *)dst;
	msrc = (char *)src;
	if ((!dst && !src) || (dst == src))
		return (dst);
	while (i < n)
	{
		mdst[i] = msrc[i];
		i++;
	}
	return (dst);
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
	}
	else
		write (2, "please enter two strings and a number", 38);

//KO  29:    check(i == 2 && dest[2] == 'A'); showLeaks();
}*/
