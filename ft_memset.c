/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:59:25 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/11 13:43:36 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	int	*aux;

	i = 0;
	aux = (int *) b;
	while (i < len)
	{
		aux[i] = c;
		i++;
	}
	return (aux);
}
