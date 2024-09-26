/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:41:17 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/26 11:26:19 by jorexpos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
