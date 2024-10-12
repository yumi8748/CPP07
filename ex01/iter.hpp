#ifndef INTER_HPP
# define INTER_HPP

# include <iostream>
// #include <cstddef>

template<typename T>
void	inter(const T arr[], size_t len, void (*func)(const T&))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

template<typename T>
void	print(const T &value)
{
	std::cout << value << std::endl;
}

#endif