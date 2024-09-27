/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:54:32 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/09 18:54:35 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    // Declaración de variables para probar la función
    char str1[] = "hello, world!";
    char str2[] = "123abcXYZ";
    char str3[] = "AlreadyUppercase";
    char str4[] = "";

    // Llamada a la función y muestra de resultados
    printf("Original: %s -> Uppercase: %s\n", str1, ft_strupcase(str1));
    printf("Original: %s -> Uppercase: %s\n", str2, ft_strupcase(str2));
    printf("Original: %s -> Uppercase: %s\n", str3, ft_strupcase(str3));
    printf("Original: %s -> Uppercase: %s\n", str4, ft_strupcase(str4));

    return 0;
}*/