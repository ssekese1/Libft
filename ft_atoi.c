/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssekese <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 09:28:23 by ssekese           #+#    #+#             */
/*   Updated: 2017/07/21 10:40:22 by ssekese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int sign;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	if (*str == '-')
	{
		sign = -1;
	}
	else
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		i = (i * 10) + (*str++ - '0');
	}
	return (i * sign);
}
