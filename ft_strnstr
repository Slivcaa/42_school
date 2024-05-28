/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslivca <mslivca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:46:55 by mslivca           #+#    #+#             */
/*   Updated: 2024/05/28 17:16:55 by mslivca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *needle, size_t len)
{
	size_t	c;

	if (*needle == 0 || h == needle)
		return ((char *)h);
	c = ft_strlen(needle);
	while (*h && c <= len--)
	{
		if (!(ft_strncmp((char *)h, (char *)needle, c)))
			return ((char *)h);
		h++;
	}
	return (NULL);
}
