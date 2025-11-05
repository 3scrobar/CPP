/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:14:30 by tle-saut          #+#    #+#             */
/*   Updated: 2025/10/27 16:22:23 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::out_of_range("easyfind: valeur non trouvée");
	return it;
}

template <typename T>
typename T::const_iterator easyfind(const T &container, int value)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::out_of_range("easyfind: valeur non trouvée");
	return it;
}


