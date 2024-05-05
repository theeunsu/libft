/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:04:01 by eahn              #+#    #+#             */
/*   Updated: 2024/05/06 00:07:00 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *src = "123456123";

// 	printf("return: %s\n", ft_strchr(src, '3'));
// 	printf("return: %s\n", ft_strchr(src, '9'));
// 	printf("return: %s\n", strchr(src, '3'));
// 	printf("return: %s\n", strchr(src, '9'));
// }
