/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:56:18 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 12:56:18 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*str;
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	str = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&str, del);
			return (NULL);
		}
		ft_lstadd_back(&str, new);
		lst = lst->next;
	}
	return (str);
}

// lst nin tum elemanlarina f fonksiyonu uygulanir
// uygulama sonucunda olusan yeni elemanlar ile (25. satir)
// yeni bir liste olusturulur 31. satir
// gerekli durumlarda (lst bittikten sonra) veya f null dondurunce
// yeni olusturulan first degiskeninin icerisi temizlenir 
// ve  delete ile silinir.