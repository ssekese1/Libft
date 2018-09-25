/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 12:16:20 by ssekese           #+#    #+#             */
/*   Updated: 2017/07/21 10:44:22 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if (size == 0)
		return (NULL);
	str = (char *)malloc(sizeof(*str) * (size));
	if (!str)
		return (NULL);
	ft_memset(str, 0, size);
	return ((void*)str);
}
