/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:58:44 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/12 20:55:42 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Did you know another way how to use size_t type?
#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n);

//Are we allowed to pass array of integers here?
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*pnt;

	i = 0;
	//assigning a type to a void-type pointer
	pnt = (char *)str;
	while (n > i)
	{
		pnt[i] = c;
		i++;
	}
	return (pnt);
}

//Try with "0", whar should we do?

// int main(void)
// {   
//     char str[7] = "This";
//     char *pntr = str;
//     ft_memset(pntr, '^', 0);
//     puts(pntr);

//     char str1[7] = "This";
//     char *pntr1 = str1;
//     memset(pntr1, '^', 0);
//     puts(pntr1);
//     return (0);
// }
