/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:30:32 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/10 13:30:36 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		counter;
	unsigned int		lengh;

	counter = 0;
	lengh = 0;
	if (size != 0)
	{
		while (counter < size -1 && src[counter] != '\0')
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	while (src[lengh])
	{
		lengh++;
	}
	return (lengh);
}

int main() {
    // Declaramos e inicializamos una cadena de origen
    char src[] = "Hola, mundo!";
    
    // Declaramos un buffer de destino con un tamaño específico
    char dest[6];

    // Utilizamos ft_strlcpy para copiar la cadena de origen al buffer de destino
    unsigned int copied_length = ft_strlcpy(dest, src, sizeof(dest));

    // Imprimimos el contenido del buffer de destino y la longitud de la cadena
    printf("Cadena copiada: %s\n", dest);
    printf("Longitud de la cadena original: %u\n", copied_length);

    return 0;
}