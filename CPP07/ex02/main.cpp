/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:28:05 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/11 18:40:21 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array( void ) : _array( NULL ), _size( 0 ) {

    
}

int main( void ) {

    int *a = new int();

    std::cout << *a << std::endl;
}