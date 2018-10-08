/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 21:49:30 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/22 22:00:01 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return 1;
	else if (nb < 0)
		return 0;
	else
		return (nb * ft_recursive_power(nb, power-1));
}
