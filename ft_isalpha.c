/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:37:21 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/10 09:36:37 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
        r = ft_isalpha(c);
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
