/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorexpos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:53:22 by jorexpos          #+#    #+#             */
/*   Updated: 2024/09/26 11:47:38 by jorexpos         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;
	int			i;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			pos = s;
		s++;
	}
	return ((char *)pos);
}
