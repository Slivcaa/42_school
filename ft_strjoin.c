/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslivca <mslivca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:04:54 by mslivca           #+#    #+#             */
/*   Updated: 2024/05/28 15:27:57 by mslivca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
    {
        return NULL;
    }

    size_t len_s1 = strlen(s1);
    size_t len_s2 = strlen(s2);
    size_t total_len = len_s1 + len_s2;

    char *result = (char *)malloc(total_len + 1);
    if (result == NULL)
    {
        return NULL;
    }

    memcpy(result, s1, len_s1);
   
    memcpy(result + len_s1, s2, len_s2 + 1);

    return result;
}
