/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:38:03 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/11 15:03:03 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

/*Mandatory functions*/
/**
 * @brief  The ft_isalpha() function return 1 if the given character is
 * a letter no matter if is upper o lower case.
 * 
 * @param c int (the ascci value of the character)
 * @return ** int -> 0 false, 1 true (is a letter)
 */
int		ft_isalpha(int c);
/**
 * @brief 
 * 
 * @param c int (the ascci value of the digit)
 * @return ** int -> 0 false, 1 true if c it is a number between 0 and 9.
 */
int		ft_isdigit(int c);
/**
 * @brief The ft_isalnum() function return 1 if the given character is
 * a letter no matter if is upper o lower case or is a digit.
 * 
 * @param c int (the ascci value of the character)
 * @return ** int -> 0 false, 1 true (if c is a letter o a number
 * between 0 and 9)
 */
int		ft_isalnum(int c);
/**
 * @brief The ft_isprint() function indicate if the given character is a 
 * printing character
 * 
 * @param c int (the ascci value of the character)
 * @return int -> 0 false, 1 true (if c is between '' and '~')
 */
int		ft_isprint(int c);
/**
 * @brief The ft_isascii() function indicate if the given character is 
 * between 0 to 127 from the ascci table 
 * 
 * @param c int (the ascci value of the character)
 * @return ** int -> 0 false, 1 true
 */
int		ft_isascii(int c);
/**
 * @brief return the length of the given string
 * 
 * @param str 
 * @return ** int 
 */
int		ft_strlen(char *str);
/**
 * @brief function writes len bytes of value c (converted to an unsigned char)
 * to the string b.
 * 
 * @param b the give string
 * @param c the character to use to fill the first "len" positions
 * of the string .
 * @param len the number of positions to overwritte.
 * @return ** char* 
 */

void	*ft_memset(void *b, int c, unsigned int len);
void	ft_bzero(void *s, unsigned int len);
#endif
