/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:55:23 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/19 19:11:51 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size);

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*mem;
	char	*start;

	mem = (char *)malloc(sizeof(size) * nitems);
	start = mem;
	if (mem == NULL)
		return (NULL);
	while (nitems != 0)
	{
		*mem = 0;
		mem++;
		nitems--;
	}
	return (start);
}

// int main(void)
// {
//     puts(calloc(3, 1));
//     return (0);
// }
