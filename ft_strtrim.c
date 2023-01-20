/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:06:51 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/19 19:05:07 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
	size -= 1;
		while (src[i] && (i < size))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}

char	*ft_front(char const *set, int j, char *res)
{
	while (set[++j] != '\0')
	{
		if (*res == set[j])
		{
			j = -1;
			res++;
		}
	}
	return (res);
}

char	*ft_back(char const *set, int j, char *res, int len)
{
	while (set[++j] != '\0')
	{
		if (res[len] == set[j])
		{
			j = -1;
			res[len--] = '\0';
		}
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	char	*res;

	res = (char *)malloc(sizeof(char) * ft_strlen(s1));
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	res = ft_front(set, j = 0, res);
	ft_back(set, 0, res, ft_strlen(res) - 1);
	return (res);
}

// int	main(void)
// {
// 	const char		s1[30] = "unl8ock";
// 	const char		set[30] = "klockun";
// 	puts(ft_strtrim(s1, set));
// }
