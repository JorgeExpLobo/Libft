/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:36:56 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/26 11:19:26 by jorexpos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*a;
	const char	*b;

	a = (const char *)s1;
	b = (const char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*a++ != *b++)
			return (*(--a) - *(--b));
	}
	return (0);
}
