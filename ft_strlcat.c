/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:00:38 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/01 11:41:11 by leonmart         ###   ########.fr       */
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
	while (dst[d])
		d++;
	dst_len = d;
	if (!dst || dstsize <= dst_len)
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

int main (void)
{

	char res_ft_00[20] = "This is a proof";
	ft_strlcat(res_ft_00, "copy this", sizeof(res_ft_00));
	char res_bc_00[20] = "This is a proof";
	strlcat(res_bc_00, "copy this", sizeof(res_bc_00));
	char res_ft_01[20] = "This";
	ft_strlcat(res_ft_01, "copy this", sizeof(res_ft_01));
	char res_bc_01[20] = "This";
	strlcat(res_bc_01, "copy this", sizeof(res_bc_01));
	    ft_print_string("\ntest0 dst=This is a proof src=copy this\n");
		ft_print_string("\nstrlcat:  ");
		ft_print_string(res_bc_00);
		ft_print_string("\nft_strlcat:  ");
		ft_print_string(res_ft_00);
		ft_print_string("\n\ntest1, dst=this src=copy this\n");
		ft_print_string("\nstrlcat:  ");
		ft_print_string(res_bc_01);
		ft_print_string("\nft_strlcat:  ");
		ft_print_string(res_ft_01);
}

int main (void)
{
	char	dst[] ="1234";
	char	src[] = "ab";

		char		*dst;
		char		*src;
		dst= malloc (5);
		src = malloc (3);

		src[0] = 'a';
		src[1] = 'b';
		src[2] = '\0';
		dst[0] = '1';
		dst[1] = '2';
		dst[2] = '3';
		dst[3] = '4';
		dst[4] = '\0';


	
		unsigned int n= 4;
		unsigned int n2 = 0;

	        n2 = ft_strlcat(src, dst, n);
		printf("\n string1: %s ,sice: %d ,append result : %s", src , n2, dst);
	return (0);
}
*/