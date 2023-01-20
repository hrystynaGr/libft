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

static int	ft_count(long int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		num_count;
	char	*str;

	num_count = ft_count(n);
	str = malloc(num_count * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[num_count--] = '\0';
	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[0] = '0';
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[num_count--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

// int	main(void)
// {
// 	puts(ft_itoa(-345));
// }
