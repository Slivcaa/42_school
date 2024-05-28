/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslivca <mslivca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:49:22 by mslivca           #+#    #+#             */
/*   Updated: 2024/05/28 15:27:03 by mslivca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t len = 0;

    while (s1[len] != '\0')
    {
        len++;
    }

    char *dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL)
    {
        return NULL;
    }

    for (size_t i = 0; i <= len; i++)
    {
        dup[i] = s1[i];
    }

    return dup;
}
