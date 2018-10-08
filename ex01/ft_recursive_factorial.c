/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:04:59 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/22 21:38:28 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		results;
	
	if (nb == 0)
		return 1;
	else if ( nb < 0)
		return (0);
	else 
		return (nb*ft_recursive_factorial(nb - 1));	 
}
