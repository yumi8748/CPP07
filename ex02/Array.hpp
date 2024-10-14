#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T				*elements;
		unsigned int	len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		Array &operator=(const Array & src);
		~Array();

		T &operator[](unsigned int index); //

		unsigned int	size();
};

# include "Array.tpp"

#endif