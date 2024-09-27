/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:59:41 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/09 14:54:50 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	cont;

	cont = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
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
    char *test1 = "ABCDEF";
    char *test2 = "ABCdEF";
    char *test3 = "";
    char *test4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *test5 = "A123BCD";

    printf("Test 1: %s -> %d\n", test1, ft_str_is_uppercase(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_uppercase(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_uppercase(test4));
    printf("Test 5: %s -> %d\n", test5, ft_str_is_uppercase(test5));

    return 0;
}*/
