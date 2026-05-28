/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:59:32 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/27 10:32:56 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (ptr_dest == NULL && ptr_src == NULL)
		return (0);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (ptr_dest);
}
