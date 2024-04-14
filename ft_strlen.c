/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:26:50 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/14 13:49:57 by leonmart         ###   ########.fr       */
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
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putnbr (2147483);
		ft_putnbr (648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar ('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr (nb / 10);
		}
		ft_putchar ((nb % 10) + '0');
	}
}
int	main(void)
{
	int n;;

	n=ft_strlen("Hello world");
	ft_putnbr(n);
	ft_putnbr(123
	return (0);
}
*/