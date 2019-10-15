/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:39:48 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/07 15:39:48 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests ok
** chaines vides
** indice supperieur a strlen s
** len supp > strlen
** len  = 0
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	i = 0;
	if ((start >= ft_strlen(s)) || (s[start] == 0))
	{
		if (!(result = malloc(sizeof(char) * 1)))
			return (NULL);
		result[0] = 0;
		return (result);
	}
	if (!(result = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i + start] && i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = 0;
	return (result);
}
