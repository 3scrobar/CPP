/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:14:33 by tle-saut          #+#    #+#             */
/*   Updated: 2025/10/27 16:26:39 by tle-saut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm> 
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value);

template <typename T>
typename T::const_iterator easyfind(const T &container, int value);

#include "easyfind.tpp"

