/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:25:13 by eahn              #+#    #+#             */
/*   Updated: 2024/04/28 22:39:20 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*str_ptr;

	str_ptr = b;
	while (len--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (str_ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	size_t n = sizeof(str) - 1; // 널 종료 문자 제외한 길이

// 	int c = '*';

// 	printf("Original string: %s\n", str);
// 	ft_memset(str, c, n);
// 	printf("After ft_memset: %s\n", str);

// 	return (0);
// }
