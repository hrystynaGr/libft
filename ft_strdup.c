/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:02:19 by hbalan            #+#    #+#             */
/*   Updated: 2023/01/20 14:02:27 by hbalan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlength(src);
	dest = malloc(sizeof(*src) * (i + 1));
	if (dest == ((void *)0))
		return (((void *)0));
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*firststr;

	if (argc > 1)
	{
		firststr = argv[1];
		printf("Src one %s  %p \n", firststr, firststr);
		printf("New one %s  %p \n", ft_strdup(argv[1]), ft_strdup(argv[1]));
	}
	return (0);
}*/
