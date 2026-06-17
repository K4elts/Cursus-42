/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 13:44:16 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/06/02 12:37:56 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	start;
	size_t	end;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = 0;
	while (start < s1_len && ft_memchr(set, s1[start], set_len) != NULL)
		start++;
	end = s1_len - 1;
	while (end >= start && ft_memchr(set, s1[end], set_len) != NULL)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
