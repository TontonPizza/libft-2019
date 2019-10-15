/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:57:11 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/07 15:57:11 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** if s is "", should i return an array  containing "" or null ?
*/

#include "libft.h"

char				**ft_split(char const *s, char c)
{
	char		*copy;
	char		**result;
	size_t		i;
	int			k;

	i = 0;
	k = 0;
	if (!(result = malloc(sizeof(char *) * (ft_strlen(s) + 1))))
		return (NULL);
	copy = ft_strdup(s);
	while (i < ft_strlen(s))
	{
		while (copy[i] == c && copy[i])
			copy[i++] = 0;
		result[k++] = copy[i] == c || !copy[i] ? NULL : copy + i;
		while (copy[i] != c && copy[i])
			i++;
	}
	result[k] = NULL;
	return (result);
}
