/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:54:13 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/08 04:22:58 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str)
	{
		str++;
		contador++;
	}
	return (contador);
}

/*
int	main()
{
	char	str[] = "Hello";
	char	*ptr;
	ptr = &str[0];
	int	numero = ft_strlen(ptr);
	printf("%d", numero);
	return (0);
}*/
