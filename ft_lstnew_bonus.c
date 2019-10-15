/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:17:42 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/11 14:17:42 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void *content)
{
	t_list		*result;

	if (!(result = malloc(sizeof(t_list))))
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}
