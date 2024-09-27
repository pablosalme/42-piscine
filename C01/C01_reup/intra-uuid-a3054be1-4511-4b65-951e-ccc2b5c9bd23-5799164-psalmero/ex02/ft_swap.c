/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 03:56:58 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/07 04:20:10 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/
void	ft_swap(int *a, int *b)
{
	int	save;

	save = *a;
	*a = *b;
	*b = save;
}
/*
// Función para convertir un entero a una cadena y escribirlo usando write
void ft_putnbr(int nb) {
    char c;
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}

int main() {
    int x;
    int y;

    x = 10;
    y = 20;

    ft_swap(&x, &y);

    ft_putnbr(x);
    write(1, "\n", 1); // Para imprimir una nueva línea
    ft_putnbr(y);
    write(1, "\n", 1); // Para imprimir una nueva línea

    return (0);
}*/
