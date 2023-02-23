/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:26:56 by mrabat            #+#    #+#             */
/*   Updated: 2023/02/21 12:12:23 by mrabat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	ln_list;

	ln_list = 0;
	while (lst)
	{
		lst = lst->next;
		ln_list ++;
	}
	return (ln_list);
}