/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:13:50 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/27 11:39:44 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = n;
	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	if (ptr_dest > ptr_src)
	{
		while (i > 0)
		{
			i--;
			ptr_dest[i] = ptr_src[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (ptr_dest);
}
