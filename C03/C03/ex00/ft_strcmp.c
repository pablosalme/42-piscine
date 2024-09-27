/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:48:58 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/10 15:49:02 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] || s2[cont])
	{
		if (s1[cont] != s2[cont])
			return (s1[cont] - s2[cont]);
		cont++;
	}
	return (0);
}
/*
int main()
{
    char str1[] = "ABJ";
    char str2[] = "ABC";
    
    printf("Comparando '%s' y '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
    
    return 0;
}*/