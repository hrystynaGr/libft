/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:19:55 by kkubik            #+#    #+#             */
/*   Updated: 2023/01/19 19:11:35 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// void	ft_toupper(unsigned int i, char *sym)
// {		
// 	if ((sym[i] >= 'a' && sym[i] <= 'z'))
// 		sym[i] = sym[i] - 32;
// 	printf("%c\n", sym[i]);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s);
		i++;
	}
}

// int	main(void)
// {
// 	char		s[16] = "TyVoLe!";
// 	ft_striteri (s, ft_toupper);
// 	puts(s);
// }
