/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 19:07:14 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/22 21:46:18 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	if (nb == 0)
		return 0;
	else if (power == 0)
		return nb;
	else if (nb < 0)
		return 0;
	else
		return nb * ft_iterative_power(nb, power-1);
}
