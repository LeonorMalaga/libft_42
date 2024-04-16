/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:38:03 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/16 14:17:17 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

/*Mandatory functions*/
/**
 * @brief return the length of the given string
 * 
 * @param str 
 * @return ** unsigned int to can used in other functions
 */
unsigned int	ft_strlen(char *str);
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
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param dstsize have to be biger than dst lengt + src 
 * @return ** unsigned int 
 */
unsigned int			ft_strlcat(char *dst, const char *src, unsigned int size);
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

#endif
