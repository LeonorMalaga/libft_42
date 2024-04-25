/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:38:03 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/25 15:16:49 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

/**
 * @brief return the length of the given string
 * 
 * @param str 
 * @return ** unsigned int to can used in other functions
 */
unsigned int	ft_strlen(const char *str);
/**
 * @brief if dstsize is not 0, ft_strlcpy() copies up to (dstsize - 1) characters
 *  from the string src to dst,adding a NUL-terminating.
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return ** unsigned int,  always the length of src.
 */
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
/**
 * @brief strlcat() appends string src to the end of dst. 
 * appends (dstsize - 1 - dst_length) characters
 * 
 * @param dst 
 * @param src 
 * @param dstsize has to be > dst_length to append somthing
 * @return ** unsigned if (!dst || dstsize <= dst_length)-> dstsize + src_length
 * without append nothing
 * else append and return (dst_length + src_length) 
 */
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
/**
 * @brief  The ft_isalpha() function return 1 if the given character is
 * a letter no matter if is upper o lower case.
 * 
 * @param c int (the ascci value of the character)
 * @return ** int -> 0 false, 1 true (is a letter)
 */
int				ft_isalpha(int c);
/**
 * @brief 
 * 
 * @param c int (the ascci value of the digit)
 * @return ** int -> 0 false, 1 true if c it is a number between 0 and 9.
 */
int				ft_isdigit(int c);
/**
 * @brief The ft_isalnum() function return 1 if the given character is
 * a letter no matter if is upper o lower case or is a digit.
 * 
 * @param c int (the ascci value of the character)
 * @return ** int -> 0 false, 1 true (if c is a letter o a number
 * between 0 and 9)
 */
int				ft_isalnum(int c);
/**
 * @brief The ft_isprint() function indicate if the given character is a 
 * printing character
 * 
 * @param c int (the ascci value of the character)
 * @return int -> 0 false, 1 true (if c is between '' and '~')
 */
int				ft_isprint(int c);
/**
 * @brief The ft_isascii() function indicate if the given character is 
 * between 0 to 127 from the ascci table 
 * 
 * @param c int (the ascci value of the character)
 * @return ** int -> 0 false, 1 true
 */
int				ft_isascii(int c);
/**
 * @brief  The toupper() function converts a lower-case letter 
 * to the corresponding upper-caseletter
 * 
 * @param c int the ascii integer value of the char
 * @return ** int the ascii integer value of the upper case char
 */
int				ft_toupper(int c);
/**
 * @brief  The tolower() function converts a upper-case letter 
 * to the corresponding lower-caseletter
 * 
 * @param c int the ascii integer value of the char
 * @return ** int the ascii integer value of the lower case char
 */
int				ft_tolower(int c);
/**
 * @brief The function ft_menset writes len bytes of value c
 * (converted to an unsigned char) to the string b.
 * 
 * @param b the give string
 * @param c the character to use to fill the first "len" positions
 * of the string .
 * @param len the number of positions to overwritte.
 * @return ** char* 
 */

void			*ft_memset(void *b, int c, unsigned int len);
/**
 * @brief The ft_bzero() function writes n zeroed bytes to the string s
 * 
 * @param s 
 * @param len number of bytes to copy, be careful, 
 * if the *b is for example a string of type long to copy a complete data 
 * "leng" it has to be 8, to copy two positión "leng" it has to be 16
 * @return ** void 
 */
void			ft_bzero(void *s, unsigned int len);
/**
 * @brief The ft_memcpy() function copies n bytes from memory area src
 *  to memory area dst
 * 
 * @param dst it is a pointer to a space of memory, we don't specify the 
 * type of date to be stored in that memory space.
 * @param src it is a constant variable, which means that it must not 
 * be modified.
 * @param n number of bytes to copy,
 * @return ** void* return dst. If dst and src are NULL, or both point to 
 * the same memory location returns dst without doing anything else.
 */
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
/**
 * @brief The memmove() function copies len bytes from string src to string dst. 
 * The two strings may overlap-> if dst is > src we start to copy from position
 *  n to 0, in other case we copy in the normal way from 0 to n.
 * 
 * @param dst it is a pointer to a space of memory, we don't specify the 
 * type of date to be stored in that memory space.
 * @param src it is a constant variable, which means that it must not 
 * be modified.
 * @param n number of bytes to copy,
 * @return ** void* return dst. If dst and src are NULL, or both point to the
 *  same memory location returns dst without doing anything else.
 */
void			*ft_memmove(void *dst, const void *src, unsigned int n);
/**
 * @brief 	The strchr() function locates the first occurrence of c;
 * 
 * @param s a string of characters.
 * @param c int the ascii integer value of the char to locate. 
 * @return a char* pointer to the first (char)c int *s, 
 * if (char)c is not present in *s, return 0.
 */
char			*ft_strchr(const char *s, int c);
/**
 * @brief i = ft_strlen((char *) s);while (i >= 0)
	{   if (s[i] == (char)c) return ((char *)(s + i));
		i--;
	}
 * 
 * @param s 
 * @param c int the ascii integer value of the char to locate.
 * @return  st_strrchr return a char* pointer to the last ocurrence of (char)c.
 */
char			*ft_strrchr(const char *s, int c);
/**
 * @brief  look for a different character between s1 and s2 as long as the 
 * strings don't end and along (n-1) positions.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return 0 if the two strings are equals and if  (!*s1 && !*s2) || (n <= 0)
 */
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned int len);
int				ft_atoi(char *str);
void			*ft_calloc(unsigned int count, unsigned int size);
char			*ft_strdup(const char *s1);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief the funciton ft_strtrim, trims the characters from the second string to the first one, and return the result.
 * 
 * @param s1 The original string
 * @param set The list of characters to be excluded.
 * @return char* a string that contaings the characters that are in "s1" but not in "set".
 */
char			*ft_strtrim(char const *s1, char const *set);

#endif
