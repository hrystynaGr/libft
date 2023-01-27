/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:04:10 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/19 19:10:59 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_count(int num)
{
	int	count;

	count = 0;
	if (num <= 0)
	{
		count = 1;
	}
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int			num_count;
	char				*str;
	unsigned int		number;

	num_count = ft_count(n);
	str = (char *)malloc(sizeof(char) * (num_count + 1));
	if (!str)
		return (NULL);
	str[num_count--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		number = n * -1;
	}
	else
		number = n;
	while (number > 0)
	{
		str[num_count--] = number % 10 + '0';
		number = number / 10;
	}
	return (str);
}

// int	main(void)
// {
// 	puts(ft_itoa(-345));
// }
