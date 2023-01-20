/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:13:18 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/12 23:06:02 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return ((char *)0);
}

// int main(void)
// {
//     char str[] = "Anna, you get it, you go girl!";
//     char c = '!';
//     puts(ft_strchr(str, c));

//     char str1[] = "Anna, you get it, you go girl!";
//     char c1 = '!';
//     puts(strchr(str1, c1));
// }
