/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:53:05 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/19 19:11:17 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

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

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (n || n == 0)
		write(fd, str, ft_strlen(str));
}
