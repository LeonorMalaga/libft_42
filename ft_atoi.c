/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonmart <leonmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:11:12 by leonmart          #+#    #+#             */
/*   Updated: 2024/04/21 13:52:22 by leonmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ignorespace(char *c)
{
	if (*c == ' ' || *c == '\t' || *c == '\n'
		|| *c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	nsigns;
	int	i;

	i = 0;
	sign = 1;
	nsigns = 0;
	result = 0;
	while (ignorespace(&str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
		nsigns++;
	}
	while (str[i] >= 48 && str[i] <= 57 && nsigns <= 1)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{

	printf("\n --1  --> %d", atoi(" --1"));

	printf("\n -1  --> %d", atoi(" -1"));

	printf("\n -0001  --> %d", atoi(" -0001"));

	printf("\n ++1  --> %d", atoi(" ++1"));

	printf("\n +1  --> %d", atoi(" +1"));

	printf("\n -+1  --> %d", atoi(" -+1"));

	printf("\n 1a  --> %d", atoi("1a"));

	printf("\n a5  --> %d", atoi("a5"));

	printf("\n --ab567  --> %d", atoi(" --ab567"));

	printf("\n ++1234ab  --> %d", atoi("++1234ab"));

	printf("\n ---+--+1234ab567  --> %d", atoi(" ---+--+1234ab567"));

	printf("\n  0 --> %d", atoi("0"));

	printf("\n   --> %d", atoi(""));

	printf("\n \" 12b\"  --> %d", atoi(" 12b"));

	printf("\n \"  12  45 a  1\"  --> %d", atoi("  12  45 a  1"));

	printf("\n ft_atoi --1  --> %d", ft_atoi(" --1"));

	printf("\n ft_atoi -1  --> %d", ft_atoi(" -1"));

	printf("\n ft_atoi -0001  --> %d", ft_atoi(" -0001"));

	printf("\n ft_atoi ++1  --> %d", ft_atoi(" ++1"));

	printf("\n ft_atoi +1  --> %d", ft_atoi(" +1"));

	printf("\n ft_atoi -+1  --> %d", ft_atoi(" -+1"));

	printf("\n ft_atoi 1a  --> %d", ft_atoi("1a"));

	printf("\n ft_atoi a5  --> %d", ft_atoi("a5"));

	printf("\n ft_atoi --ab567  --> %d", ft_atoi(" --ab567"));

	printf("\n ft_atoi ++1234ab  --> %d", ft_atoi("++1234ab"));

	printf("\n ft_atoi ---+--+1234ab567  --> %d", ft_atoi(" ---+--+1234ab567"));

	printf("\n ft_atoi  0 --> %d", ft_atoi("0"));

	printf("\n ft_atoi   --> %d", ft_atoi(""));

	printf("\n ft_atoi \" 12b\"  --> %d", ft_atoi(" 12b"));

	printf("\n ft_atoi \"  12  45 a  1\"  --> %d", ft_atoi("  12  45 a  1"));
	return (0);
}*/
