/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:01:05 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/11 15:04:28 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int len)
{
	unsigned int	i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < len)
	{
		str[i] = '0';
		i++;
	}
}
