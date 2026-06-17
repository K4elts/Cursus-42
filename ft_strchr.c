/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <alliao@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:14:32 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/27 12:53:24 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*str;

	i = 0;
	cc = (char) c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == cc)
			return (&str[i]);
		i++;
	}
	if (cc == '\0' && str[i] == '\0')
		return (&str[i]);
	return (0);
}
