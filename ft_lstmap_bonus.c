/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:25:31 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/10/14 11:25:31 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *first_elem;
	t_list *src;

	if (!(first_elem = malloc(sizeof(t_list))) || !lst)
		return (NULL);
	src = lst;
	first_elem->content = f(lst->content);
	while (src + 1)
	{
		ft_lstadd_back(&first_elem, ft_lstnew(f((src + 1)->content)));
		src++;
	}
	return (first_elem);
}
