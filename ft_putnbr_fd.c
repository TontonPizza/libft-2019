/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:33:36 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/08 15:33:36 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static size_t			positive(int n)
{
	return (n > 0 ? (size_t)n : -(size_t)n);
}

void					ft_putnbr_fd(int n, int fd)
{
	long int		p_n;
	int				i;
	char			buffer[15];

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	p_n = positive(n);
	i = 0;
	while (p_n)
	{
		buffer[i] = p_n % 10 + '0';
		p_n = p_n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(buffer[i], fd);
		i--;
	}
}
