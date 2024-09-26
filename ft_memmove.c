/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:38:02 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/19 10:53:55 by jorexpos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dest;
	b = src;
	if (a < b)
	{
		while (len--)
			*a++ = *b++;
	}
	else
	{
		while (len--)
			a[len] = b[len];
	}
	return (a);
}
