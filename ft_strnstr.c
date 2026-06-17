/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:02:07 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/27 17:03:52 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bigchar;
	char	*smallchar;

	i = 0;
	bigchar = (char *) big;
	smallchar = (char *) little;
	if (smallchar[0] == '\0')
		return (bigchar);
	while (bigchar[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j < len) && bigchar[i + j] == smallchar[j])
		{
			j++;
			if (smallchar[j] == '\0')
				return (&bigchar[i]);
		}
		i++;
	}
	return (0);
}
