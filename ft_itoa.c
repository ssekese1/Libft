/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:37:23 by ssekese           #+#    #+#             */
/*   Updated: 2017/08/10 13:13:14 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_digits(int n)
{
	size_t count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	nbr;

	len = count_digits(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = nbr % 10 + 48;
	while (nbr /= 10)
		str[--len] = nbr % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
