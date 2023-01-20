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
#include <string.h>
#include <stdio.h>

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

char	*ft_strchr(const char *str, int c)
{	
	if (c == '\0')
		return ((char *)(str + (ft_strlen(str))));
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
//     char c = '\0';
//     puts(ft_strchr(str, c));

//     char str1[] = "Anna, you get it, you go girl!";
//     char c1 = '\0';
//     puts(strchr(str1, c1));
// }
