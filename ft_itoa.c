/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:40:22 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/06/05 15:57:32 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_fillstr(char	*src, int n, int len)
{
	long	num;

	num = n;
	src[len] = '\0';
	if (num == 0)
		src[0] = '0';
	if (num < 0)
	{
		src[0] = '-';
		num = -num;
	}
	while (num)
	{
		src[--len] = (num % 10) + '0';
		num = num / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	ft_fillstr(str, n, len);
	return (str);
}
