/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:31:42 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/13 17:39:17 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src <= dest)
	{
		while (n)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}

// int main(void)
// {   
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;

// 	dest = src + 1;
//     puts(ft_memmove(dest, src, 8));
//     return (0);
// }
