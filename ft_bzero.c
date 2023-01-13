/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:53:24 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/12 21:22:06 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *dst, size_t n);

void	ft_bzero(void *dst, size_t n)
{
	size_t	i;
	char	*pnt;

	i = 0;
	pnt = (char *)dst;
	while (n > i)
	{
		pnt[i] = '\0';
		i++;
	}
}

//I dunno how to check it better

// int main(void)
// {
//     char str[7] = "This";
//     char *pntr = str;
//     ft_bzero(pntr, 8);
//     puts(pntr);
// }
