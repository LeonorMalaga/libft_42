/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:13:49 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/01 18:09:31 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Calculate the number of digits of the integer "n" if it is negative
 * has one more for the sing "-".
 * 
 * @param n the number.
 * @return the lenght of the integer "n". 
 */
static int	ft_n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}
/**
 * @brief fills "str" with the conversion of the integer "n" to string.
 * and returns it.
 * 
 * @param n the number to converted to string.
 * @param str a empty string. if "str" is not enought big
 *  the function cause a: !! segmenttion fault !!.
 * @param len the number of digits of the integer "n" if it is negative
 * has one more for the "-".
 * @return char* the string version of "n", str stuffed.
 */

static char	*ft_char(char *str, unsigned int n, long int len)
{
	while (n > 0)
	{
		str[len--] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}

static char	*ft_2147483648(void)
{
	char	*s;

	s = (char *)malloc(12);
	if (!(s))
		return (NULL);
	s[0] = '-';
	s[1] = '2';
	s[2] = '1';
	s[3] = '4';
	s[4] = '7';
	s[5] = '4';
	s[6] = '8';
	s[7] = '3';
	s[8] = '6';
	s[9] = '4';
	s[10] = '8';
	s[11] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == -2147483648)
	{
		s = ft_2147483648();
		return (s);
	}
	len = ft_n_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
		s = ft_char(s, n, len);
	}
	else
		s = ft_char(s, n, len);
	return (s);
}
/*
void    check_leaks(void)
{
    system("leaks a.out");
}
int main (void)
{
    char *str;
    //str = ft_itoa(0);
	//str = ft_itoa(-0);
	//str = ft_itoa(-2);
    str = ft_itoa(2147483647);
	//str = ft_itoa(-2147483648);
	printf("\n %s",str);
    free(str);
    atexit(check_leaks);
	return(0);
}*/
