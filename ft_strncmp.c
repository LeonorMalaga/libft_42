/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:31:19 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/17 17:54:35 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}
/*
#include <string.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_int(int n)
{
 if ( n == -2147483648)
 {
	write(1,"-",1);
	ft_print_int(21474);
	ft_print_int(83648);
 }
 else
 {
  if( n < 0)
 {
  write(1,"-",1);
  n = -n;
 }
 if( n >= 10 )
 {
	ft_print_int(n/10);
 }
	ft_putchar((n % 10) + '0');
 }
}
int main (int narv, char **arv)
{
	if( narv == 3)
	{
		const char *s1;
		s1 = (const char *)arv[1];
		const char *s2;
		s2 = (const char *)arv[2];
		unsigned int n = 2;
		int num;
        
		num = strncmp(s1,s2 ,n);
		ft_print_int(num);
		write(1,"-",1);
		num = ft_strncmp(s1,s2 ,n);
		ft_print_int(num);
	}

}*/
