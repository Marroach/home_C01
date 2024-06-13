/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-11 11:56:50 by marisald          #+#    #+#             */
/*   Updated: 2024-06-11 11:56:50 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main()
{
	int a;
	int b;
	int x;
	int y;

	a = 10;
	b = 7;
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
}*/