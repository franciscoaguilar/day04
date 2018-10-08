/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 15:13:27 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/22 21:42:32 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int		result;
	int 	i;

	if (nb == 0)
		return 1;
	else if (nb < 0)
		return 0;

	result = 1;
	i = 0;
	while (i < nb ) 
	{
		result = result * nb;
		nb--;
	}
	return result;
}
