/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslivca <mslivca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:21:01 by mslivca           #+#    #+#             */
/*   Updated: 2024/05/28 18:18:12 by mslivca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
