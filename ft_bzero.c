/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:09:03 by eahn              #+#    #+#             */
/*   Updated: 2024/04/23 12:29:59 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	size_t n = sizeof(str);

//
// 	printf("Original string: %s\n", str);
// 	ft_bzero(str, n);
// 	printf("After ft_bzero: %s\n", str);

// 	return (0);
// }
