/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:11:05 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/24 16:19:20 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	printf("Test du chiffre 5: %d\n", ft_isdigit('5'));
	printf("Test de la lettre A: %d\n", ft_isdigit('A'));
	printf("Test du chiffre 0: %d\n", ft_isdigit('0'));
	printf("Test du chiffre 9: %d\n", ft_isdigit('9'));
	printf("Test du symbole &: %d\n", ft_isdigit('&'));
}
*/