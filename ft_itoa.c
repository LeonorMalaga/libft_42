/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:13:49 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/28 15:47:00 by leonmart         ###   ########.fr       */
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
char *ft_str_negative()
{
	char *r;

	r = malloc(2);
	if(!r)
	{
		free(r);
		r = 0;
		return(0);
	}
	r[0]= '-';
	r[1]= '\0';
   return (r);
}

char *ft_add_char_to_the_end(char *s, char c)
{
	char *new_s;
	int len;
	if(s)
		len = ft_strlen(s) + 1;
	else
		len = 1;
	new_s = malloc(len + 1);
	if(!new_s)
	{
		free(new_s);
		new_s = 0;
		return(s);
	}
	ft_bzero(new_s, len + 1);
	if(s)
    	ft_strlcpy(new_s,s,len);		
	new_s[len - 1] = c;
	new_s[len] = '\0';
	return (new_s);
}
char *ft_add_char_to_the_beginning(char *s, char c)
{
	char *new_s;
	int len;
	if(s)
		len = ft_strlen(s) + 1;
	else
		len = 1;
	new_s = malloc(len + 1);
	if(!new_s)
	{
		free(new_s);
		new_s = 0;
		return(s);
	}
	ft_bzero(new_s, len + 1);
	if(s)
    	ft_strlcpy(new_s,s,len);		
	new_s[len - 1] = c;
	new_s[len] = '\0';
	return (new_s);
}

/*char	*ft_itoa(int n)
{
	int len;
	char *r;

    r = 0;
	len = 0;
	if (n == -2147483648)
	{
		r = ft_str_negative();
		ft_putnbr (2147483);
		ft_putnbr (648);
	}
	else
	{
		if (n < 0)
		{
			r = ft_str_negative();
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr (n / 10);
		}
		len++;
		r = ft_add_char_to_the_end (r,(n % 10) + '0');
	}
return (r);
}*/
void    check_leaks(void)
{
    system("leaks a.out");
}
int main (void)
{
	//char *r ="123";
	//char *r ="";
	//char *r = 0;
	//char c = '4';

	//printf("\n %s", ft_add_char(r, c));
	//free(r);

	printf("\n %s", ft_str_negative());
	//atexit(check_leaks);
	return(0);
}