#ifndef FUNCTION_HPP
# define FUNCTION_HPP

# include <iostream>
# include <string>
#include <vector>

template <class T>
class Function
{

	public:

		Function();
		Function( Function const & src );
		~Function();

		Function &		operator=( Function const & rhs );

		void	swap();
		void	min();
		void	max();
	private:
		std::vector<T> elems;

};

std::ostream &			operator<<( std::ostream & o, Function const & i );

template <class T>
void	Function<T>::swap()
{

}

#endif /* ******************************************************** FUNCTION_H */