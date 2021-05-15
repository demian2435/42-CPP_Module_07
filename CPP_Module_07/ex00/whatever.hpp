/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:37:59 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:38:16 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <class T> void swap (T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T> T min (T a, T b) {
    if (a < b)
        return a;
    else
        return b;
}

template <class T> T max (T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}
