/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:32:40 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/18 13:05:36 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, unsigned int len)
{
	/*unsigned int	i;
	unsigned int	needlen;

	if (*needle == 0 || haystack == needle)
		return ((char *) haystack);
	needlen = ft_strlen(needle);
	i = needlen;
	while (*haystack && i <= len)
	{
		if (!(ft_strncmp(haystack, needle, needlen)))
			return ((char *) haystack);
		haystack++;
		i++;
	}
	return (0);*/

	if (!needle)
		return ((char *) haystack);
	while (!*haystack)
	{
		haystack++;
		if (!ft_strncmp(haystack, needle, len))
			return((char *) haystack);
	}	
	return (0);
}
