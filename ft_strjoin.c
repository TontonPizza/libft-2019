/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:38:58 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/07 15:38:58 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		k;
	char	*result;

	k = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(result = malloc(sizeof(char) * k)))
		return (NULL);
	ft_memcpy(result, s1, ft_strlen(s1));
	ft_memcpy(result + ft_strlen(s1), s2, ft_strlen(s2));
	result[k - 1] = 0;
	return (result);
}
