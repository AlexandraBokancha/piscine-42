/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:46:29 by albokanc          #+#    #+#             */
/*   Updated: 2023/08/18 22:58:19 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact_nb;

	fact_nb = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (fact_nb != 0)
	{
		nb *= fact_nb;
		--fact_nb;
	}
	return (nb);
}
/* 
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("%d", ft_iterative_factorial(atoi(argv[1])));
}  */