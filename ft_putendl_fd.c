/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:46:06 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/01 15:58:21 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
int main (int arn, char **arv)
{
	if(arn == 3)
	{
printf("arv0 :--%s--, arv1 :--%s--, arv2 :--%s--",arv[0], arv[1], arv[2]);
		int fd = open (arv[1], O_WRONLY);

		ft_putendl_fd ("Leonor ",fd);
        ft_putendl_fd (arv[2],fd);
		close(fd);
	}
return (0);
} */
