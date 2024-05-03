/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:32:00 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/01 15:44:35 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int main (int arn, char **arv)
{
	if(arn == 3)
	{
printf("arv0 :--%s--, arv1 :--%s--, arv2 :--%s--",arv[0], arv[1], arv[2]);
		int fd = open (arv[1], O_WRONLY);

		ft_putstr_fd ("Prueba uno",fd);
        ft_putstr_fd (arv[2],fd);
		close(fd);
	}
return (0);
}
*/
