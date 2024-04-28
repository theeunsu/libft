/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:36:16 by eahn              #+#    #+#             */
/*   Updated: 2024/04/28 22:38:43 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if ((*((unsigned char *)s)) == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *a = "123";

// 	printf("%s\n", ft_memchr(a, '2', 4));
// 	printf("%s\n", memchr(a, '2', 4));
// }
