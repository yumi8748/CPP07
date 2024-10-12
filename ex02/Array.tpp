# include "Array.hpp"

template <typename T>
Array<T>::Array(){}

template <typename T>
Array<T>::Array(unsigned int n): len(n)
{
	elements = new T[n];
}

template <typename T>
Array<T>::Array(const Array &src): len(src.len)
{
	elements = new T[other.len];
	for (unsigned int i=0;i<len;i++)
		elements[i] = other.elements[i]; //deep copy
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & src)
{
	if (this != &src)
	{
		//
	}
}

template <typename T>
Array<T>::~Array()
{
	// delete
}

template <typename T>
T &Array<T>::operator[](unsigned int index){
	if (index > this->len)
		throw(Array::indexoutofbounds());
	return (this->elements[index]);
}

template <typename T>
unsigned int Array<T>::size(){
	return (len);
}

// template <typename T>
// Array<T>::Array(){}

// template <typename T>
// Array<T>::Array(){}