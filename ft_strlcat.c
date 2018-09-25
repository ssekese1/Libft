/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:11:05 by ssekese           #+#    #+#             */
/*   Updated: 2017/07/21 15:39:10 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t slen;
	size_t dlen;

	i = 0;
	slen = ft_strlen(src);
	while (dest[i] && i < size)
		i++;
	if (size - i == 0)
		return (slen + i);
	dlen = i;
	while (src[i - dlen] != '\0' && i < size - 1)
	{
		dest[i] = src[i - dlen];
		i++;
	}
	if (dlen < size)
		dest[i] = '\0';
	return (slen + dlen);
}
