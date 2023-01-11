/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkubik <kkubik@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:14:29 by hbalan            #+#    #+#             */
/*   Updated: 2023/01/11 18:51:32 by kkubik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	char	buff;

	buff = c + '0';
	if (buff >= '0' && buff <= '9')
		return (1);
	return (0);
}

//Without this change function works incorrectly,
//because we are comparing int and 
//char type, which, probably, is not correct.

//If we use previous version without a buff variable,
//and call ft_isdigit(54) -> the result is "1", but should be "0"

//Should we add the same thing to other functions?
//Found the info here: 
//https://www.programiz.com/c-programming/library-function/ctype.h/isdigit
//"Internally, the character is converted to its ASCII value for the check."

//here is main if you want to try :)
// int main(void)
// {
// 	printf("%d", ft_isdigit(54));
// }