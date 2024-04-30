/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:13:49 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/30 14:50:14 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Creates a new string, it does not free "s" just copies it adding at 
 * the end the character "c".  
 * 
 * @param s the string to copy.
 * @param c the character to add.
 * @return a string with length = s_length + 1, which is a copy of s, plus 
 * the "c" character at the end.  
 */
static char	*ft_str_negative(void)
{
	char	*r;

	r = malloc(2);
	if (!r)
	{
		free(r);
		r = NULL;
		return (NULL);
	}
	r[0] = '-';
	r[1] = '\0';
	return (r);
}
/**
 * @brief free s and return a new string with a copy of "s" plus 
 * the character "c" at the end.
 * 
 * @param s The string to copy. If "s" doesn't exit don't worry
 * a new string with only the character "c" goint to be create.
 * @param c the character to add.
 * @return char* the new string with lenght = s_lenght + 1.
 */

static char	*ft_add_char(char *s, char c)
{
	char	*new_s;
	int		len;

	if (s)
		len = ft_strlen(s) + 1;
	else
		len = 1;
	new_s = (char *) malloc((len + 1) * sizeof(char));
	if (!new_s)
	{
		free(new_s);
		new_s = NULL;
		return (NULL);
	}
	ft_bzero(new_s, len + 1);
	if (s)
	{
		ft_strlcpy(new_s, s, len + 1);
		free(s);
		s = 0;
	}
	new_s[len - 1] = c;
	new_s[len] = '\0';
	return (new_s);
}
/**
 * @brief fills "str" with the conversion of the integer "n" to string.
 * and returns it.
 * 
 * @param n the number to converted to string.
 * @param str a empty string. if "str" is not enought big
 *  the function cause a: !! segmenttion fault !!.
 * @return char* the string version of "n", str stuffed.
 */

static char	*ft_n_to_str(int n, char *str)
{
	if (n == -2147483648)
	{
		str = ft_str_negative();
		str = ft_n_to_str (2147483, str);
		str = ft_n_to_str (648, str);
	}
	else
	{
		if (n < 0)
		{
			str = ft_str_negative();
			n = -n;
		}
		if (n >= 10)
		{
			str = ft_n_to_str ((n / 10), str);
		}
		if (n == 0)
			str = ft_add_char (str, '0');
		else
			str = ft_add_char (str, (n % 10) + '0');
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = 0;
	if (!n || n == -0)
		return (ft_n_to_str(0, str));
	return (ft_n_to_str(n, str));
}
/*
void    check_leaks(void)
{
    system("leaks a.out");
}
int main (void)
{
	//char *r ="123";
	//char *r ="";printf("\n %s", ft_itoa(-2147483648));
	//char *r = 0;
	//char c = '4';
        char *str;
        str = 0;
    //printf("\n %s", ft_str_negative());
	//printf("\n %s", ft_add_char(r, c));
	//printf("\n %s", ft_n_to_str (15, str));
	//printf("\n %s", ft_itoa(-4));
	//printf("\n %s", ft_itoa(-2147483648));
        //printf("\n %s", ft_itoa(-0));
        str = ft_itoa(2147483647);
	printf("\n %s",str);
        free(str);
        atexit(check_leaks);
	return(0);
}*/
