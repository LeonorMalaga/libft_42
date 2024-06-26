/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:38:03 by leonmart          #+#    #+#             */
/*   Updated: 2024/05/15 13:06:26 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

/*****************************************************************************/
/*                       CHECKS-COUNTERS-UTILITIES			                 */
/*****************************************************************************/
/**
 * @brief return the length of the given string
 * 
 * @param str If "str" doesn't exist (is 0 or NULL) the function return NULL.
 * @return ** unsigned int to can used in other functions
 */
unsigned int	ft_strlen(const char *str);
/**
 * @brief  The ft_isalpha(int) function return 1 if the given character is
 * a letter no matter if is upper o lower case.
 * 
 * @param c int (the ascci value of the character).
 * @return ** int -> 0 false, 1 true (is a letter).
 */
int				ft_isalpha(int c);
/**
 * @brief The t_isdigit(int) function return 1 if the given character is
 * a number.
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
 * @brief ft_atoi returns the number with it sing, If "str" starts 
 * with X spaces following by a  + o -  plus a number plus some letters, 
 * If "str" starts with more than one + or -, this function returns 0
 * 
 * @param str if "str" doesn't exist (is 0 or NULL)
 *  the function cause a :!! segmenttion fault !!.
 * @return int  The number that appears at the beginnig of "str".
 */
int				ft_atoi(char *str);
/*****************************************************************************/
/*                       CHANGE OR LOCATE A CHARACTER                        */
/*****************************************************************************/
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
 * @brief 	The strchr(*s,c) function locates the FIRST occurrence of "c"
 * in the string "s";
 * 
 * @param s a string of characters.if "s" doesn't exist (is 0 or NULL)
 *  the function cause a: !! segmenttion fault !!.
 * @param c int the ascii integer value of the char to locate. 
 * @return a char* pointer to the first (char)c int *s, 
 * if (char)c is not present in *s, return 0.
 */
char			*ft_strchr(const char *s, int c);
/**
 * @brief "ft_strrchr" return a (char *)pointer to the 
 *           LAST ocurrence    of (char)c.
 * 
 * @param s a string of characters.if "s" doesn't exist (is 0 or NULL)
 *  the function cause a: !! segmenttion fault !!.
 * @param c int the ascii integer value of the char to locate.
 * @return  "ft_strrchr" return a (char *)pointer to the 
 *           LAST ocurrence    of (char)c.
 */
char			*ft_strrchr(const char *s, int c);
/**
 * @brief the function "ft_memchr(*s,c,n)" looks int the first "n" characters 
 * of the string "s" the character "c"
 * 
 * @param s we castted it to (char *). if "s" doesn't exist (is 0 or NULL)
 *  the function cause a: !! segmenttion fault !!.
 * @param c int the ascii integer value of the char to locate.
 * @param n If 0 the function returns 0.
 * @return void* a pointer to the first ocurrence of the character 'c'
 *  in the string 's'.
 */
void			*ft_memchr(const void *s, int c, unsigned int n);
/**
 * @brief  look for a different character between s1 and s2 as long as the 
 * strings don't end and along (n-1) positions.
 * 
 * @param s1 a string of characters.if "s1" doesn't exist (is 0 or NULL)
 *  the function cause a: !! segmenttion fault !!.
 * @param s2 a string of characters.if "s2" doesn't exist (is 0 or NULL)
 *  the function cause a: !! segmenttion fault !!.
 * @param n if n == 0, return 0.
 * @return ((unsigned char)s1[i] - (unsigned char)s2[i]) of the first different
 * couple of characters.
 */
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
/*****************************************************************************/
/*                      CHANGE OR LOCATE A STRINGS                           */
/*****************************************************************************/
/**
 * @brief The function ft_menset writes len bytes of value c
 * (converted to an unsigned char) to the string b.
 * 
 * @param b the give string
 * @param c the character to use to fill the first "len" positions
 * of the string .
 * @param len the number of positions to overwritte.
 * @return ** return a pointer to "*b", if "b" doesn't exist 
 * (is 0 or NULL) the function cause a: !! segmenttion fault ¡¡.
 */

void			*ft_memset(void *b, int c, unsigned int len);
/**
 * @brief The ft_bzero() function writes n zeroed bytes to the string s.
 * 
 * @param s if "s" doesn't exist (is 0 or NULL) the function cause a:
 * !! segmenttion fault ¡¡.
 * @param len number of bytes to copy, be careful, 
 * if the *b is for example a string of type long to copy a complete data 
 * "leng" it has to be 8, to copy two positión "leng" it has to be 16
 * @return ** void 
 */
void			ft_bzero(void *s, unsigned int len);
/**
 *  @brief if "dstsize" is not 0, "ft_strlcpy()"" copies up to (dstsize - 1)
 * characters from the string src to dst, adding a NUL-terminating.
 * 
 * @param dst It is necesarry declare it with malloc before passing 
 * it to the function.
 * @param src It is necesarry declare it with malloc before passing 
 * it to the function.
 * @param dstsize if "dstsize = 0" the fun
 * @return ** unsigned int,  always the length of src.
 */
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
/**
 * @brief strlcat() appends string src to the end of dst. 
 * appends (dstsize - 1 - dst_length) characters
 * 
 * @param dst this chain will be modified
 * @param src this string will be appended to the end of the dst string.
 * @param dstsize has to be > dst_length to append somthing
 * @return ** unsigned if (!dst || dstsize <= dst_length)-> dstsize + src_length
 * without append nothing
 * else append and return (dst_length + src_length) 
 */
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);

/**
 * @brief The ft_memcpy() function copies n bytes from memory area "src"
 *  to memory area "dst" for that we caste them to (char *). If the memory 
 * location of "dst" is > the memory location of "src"
 *  the result will not be what you expected.
 * 
 * @param dst it is a pointer to a space of memory, we don't specify the 
 * type of date to be stored in that memory space.
 * @param src it is a constant variable pointer, which means that it must not 
 * be modified.
 * @param n number of bytes to copy,
 * @return ** void* return dst. If "dst" and "src" are (NULL or 0), 
 * or both point to the same memory location returns "dst"
 *  without doing anything else.
 */
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
/**
 * @brief The memmove() function copies "len" bytes from string "src" to 
 * string "dst". The two strings may overlap-> if "dst" is > "src" 
 * we start to copy from position n to 0, in other case we copy in the normal 
 * way from 0 to "n", using ft_memcpy().
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
 * @brief The ft_memcmp() function compares the first
 *  "n" (unsigned char *) of "s1" with the first "n" (unsigned char *) 
 * of "s2" character by character.
 * 
 * @param s1 In the function we castted it to (unsigned char *).
 * if "s1" doesn't exist (is 0 or NULL) the function 
 * cause a: !! segmenttion fault !!.
 * @param s2 In the function we castted it to (unsigned char *).
 * if "s2" doesn't exist (is 0 or NULL) the function 
 * cause a: !! segmenttion fault !!.
 * @param n If 0 the function returns 0.
 * @return return 0 if both string have the same content.
 * in other case return ((unsigned char)s1[i] - (unsigned char)s2[i]).
 */
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
/**
 * @brief ft_strnstr(haystack,needle,len) locates the substring "needle" 
 * in the string "haystack", and returns a pointer to the first character 
 * of the substring "needle" in "haystack".
 * 
 * @param haystack  if "haystack" doesn't exist (is 0 or NULL)
 *  the function cause a :!! segmenttion fault !!.
 * @param needle  if "needle" doesn't exist (is 0 or NULL)
 *  the function cause a :!! segmenttion fault !!.
 * @param len if len < length_needle -> return 0 because can find the complete 
 * "needle" inside "haystack".
 * @return  if "needle" is '\0'returns (char *)haystack, 
 * 			return 0 if "haystack" is '0'.
 */
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned int len);
/*****************************************************************************/
/*                      ALLOCATE NEW MEMORY                                  */
/*****************************************************************************/

void			*ft_calloc(unsigned int count, unsigned int size);
/**
 * @brief ft_strdup() allocates memory for a copy of "s1" and returns the pointer
 *  to the copy.
 * 
 * @param s1 If "s1" doesn't exist the function cause a:
 * !! segmenttion fault ¡¡, if s1 is "", retun a pointer to a empty string.
 * @return a new (char *) pointer containing a copy of "s1". 
 */
char			*ft_strdup(const char *s1);
/**
 * @brief ft_substr(*s,start,len), allocate memory to a pice of the string "s" 
 * that start in the index "start" and end in (start + len).
 * 
 * @param s if "s" doesn't exist (is 0 or NULL)
 *  the function cause a :!! segmenttion fault !!.
 * @param start "start" > length_s o "start" < 0 -> return a empty string "".
 * @param len len <= 0 , return a empty string "".
 * @return char* return a pointer to the first character of the mentioned copy
 */
char			*ft_substr(const char *s, unsigned int start, size_t len);
/**
 * @brief ft_strjoin(*s1,*s2) allocates memory for a new string with length 
 * (length s1 + length s2),and copy the contents of s1 and s2 into it.
 * 
 * @param s1 if "s1" doesn't exist (is 0 or NULL)
 *  the function cause a :!! segmenttion fault !!.
 * @param s2 if "s2" doesn't exist (is 0 or NULL)
 *  the function cause a :!! segmenttion fault !!.
 * @return char* 
 */
char			*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief ft_strtrim(*s1, *set), use ft_substr((char *) s1, init, end + 1) 
 * to allocate memory from a new string that has "s1" minus the
 * content of "set" at the begining and end.
 * 
 * @param s1 The original string. if "s" doesn't exist (is 0 or NULL)
 * allocate memory from a empty new string "" using ft_strdup("").
 * @param set The list of characters to be excluded. We use  
 * while (s1[init] && ft_strchr(set, s1[init]))
 * to locate the last position of s1[i] starting for 0
 * when there is chearacter *set.
 * and
 * while (end > 0 && ft_strchr(set, s1[end]))
 * to locate the last position of s1[end] starting for lenght od s1
 * when there is chearacter *set.
 * @return char* a string that contaings the characters that are in "s1" 
 * but not in "set".
 */
char			*ft_strtrim(char const *s1, char const *set);
/**
 * @brief Allocate memory for a double array, which will contain in 
 * each position a pice of "s".
 * 
 * @param s the string to devide in pices, splited by "c" charater.
 * @param c separating character.
 * @return char** a pointer to the first position of a
 *  double array that contains the pieces of "s". 
 */
char			**ft_split(char const *s, char c);
/**
 * @brief Allocate memory to a string to introduce in it 
 * the conversion of the integer "n" to characters.
 * 
 * @param n the integer to convert to string.
 * @return char* the new string
 */
char			*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of the
 * string ’s’, and passing its index as first argument
 * to create a new string (with malloc(3)) resulting
 * from successive applications of ’f’.
 * 
 * @param s A string. If s == NULL return 0.
 * @param f The function with header: "char ft_name (unsigned int n, char c);"
 * @return char* A new string with the result of passing each character
 * of "s" by "f". 
 */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*****************************************************************************/
/*                     WORKS WITH FILES DESCRIPTORS                          */
/*****************************************************************************/
/**
 * @brief Write a character in the first position of the opened file 
 * descriptor "fd", if we call the function without closing the file descriptor
 * each new character will be written one after the other.
 * 
 * @param c the character to write.
 * @param fd the open file descriptor "int fd = open (arv[1], O_WRONLY);"
 */
void			ft_putchar_fd(char c, int fd);
/**
 * @brief Write a string in the first position of the opened file 
 * descriptor "fd", if we call the function without closing the file descriptor
 * each new string will be written one after the other.
 * 
 * @param *s the string to write.
 * @param fd the open file descriptor "int fd = open (arv[1], O_WRONLY);"
 */
void			ft_putstr_fd(char *s, int fd);
/**
 * @brief Write a string in the first position of the opened file 
 * descriptor "fd" followeb by a newline, 
 * if we call the function without closing the file descriptor
 * each new string will be written line after line.
 * 
 * @param *s the string to write.
 * @param fd the open file descriptor "int fd = open (arv[1], O_WRONLY);"
 */
void			ft_putendl_fd(char *s, int fd);
/**
 * @brief Converts each digit of the integer ’n’ to char so that it 
 * can be writte to the given file descriptor. I pas
 * 
 * @param n The integer.
 * @param fd The file descriptor on which to write.
 */
void			ft_putnbr_fd(int n, int fd);

/*****************************************************************************/
/*                                STRUCT                                     */
/*****************************************************************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
/*****************************************************************************/
/*                   WORKS WITH FUNCTIONS AND LIST                           */
/*****************************************************************************/
/**
 * @brief The function "ft_striteri()" applies the function ’f’ to each 
 * character of the string ’s’ passed as argument, passing its index 
 * as first argument.Each character is passed by address to ’f’ to modify "s"
 *  if "f" has that purpose.
 * 
 * @param s A string. If s == NULL return 0.
 * @param f The function with header: "void ft_name (unsigned int n, char *c);"" 
 */
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
/**
 * @brief The function "ft_lstnew()" allocate memory for a "t_list" object.
 * The member variable ’content’ is initialized with
 * the value of the parameter ’content’. The variable
 * ’next’ is initialized to NULL (new->next = 0;).
 * 
 * @param content could be any type of data.(new->content = content;)
 * @return t_list* new; a pointer to a "ft_list" struct. 
 */
t_list			*ft_lstnew(void *content);
/**
 * @brief The function "ft_lstadd_front()" add a node to he begining of a list
 * t_list *node1 = ft_lstnew(1);
 * t_list *node2 = ft_lstnew(2);
 * ft_lstadd_front(&node1,node2);
 * @param lst A pointer to the content of the first node of a list. 
 * @param new The new node of the list to add
 */
void			ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief Counts the number of nodes in a list.
 * 
 * @param lst The beginning of the list.
 * @return int The length of the list
 */
int				ft_lstsize(t_list *lst);
/**
 * @brief Returns the last node of the list.
 * 
 * @param lst  The beginning of the list.
 * @return t_list* Last node of the list
 */
t_list			*ft_lstlast(t_list *lst);
/**
 * @brief Add a new elemen to the ende of the list but
 * If the content of new is NULL we don't do anything
 * or If(*lst) is NULL -> *lst = new;
 * 
 * @param lst  The address of a pointer to the first link of
a list.
 * @param new  The address of a pointer to the node to be
added to the list.
 */
void			ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief Free a pointer to a list node and the contents to this node.
 * But the node still exists linked by the previos node and pointed to it next.
 * 
 * @param lst A pointer to the node.
 * @param del A function to delete the content of the node.
 */
void			ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @brief Frees the content of all nodes from the given one, 
 * keeping the next pointers. The list maintains the same number of nodes.
 * 
 * @param lst the memory direction to a  pointer to the node.
 * @param del A function to delete the content of the node.
 */
void			ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * @brief Iterates the list ’lst’ and applies the function
 *’f’ on the content of each node.
 * 
 * @param lst The address of a pointer to a node.
 * @param del A function to interact with the content of the node.
 */
void			ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @brief Allocates memory for a new list ,which is going to contain at each node
 *  the result of applying the function ’f’ to each node of lst.
 * 
 * @param lst The list from which the contents is taken.
 * @param f A function that returns a (void *) pointer and recives the contents 
 * of a node
 * @param del The address of the function used to delete
 * the content of a node.
 * @return t_list* a New list. NULL if the allocation fails.
 */
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
