/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcano <bcano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:01:31 by bcano             #+#    #+#             */
/*   Updated: 2022/05/31 22:24:24 by bcano            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <iostream>

namespace ft {

	template <class T, class ALlocator = std::allocator<T> >
	class vector {

		public :

			/* MEMBER TYPES*/
			typedef T			value_type;
			typedef Alloc		allocator_type;
			typedef std::size_t	size_type; // Unsigned integer type (usually std::size_t)
			typedef ptrdiff_t	difference_type;// Signed integer type (usually std::ptrdiff_t)
			typedef &T			reference;	// value_type&
			typedef const &T	const_reference	// const value_type&
			// pointer Allocator::pointer	(until C++11)
			// const_pointer    Allocator::const_pointer	(until C++11)
			// iterator     LegacyRandomAccessIterator and LegacyContiguousIterator to value_type   (until C++20)
			// const_iterator   LegacyRandomAccessIterator and LegacyContiguousIterator to const value_type  (until C++20)
			// reverse_iterator     std::reverse_iterator<iterator>
			// const_reverse_iterator	std::reverse_iterator<const_iterator>
			
			/* MEMBER FUNCTIONS*/
				// Iterators
				// Capacity
				// Element access
				// Modifiers
				// Allocators
			/* NON-MEMBER FUNCTION OVERLOADS*/
	};
}


#endif