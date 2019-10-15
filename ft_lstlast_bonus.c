/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:29:52 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/12 15:29:52 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstlast(t_list *list)
{
	t_list	*current;

	current = list;
	while (current->next)
		current = current->next;
	return (current);
}
