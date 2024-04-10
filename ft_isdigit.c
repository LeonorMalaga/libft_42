/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:17:55 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/10 11:19:15 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int main (int n, char **arv)
{
    int r;
    char c;
    if (n > 1)
    {
        c = arv[1][0];
        r = ft_isdigit(c);
        if(r != 0)
            write (1, "1", 1);
        else
            write (1, "0", 1);
    }
    else
        write (2, "please enter a character", 25);
    return 1;
}
*/