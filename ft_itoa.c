/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:35:34 by eahn              #+#    #+#             */
/*   Updated: 2024/04/23 12:31:01 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nb_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nb;

	len = get_nb_len(n);
	nb = n;
	result = malloc(len + 1);
	if (!(result))
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';
	result[len--] = '\0';
	while (nb)
	{
		result[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(1));
// 	return (0);
// }
