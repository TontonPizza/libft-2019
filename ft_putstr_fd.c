/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:18:44 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/08 15:18:44 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void			ft_putstr_fd(char *s, int fd)
{
	int		i;
	char	*n;

	i = 0;
	if (s == NULL)
	{
		n = "(null)";
		while (n[i])
		{
			ft_putchar_fd(n[i], fd);
			i++;
		}
		return ;
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
