/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:26:37 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/19 15:45:58 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srcp;
	char	*destp;

	i = 0;
	srcp = (char *)src;
	destp = (char *)dest;
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*res;

	res = (char *)malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	return (ft_memcpy(res, s + start, len));
}

// int	main(void)
// {
// 	char		str[16] = "This&is^the(str";

// 	puts(ft_substr(str, 3, 0));
// }
