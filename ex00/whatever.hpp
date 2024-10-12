#ifndef FUNCTION_HPP
# define FUNCTION_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

/*
Passing the parameters as "T const &a" instead of "T a" is better
because the program does not create a copy of "a" so is more efficient.
 */

template <typename T>
T	const &min(T const &a, T const &b)
{
	return (a > b ? b:a);
}

template <typename T>
T	const &max(T const &a, T const &b)
{
	return (a < b ? b:a);
}

#endif