/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:56:55 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/26 11:57:11 by jorexpos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int				i;
	size_t						dest_len;
	size_t						src_len;
	int							j;

	dest_len = 0;
	src_len = 0;
	i = 0;
	j = 0;
	while (dst[dest_len] != '\0')
		dest_len++;
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	i = dest_len;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dest_len + src_len);
}
