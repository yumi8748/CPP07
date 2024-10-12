#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T				elements[];
		unsigned int	len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		Array &operator=(const Array & src);
		~Array();

		T &operator[](unsigned int index); //

		unsigned int	size();

		class indexoutofbounds: public std::exception //or other way?
		{
			public:
				virtual const char* what() const{
					return (std::cout << "Index is out of bounds!" << std::endl);
				}
		};
};

# include "Array.tpp"

#endif