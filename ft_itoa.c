/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiloul <lkiloul@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:23:44 by lkiloul           #+#    #+#             */
/*   Updated: 2024/10/24 16:20:16 by lkiloul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(long n)
{
	int	count;

	count = 0;
	if (!n)
		return (0);
	if (n == 0)
		return (count);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;
	long	ln;

	j = ft_count(n);
	if (!n)
		return ("0");
	ln = n;
	str = malloc(j + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[j--] = '\0';
	if (ln < 0)
	{
		str[0] = '-';
		ln *= -1;
	}
	while (ln != 0)
	{
		str[j--] = ln % 10 + '0';
		ln /= 10;
	}
	return (str);
}
/*
int main(void)
{
	int nombre = -12345;
	char *chaine = ft_itoa(nombre);
	printf("Le nombre %d converti en chaîne est : %s\n", nombre, chaine);
	free(chaine);
}
*/