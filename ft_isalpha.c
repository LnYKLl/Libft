/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:03:09 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/24 16:18:19 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	char test1 = 'A';
	char test2 = '1';
	char test3 = 'z';

	printf("Is '%c' an alphabetic character? %d\n", test1, ft_isalpha(test1));
	printf("Is '%c' an alphabetic character? %d\n", test2, ft_isalpha(test2));
	printf("Is '%c' an alphabetic character? %d\n", test3, ft_isalpha(test3));

	return 0;
}
*/