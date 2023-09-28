#ifndef LIST_H
#define LIST_H

const int MAX_SIZE = 100;

template<typename T>
class List
{
public:
	List();
	~List();
	void insert(T item);
	void remove(T item);
	void print();
	bool isEmpty();
	bool isFull();
	int getLength();
	T getEntry(int index);
	void setEntry(int index, T item);
	void clear();

private:
	T data[MAX_SIZE];
	int length;
};

#endif // !LIST_H

template<typename T>
inline List<T>::List()
{
	length = 0;
}

template<typename T>
inline List<T>::~List()
{
	clear();
}

template<typename T>
inline void List<T>::insert(T item)
{
}

template<typename T>
inline void List<T>::remove(T item)
{
}

template<typename T>
inline void List<T>::print()
{
}

template<typename T>
inline bool List<T>::isEmpty()
{
	return false;
}

template<typename T>
inline bool List<T>::isFull()
{
	return false;
}

template<typename T>
inline int List<T>::getLength()
{
	return 0;
}

template<typename T>
inline T List<T>::getEntry(int index)
{
	return T();
}

template<typename T>
inline void List<T>::setEntry(int index, T item)
{
}

template<typename T>
inline void List<T>::clear()
{
}
