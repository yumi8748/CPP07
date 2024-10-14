# include "Array.hpp"

template <typename T>
Array<T>::Array(): len(0), elements(nullptr){}

template <typename T>
Array<T>::Array(unsigned int n): len(n)
{
	elements = new T[n]();
}

template <typename T>
Array<T>::Array(const Array &src): len(src.len)
{
	elements = new T[src.len];
	for (unsigned int i=0;i<len;i++)
		elements[i] = src.elements[i]; //deep copy
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & src)
{
	if (this != &src)
	{
		delete[] elements; // Free existing memory
		len = src.len;
		elements = new T[len];
		for (unsigned int i=0;i<len;i++)
			elements[i] = src.elements[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] elements; // Free allocated memory
}

template <typename T>
T &Array<T>::operator[](unsigned int index){
	if (index >= this->len)
		throw std::out_of_range("Index is out of bounds!");
	return (this->elements[index]);
}

template <typename T>
unsigned int Array<T>::size(){
	return (len);
}
