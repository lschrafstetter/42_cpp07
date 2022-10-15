/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:09:40 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/15 11:01:02 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T &min(T &a, T &b) {
	return (a >= b ? b : a);
}

template<typename T>
T &max(T &a, T &b) {
	return (a <= b ? b : a);
}
