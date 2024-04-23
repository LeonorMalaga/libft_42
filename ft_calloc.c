/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:49:23 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/23 18:29:53 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned char	*r;
	unsigned int	i;
	unsigned int	e;

	e = count * size;
	i = 0;
	r = (unsigned char *)malloc (e);
	if (r)
	{
		while (i < e)
		{
			r[i] = 0;
			i++;
		}
	}
	return (r);
}
/*
void ft_print_n (int n)
{
	char c;
	if( n >= 10)
	{
		c = n%10 + '0';
		write (1,&c,1);
		ft_print_n(n/10);
	}
	c = n + '0';
	write (1,&c,1);
}
int main(void)
{
	int size = 8539;
	int mc;

 
    void * d1 = ft_calloc(size, sizeof(int));
    void * d2 = calloc(size, sizeof(int));
	mc = ft_memcmp(d1, d2, size * sizeof(int));
    ft_print_n(mc);
    free(d1);
    free(d2);
	//------------------
	void * d3 = ft_calloc(30, 1);
    void * d4 = calloc(30, 1);
	write(1, "\n", 1);
    if (!d3)
        write(1, "3", 1);
    else
        write(1, d3, 30);
	write(1, "-", 1);
	if (!d4)
        write(1, "4", 4);
    else
        write(1, d4, 30);
	free(d3);
    free(d4);
    //-------------------
	void * d5 = ft_calloc(0, 1);
    void * d6 = calloc(0, 1);
	write(1, "\n", 1);
    if (!d5)
        write(1, "3", 1);
    else
        write(1, d5, 30);
	write(1, "-", 1);
	if (!d6)
        write(1, "4", 4);
    else
        write(1, d6, 30);
	free(d5);
    free(d6);
	//---------------------


	return(0);
}*/
