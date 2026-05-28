/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:47:31 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/25 13:03:20 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	int		i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (srclen + size);
	i = 0;
	while (src[i] != '\0' && (dstlen + i) < (size - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
