/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:51:30 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/09 14:54:03 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
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
    char *test1 = "abcdef";
    char *test2 = "abcDef";
    char *test3 = "";
    char *test4 = "abcdefghijklmnopqrstuvwxyz";
    char *test5 = "a123bcd";

    printf("Test 1: %s -> %d\n", test1, ft_str_is_lowercase(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_lowercase(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_lowercase(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_lowercase(test4));
    printf("Test 5: %s -> %d\n", test5, ft_str_is_lowercase(test5));

    return 0;
}*/
