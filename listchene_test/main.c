/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgastelu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:53:00 by tgastelu          #+#    #+#             */
/*   Updated: 2024/11/09 22:43:13 by tgastelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
#include<stdlib.h>
#include<stdio.h>

t_list	*ft_listnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	lst = &new;
}

int	main()
{
	int	n = 33;
//	char	c = 'g';	
	int	i = 0;
	t_list	*new;
	t_list	**lst;
	new = ft_listnew(n);
	ft_lstadd_front
		
/*	t_list	*head;
	while (i < 10)
	{
//		if (i % 2 == 0)
//			new = ft_listnew(&c);
//		else
		if (i == 0)
		{
			head = ft_listnew(&n);
			new = head;
		}
		else
		{
			new->next = ft_listnew(&n);
			new = new->next;
		}
		i++;
	}
	new = head;
	while(new->next != NULL)
	{
		printf("%d\n", *(int *)new->content);
		new = new->next;
	}*/
}
