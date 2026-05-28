/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:42:28 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/28 14:39:26 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (start > len)
		return (0);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i == start)
		{
			while (j < len)
			{
				ptr[j] = s[i];
				j++;
				i++;
			}
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}
