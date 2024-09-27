/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:00:35 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/09 19:00:38 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')) || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    // Declaración de variables para probar la función
    char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+u
    char str2[] = "hello, WORLD! 123foo bar-Baz";
    char str3[] = "already Capitalized TEXT";
    char str4[] = "";

    // Llamada a la función y muestra de resultados
    printf("Original: %s -> Capitalized: %s\n", str1, ft_str_capitalize(str1));
    printf("Original: %s -> Capitalized: %s\n", str2, ft_str_capitalize(str2));
    printf("Original: %s -> Capitalized: %s\n", str3, ft_str_capitalize(str3));
    printf("Original: %s -> Capitalized: %s\n", str4, ft_str_capitalize(str4));

    return 0;
}*/