/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:30:57 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/26 15:08:39 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//If s1 does not exist, it returns a empty string
//use ft_strchr to look if the init in "s1" has characters included in "set"
//and locate the index ("init") in "s1", where starts to have characters that 
//are not in "set"; do the same but moving from the end of "s1" (index "end")
//to determine the last position to print.
//use ft_substr function to generate the new string that start in index "init" 
//of "s1" and finis in index "end" of s1, ft_substr needs the total length of 
//the new string that is "end - init".

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	end;
	unsigned int	init;

	init = 0;
	if (!s1)
		return (ft_strdup(""));
	end = ft_strlen(s1);
	if (!*s1)
		return (ft_strdup(""));
	while (s1[init] && ft_strchr(set, s1[init]))
		init++;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	end = end - init;
	str = ft_substr((char *) s1, init, end + 1);
	return (str);
}
/*
int main ()
{

//---------TEST---for-- ft_new_str_len ------------------//
//printf("\n 1234, 12 expected "2"--> %d", ft_new_str_len("1234","12"));
//printf("\n 12, 1234 expected "0"--> %d", ft_new_str_len("12","1234"));
//printf("\n 1234, "" expected "4" --> %d", ft_new_str_len("1234",""));
//printf("\n "", 12 expected "0"--> %d", ft_new_str_len("","12"));
//printf("\n "", "" expected "0"--> %d", ft_new_str_len("",""));
//printf("\n 0, 0 expected "0"--> %d", ft_new_str_len(0,0));
//---------TEST---for-- ft_strtrim ------------------//
 //printf("\n '1234', '12' expected '34'--> %s", ft_strtrim("1234","12"));
 //printf("\n '12', '1234' expected ''   --> %s", ft_strtrim("12","1234"));
 //printf("\n '1234', '' expected '1234'--> %s", ft_strtrim("1234",""));
 //printf("\n '', '12' expected  ''   --> %s", ft_strtrim("","12"));
 printf("\n '', '' expected ''   --> %s", ft_strtrim("",""));
 printf("\n '0', '0' expected ''   --> %s", ft_strtrim(0,0));
 printf("\n '.teste, bla ,.,.', ',.' expected 'teste, bla' 
    --> %s", ft_strtrim(".teste, bla ,.,.",",."));
return (0);	
}*/