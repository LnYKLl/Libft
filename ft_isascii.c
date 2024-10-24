/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:07:13 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/24 16:18:55 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	printf("ft_isascii(65): %d\n", ft_isascii(65));
	printf("ft_isascii(128): %d\n", ft_isascii(128));
	printf("ft_isascii(0): %d\n", ft_isascii(0));
	printf("ft_isascii(-1): %d\n", ft_isascii(-1));
}
*/