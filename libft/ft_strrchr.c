/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:34:41 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/27 16:55:19 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	*str;
	char	cc;

	slen = ft_strlen(s);
	str = (char *)s;
	cc = (char) c;
	while (slen > 0)
	{
		if (str[slen] == cc)
			return (&str[slen]);
		slen--;
	}
	if (cc == str[slen])
		return (&str[slen]);
	return (0);
}
