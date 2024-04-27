/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:35:03 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/27 19:29:33 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_array(char **s2)
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

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}
static int ft_word_len(char const *s, char c, int index)
{
	int	word_len;

	word_len = 0;
	while (s[index] && s[index] != c)
	{
		index++;
		word_len++;
	}
	return (index);
}
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

		i = i + word_len;
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2[word])
		{
			free_array (s2);
			return (0);
		}
		ft_putword(s2[word], s, i, word_len);
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
	if(!s)
		return (0);
	num_words = ft_count_words(s, c);
	//printf("\n %d \n", num_words);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	s2 = ft_split_words(s, c, s2, num_words);
	if (!s2)
	{
		free_array(s2);
		return(0);			
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
char *s = "olol euismod non,. Sed non risus. Suspendisse mi.";
char c = ' ';
char **res = ft_split(s, c);

int i;

i = 0;
while(res[i])
{   
		printf("\n %s \n", res[i]);
	i++;
}
atexit(check_leaks);
return (0);
}*/
