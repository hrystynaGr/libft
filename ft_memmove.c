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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srcp;
	char	*destp;
	char	temp;

	i = 0;
	srcp = (char *)src;
	destp = (char *)dest;
	while (i < n)
	{
		temp = srcp[i];
		destp[i] = temp;
		i++;
	}
	return (dest);
}

// int main(void)
// {   
//     // char str[7] = "This";
//     // char *strp = &str[3];
//     // char *destp = &str[1];
//     puts(ft_memmove(NULL, NULL, 2));
//     // char str1[7] = "This";
//     // char *strp1 = &str1[3];
//     // // char *destp1 = &str1[1];
//     // puts(ft_memmove(NULL, strp1, 2));
//     // return (0);
// }
