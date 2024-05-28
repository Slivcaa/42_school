/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslivca <mslivca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:33:44 by mslivca           #+#    #+#             */
/*   Updated: 2024/05/28 15:20:27 by mslivca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) 
{
    char *str1;
    char *str2;
    size_t i;

    i = 0;
    str1 = (char *)s1;
    str2 = (char *)s2;
    while (i < n) 
    {
        if (str1[i] != str2[i])
            return ((unsigned char)str1[i] - (unsigned char)str2[i]);
        i++;
    }
    return 0;
}
