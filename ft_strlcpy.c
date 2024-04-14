/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:58:04 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/14 14:03:45 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	lensrc;
	unsigned int	lendst;

	i = 0;
	lensrc = (unsigned int) ft_strlen(src);
	lendst = (unsigned int) ft_strlen(dst);
	if ((n > 0) && (lendst > 0))
	{
		while (i < (n - 1) && src[i] != '\0' && i < (lendst - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}
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
	}
}
