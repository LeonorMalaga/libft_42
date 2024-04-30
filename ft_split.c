/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:35:03 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/30 15:21:37 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **s2)
{
	int	i;

	i = 0;
	if (s2)
	{
		while (s2[i])
		{
			free(s2[i]);
			s2[i] = 0;
			i++;
		}
		free(s2);
		s2 = 0;
	}
	return (s2);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != '\0' && str[i + 1] != c)
			count++;
		i++;
	}
	if (str[0] != c && str[0] != '\0')
		count++;
	return (count);
}
/**
 * @brief the function ft_word_len() return the amount of characters
 * between the positions "index" and the first ocurence of "c" in "s".
 * 
 * @param s full string, if "s" doesn't exist
 *  the function cause a: !! segmenttion fault !!.
 * @param c end character.
 * @param index init position.
 * @return int-> 0 ,if at position "index" we have a "c" character.
 */

static int	ft_word_len(char const *s, char c, int index)
{
	int	word_len;

	word_len = 0;
	while (s[index] && s[index] != c)
	{
		index++;
		word_len++;
	}
	return (word_len);
}
/**
 * @brief ft_split_words() devide in pices,
 * the string "s" splited by character "c"
 * and copy each piece to a consecutive "s2" position.
 * 
 * @param s String to split into pieces. if "s" doesn't exist
 *  the function cause a: !! segmenttion fault !!.
 * @param c the separator characte
 * @param s2 a double empty array were alocate every pice of "s".
 * if "s" doesn't exist
 *  the function cause a: !! segmenttion fault !!.
 * @param num_words the len of s2.
 * @return char** a double array with a "pice of s" in every position.
 */

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		word_len = ft_word_len(s, c, i);
		s2[word] = ft_substr(s, i, word_len);
		if (!s2[word])
		{
			s2 = free_array (s2);
			return (0);
		}
		i = i + word_len;
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	s2 = ft_split_words(s, c, s2, num_words);
	if (!s2)
	{
		s2 = free_array(s2);
		return (0);
	}
	return (s2);
}
/*
void    check_leaks(void)
{
    system("leaks a.out");
}

int main (void)
{
	int i;

	i = 0;
 //char *s = "       Esto      es una      prueba     ";
 //char c = ' ';
 //char **res = ft_split(s, c);
// char *s = "   ";
// char c = ' ';
// char **res = ft_split(s, c);
//char *s = "xxxxxxxxhello!";
//char c = 'x';
//char **res = ft_split(s, c);//segmentation fault
// char *s = "";
// char c = ' ';
// char **res = ft_split(s, c);
// char *s = "";
// char c = 0;
// char **res = ft_split(s, c);
// char *s = 0;
// char c = 0;
// char **res = ft_split(s, c);//segmentation fault
// char *s = 0;
// char c = ' ';
// char **res = ft_split(s, c);//segmentation fault
char *s = " Suspendisse   mi 1234. ";
char c = ' ';
char **res = ft_split(s, c);

while(res[i])
{   
	printf("\n %s", res[i]);
	i++;
}
printf("\n %s", "-------end test-----");

    res = free_array(res);
	if (res)
        printf("\n-----RES It is not null-----\n");

atexit(check_leaks);
return (0);
}*/
