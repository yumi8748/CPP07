#include "Function.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Function::Function()
{
}

Function::Function( const Function & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Function::~Function()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Function &				Function::operator=( Function const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Function const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	swap()
{

}

void	min()
{

}

void	max()
{

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */