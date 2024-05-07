/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:30:59 by eahn              #+#    #+#             */
/*   Updated: 2024/05/07 14:45:29 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] != '\0'
		&& i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int main (void)
// {
//     char str1[] = "aaaa";
//     char str2[] = "aaaA";
//     char str3[] = "aaAa";
//     char str4[] = "aAaa";

//     printf("test 1 (str1 & str2, n = 3): %d\n", ft_strncmp(str1, str2, 3));
//     printf("test 2 (str1 & str3, n = 3): %d\n", ft_strncmp(str1, str3, 3));
//     printf("test 3 (str1 & str4, n = 3): %d\n", ft_strncmp(str1, str4, 3));
//     printf("test 4 (str1 & str2, n = 2): %d\n", ft_strncmp(str1, str2, 2));
//     printf("test 5 (str1 & str3, n = 2): %d\n", ft_strncmp(str1, str3, 2));
//     printf("test 6 (str1 & str4, n = 2): %d\n", ft_strncmp(str1, str4, 2));
// }
