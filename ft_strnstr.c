/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:57:25 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/26 11:41:57 by jorexpos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' || i < len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (((char *)str) + i);
		i++;
	}
	return (0);
}
