/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:39:09 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/24 16:17:51 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char str)
{
	if ((str >= '0' && str <= '9') || (str >= 'A' && str <= 'Z') || (str >= 'a'
			&& str <= 'z'))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	char test1 = 'a';
	char test2 = '1';
	char test3 = '#';

	printf("Test with 'a': %d\n", ft_isalnum(test1)); // Should print 1
	printf("Test with '1': %d\n", ft_isalnum(test2)); // Should print 1
	printf("Test with '#': %d\n", ft_isalnum(test3)); // Should print 0

	return 0;
}
*/