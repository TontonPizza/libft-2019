/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:27:51 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/08 12:27:51 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** test ok
*/

char			*zero(void)
{
	char *result;

	if (!(result = malloc(sizeof(char) * 2)))
		return (NULL);
	result[0] = '0';
	result[1] = 0;
	return (result);
}

static int		power(int a, int b)
{
	int i;
	int result;

	if (b <= 0)
		return (1);
	if (a == 0)
		return (0);
	result = 1;
	i = 0;
	while (i < b)
		result *= a + 0 * (i++);
	return (result);
}

char			*ft_itoa(int n)
{
	char			*result;
	unsigned int	p_n;
	int				i;
	int				sign;
	int				k;

	i = 0;
	k = 0;
	p_n = n > 0 ? (unsigned int)(n) : (unsigned int)(-n);
	sign = n >= 0 ? 0 : 1;
	while (n != 0)
		n = n / 10 + 0 * (i++);
	if (!(result = malloc(sizeof(char) * (i + sign + 1))))
		return (NULL);
	result[0] = sign == 1 ? '-' : '0';
	while (k < i)
	{
		result[k + sign] = '0' + p_n / power(10, i - 1 - k);
		p_n = p_n - (result[k + sign] - '0') * power(10, i - 1 - k);
		k++;
	}
	result[k + sign] = 0;
	return (i == 0 ? zero() : result);
}
