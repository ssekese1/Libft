/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 12:46:27 by ssekese           #+#    #+#             */
/*   Updated: 2017/07/21 15:12:36 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (sub != '\0')
		ft_memcpy(sub, s + start, len);
	sub[len] = 0;
	return (sub);
}
