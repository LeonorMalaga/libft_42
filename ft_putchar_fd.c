/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:00:54 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/01 13:32:07 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main (int arn, char **arv)
{
	if(arn == 2)
	{
		printf("arv0 :--%s--, arv1 :--%s--",arv[0] ,arv[1]);
		int fd = open (arv[1], O_WRONLY);

		ft_putchar_fd ('D',fd);

		close(fd);
	}
return (0);
}

int main ()
{
	int fd = open("text.txt", O_RDWR);

	ft_putchar_fd('A', fd);
	close(fd);
	return (0);
}*/