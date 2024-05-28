/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslivca <mslivca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:08:44 by mslivca           #+#    #+#             */
/*   Updated: 2024/05/28 15:28:42 by mslivca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL || f == NULL)
        return NULL;

    size_t len = ft_strlen(s);
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return NULL;

    for (size_t i = 0; i < len; i++)
        str[i] = f(i, s[i]);
    str[len] = '\0';

    return str;
}
