/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 11:08:43 by ssekese           #+#    #+#             */
/*   Updated: 2017/08/10 13:18:45 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s)
{
	int		len;
	int		i;
	int		j;
	char	*final;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	final = ft_strnew(len + 1);
	if (!final)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while (i < len)
		final[j++] = s[i++];
	final[j] = '\0';
	return (final);
}
