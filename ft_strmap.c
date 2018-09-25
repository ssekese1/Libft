/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 11:35:33 by ssekese           #+#    #+#             */
/*   Updated: 2017/08/10 14:44:32 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
{
	char	*str;
	int		i;
	int		len;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	len = ft_strlen(s);
	if (!(str = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
