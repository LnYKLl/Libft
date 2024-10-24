/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:17:25 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/24 16:19:45 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i < 32 || i > 126)
		return (0);
	return (1);
}
/*
int main (void)
{
	printf("Test du caractère 'A' : %d\n", ft_isprint('A')); // Devrait retourner 1
	printf("Test du caractère '\\n' : %d\n", ft_isprint('\n')); // Devrait retourner 0
	printf("Test du caractère ' ' : %d\n", ft_isprint(' ')); // Devrait retourner 1
	printf("Test du caractère 127 : %d\n", ft_isprint(127)); // Devrait retourner 0
	return 0;
}
*/