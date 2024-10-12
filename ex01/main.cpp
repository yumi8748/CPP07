# include "iter.hpp"

int	main()
{
	int int_arr[] = {1, 2, 3, 4, 5, 6, 7};
	size_t int_len = sizeof(int_arr) / sizeof(int_arr[0]);
	inter(int_arr, int_len, print<int>);

	std::string str_arr[] = {"42", "CPP07", "ex01", "!"};
	size_t str_len = sizeof(str_arr) / sizeof(str_arr[0]);
	inter(str_arr, str_len, print<std::string>);

	return (0);
}