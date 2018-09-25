/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:42:16 by ssekese           #+#    #+#             */
/*   Updated: 2017/07/21 10:42:37 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] != ch)
			i++;
		else
			return (&s[i]);
	}
	if (s[i] == ch)
		return (&s[i]);
	return (NULL);
}
