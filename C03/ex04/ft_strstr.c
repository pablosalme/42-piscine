/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:39:32 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/11 18:39:35 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	cont;
	int	cont2;

	cont = 0;
	cont2 = 0;
	if (to_find[cont2] == '\0')
		return (str);
	while (str[cont] != '\0')
	{
		while (str[cont + cont2] == to_find[cont2] && str[cont2 + cont] != '\0')
		{
			cont2++;
		}
		if (to_find[cont2] == '\0')
			return (str + cont);
		cont++;
		cont2 = 0;
	}
	return NULL;
}
/*
int main() {
    char str1[] = "Hola, mundo!";
    char to_find1[] = "mundo";
    char *resultado;

    // Prueba 1: Subcadena encontrada
    resultado = ft_strstr(str1, to_find1);
    if (resultado) {
        printf("Subcadena encontrada: %s\n", resultado);
    } else {
        printf("Subcadena no encontrada.\n");
    }

    // Prueba 2: Subcadena no encontrada
    char to_find2[] = "adios";
    resultado = ft_strstr(str1, to_find2);
    if (resultado) {
        printf("Subcadena encontrada: %s\n", resultado);
    } else {
        printf("Subcadena no encontrada.\n");
    }

    // Prueba 3: Subcadena vacía
    char to_find3[] = "";
    resultado = ft_strstr(str1, to_find3);
    if (resultado) {
        printf("Subcadena vacía, retorna cadena completa: %s\n", resultado);
    } else {
        printf("Subcadena no encontrada.\n");
    }

    // Prueba 4: Cadena principal vacía
    char str2[] = "";
    char to_find4[] = "algo";
    resultado = ft_strstr(str2, to_find4);
    if (resultado) {
        printf("Subcadena encontrada: %s\n", resultado);
    } else {
        printf("Subcadena no encontrada.\n");
    }

    return 0;
}*/