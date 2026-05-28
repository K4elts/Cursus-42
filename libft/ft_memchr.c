/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@astudent.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:27:46 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/27 10:38:54 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s;
	unsigned char	cc;

	ptr_s = (unsigned char *) s;
	cc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == cc)
			return (&ptr_s[i]);
		i++;
	}
	return (NULL);
}
