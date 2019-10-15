/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:37:24 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/07 15:37:24 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests ok
*/

#include "libft.h"

static int			is_in(char c, char const *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len_s1;
	int		i;
	int		k;
	int		j;

	k = 0;
	len_s1 = ft_strlen(s1);
	if (!(result = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	i = len_s1 - 1;
	while (i >= 0 && is_in(s1[i], set))
		i--;
	while (is_in(s1[k], set))
		k++;
	j = 0;
	while (j + k < i + 1)
	{
		result[j] = s1[k + j];
		j++;
	}
	result[j] = '\0';
	return (result);
}
