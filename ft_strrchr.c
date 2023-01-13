/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:31:59 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/13 17:42:53 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c);
//if you can came up with more elegant solution, feell free to rewrite
//this lovely pece of sh&tty code <3

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

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str) + 1;
	while (len != 0)
	{
		len--;
		if (str[len] == c)
			return ((char *)(str + len));
	}
	return ((char *)0);
}

// int main(void)
// {
//     char str[] = "Y@ou go girl, same but reverced!";
//     char c = '-';
//     puts(ft_strrchr(str, c));

//     char str1[] = "Y@ou go girl, same but reverced!";
//     char c1 = '-';
//     puts(strrchr(str1, c1));
// }
