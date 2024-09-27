/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:42:10 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/09 14:55:32 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[cont] != '\0')
	{
		if (str[cont] >= 32 && str[cont] <= 126)
		{
			cont++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
    char *test1 = "Hello, World!";
    char *test2 = "Hello\tWorld";
    char *test3 = "";
    char *test4 = "Printable123!@#";
    char *test5 = "NonPrintable\x01Test";

    printf("Test 1: %s -> %d\n", test1, ft_str_is_printable(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_printable(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_printable(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_printable(test4));
    printf("Test 5: %s -> %d\n", test5, ft_str_is_printable(test5));

    return 0;
}*/
