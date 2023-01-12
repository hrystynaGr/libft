/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:31:42 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/12 21:59:13 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, size_t n);

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*srcp;
	char	*destp;
	char	*temp;

	i = 0;
	srcp = (char *)src;
	destp = (char *)dest;
	//I do not know how to do this without malloc
	temp = (char *)malloc(sizeof(char) * n);
	while (i < n)
	{
		temp[i] = srcp[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destp[i] = temp[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {   
//     char str[7] = "This";
//     char *strp = &str[2];
//     char *destp = &str[1];
//     ft_memmove(destp, strp, 2);
//     puts(destp);

//     char str1[7] = "This";
//     char *strp1 = &str1[2];
//     char *destp1 = &str[1];
//     memmove(destp1, strp1, 2);
//     puts(destp1);
//     return (0);
// }
