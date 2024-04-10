/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:57:54 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/10 16:02:38 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
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
        r = ft_isprint(c);
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