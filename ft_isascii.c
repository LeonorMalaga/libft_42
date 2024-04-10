/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:53:21 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/10 15:53:59 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
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
        r = ft_isascii(c);
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