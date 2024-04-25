/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:30:57 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/25 15:27:50 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief return the number of occurneces of a specific character in a string. 
 * 
 * @param c The character to locate in the string
 * @param set The string
 * @return int the number of "c" characters inside the string "set".
 */
static int	ft_count_c(char const c, char const *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i);
}
/**
 * @brief Calculate the amount of characters in the string S1 that is not
 * in the string s2.
 * 
 * @param s1 
 * @param s2 
 * @return int the number of different characters.
 */
static int ft_new_str_len(char const *s1, char const *s2)
{
unsigned int	len_s1;
unsigned int	len;
unsigned int	machs;

machs = 0;
len = 0;
if(!s1)
	return (0);
len_s1 = ft_strlen(s1);
if (len_s1 == 0)
	return (0);
if (!s2 || ft_strlen(s2) == 0)
	return (len_s1);
while(*s1)
{
	machs = machs + ft_count_c(*s1, s2);
	s1++;	
}
len = len_s1 - machs;
return(len);
}
/**
 * @brief the funciton ft_cp_diff copies into the string "str" the characters of the string "s1" that are not in
 * the string "s2".
 * 
 * @param s1 The original string from which copy the characters.
 * @param s2 The list of characters to be excluded.
 * @param str The empty string that will contain the characters extracted from "s1".
 * @param str_len The length of the empty "str" string.
 * @return The function return "str" after filling it. 
 */
static char *ft_cp_diff(char const *s1, char const *s2, char *str, unsigned int str_len)
{ 
	unsigned int	len_s2;

	len_s2 = ft_strlen(s2);
	while(*s1)
	{
		if(ft_count_c(*s1, s2) == 0)
		{
			*str = *s1;
			str++;
		}

	s1++;
	}
	*str = '\0';
	return (str - str_len);
}
/**
 * @brief Copy "s1" into "str"
 * 
 * @param s1 
 * @param str 
 */
static void ft_cp(char const *s1, char *str)
{
	unsigned i;

	i = 0;
	while (s1[i])
	{
	    str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len;
	
	len = ft_new_str_len(s1, set);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	if (len == 0)
	{
		str[0] = 0;
		return (str);
	}
	if (s1 && (!set || ft_strlen(set) == 0))
		ft_cp(s1, str);
	else	
       str = ft_cp_diff(s1, set, str, len);

	return (str);
}

// int test_strtrim()
// {
// 	// int res = single_test_strtrim(1, "", "", "");
// 	//  res = single_test_strtrim(2, "abcd", "", "abcd") && res;
// 	// res = single_test_strtrim(3, "", "cdef", "") && res;
// 	// res = single_test_strtrim(4, " . abcd", " ", ". abcd") && res;
// 	// res = single_test_strtrim(5, "ab cd  f    ", " ", "ab cd  f") && res;
// 	// res = single_test_strtrim(6, "xxxz  test with x and z and x .  zx  xx z", "z x", "test with x and z and x .") && res;
// 	// res = single_test_strtrim(7, "   abxfg  ", "x", "   abxfg  ") && res;
// 	// res = single_test_strtrim(8, ".teste, bla ,.,.", ",.", "teste, bla ") && res;
// 	return res;
// }/*
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
 printf("\n 1234, 12 expected 34--> %s", ft_strtrim("1234","12"));
 printf("\n 12, 1234 expected    --> %s", ft_strtrim("12","1234"));
 printf("\n 1234, "" expected 1234--> %s", ft_strtrim("1234",""));
 printf("\n "", 12 expected     --> %s", ft_strtrim("","12"));
 printf("\n "", "" expected    --> %s", ft_strtrim("",""));
 printf("\n 0, 0 expected    --> %s", ft_strtrim(0,0));
 printf("\n '.teste, bla ,.,. '   , ',.' expected    --> %s", ft_strtrim(".teste, bla ,.,.",",."));
  ft_strtrim(".teste, bla ,.,.", ",."): expected: "teste, bla ", got: "teste bla "

return (0);	
}*/