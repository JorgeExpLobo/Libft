/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:52:22 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/19 14:01:49 by jorexpos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dest;
	b = src;
	while (len--)
		*a++ = *b++;
	return (a);
}
