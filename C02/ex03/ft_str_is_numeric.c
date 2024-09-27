/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:40:37 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/09 14:52:57 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	cont;

	cont = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[cont] != '\0')
	{
		if (str[cont] >= '0' && str[cont] <= '9')
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
    char *test1 = "12345";
    char *test2 = "123a45";
    char *test3 = "";

    printf("Test 1: %s -> %d\n", test1, ft_str_is_numeric(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_numeric(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_numeric(test3));

    return 0;
}*/
