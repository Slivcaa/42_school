/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mslivca <mslivca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:13:59 by mslivca           #+#    #+#             */
/*   Updated: 2024/05/28 19:07:08 by mslivca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char x, int fd)
{
	write(fd, &x, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int long	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = i * -1;
	}
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar(i % 10 + '0', fd);
}
