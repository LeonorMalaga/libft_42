/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:59:15 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/01 18:27:11 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//I use "long" to avoid the problems with -2147483648
void	ft_putnbr_fd(int n, int fd)
{
	long	mn;

	mn = n;
	if (mn < 0)
	{
		write(fd, "-", 1);
		mn = -mn;
	}
	if (mn > 9)
	{
		ft_putnbr_fd(mn / 10, fd);
		ft_putchar_fd((mn % 10) + '0', fd);
	}
	else
		ft_putchar_fd(mn + '0', fd);
}
/*
int main ()
{
	int fd = open("text.txt", O_RDWR);
    
	//int i = (-2147483647 -1);
	//ft_putnbr_fd (0, fd);
	ft_putnbr_fd (-2147483648, fd);
	//ft_putnbr_fd(i, fd);
	
	close(fd);
	return (0);
}
*/
