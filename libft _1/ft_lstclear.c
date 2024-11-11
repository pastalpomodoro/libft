/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:14:40 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/11 18:22:55 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp1;

		
	temp = *lst;
	while (temp != NULL)
	{
		del(temp->content);
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
	*lst = temp;
}
