/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-13 12:50:29 by marisald          #+#    #+#             */
/*   Updated: 2024-06-13 12:50:29 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

// Function prototype
void ft_rev_int_tab(int *tab, int size);

// Function implementation
void ft_rev_int_tab(int *tab, int size) 
{
	int temp;
	int i = 0;
	int j = size - 1;

	while (i < j)
{
        // Swap the elements
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
        // Move towards the center
		i++;
	j--;
}
}

/* Main function for testing
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    ft_rev_int_tab(array, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
} */
