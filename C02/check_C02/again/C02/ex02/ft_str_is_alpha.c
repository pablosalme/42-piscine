/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 02:47:57 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/09 14:52:04 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'a' && str[cont] <= 'z')
			|| (str[cont] >= 'A' && str[cont] <= 'Z'))
		{
			cont++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int     main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello123";
    char str3[] = "";
    char str4[] = "world";

    printf("Test 1: \"%s\" -> %d (Expected: 1)\n", str1, ft_str_is_alpha(str1));
    printf("Test 2: \"%s\" -> %d (Expected: 0)\n", str2, ft_str_is_alpha(str2));
    printf("Test 3: \"%s\" -> %d (Expected: 1)\n", str3, ft_str_is_alpha(str3));
    printf("Test 4: \"%s\" -> %d (Expected: 1)\n", str4, ft_str_is_alpha(str4));

    return (0);
}*/
