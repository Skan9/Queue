#ifndef __IQUEUE_H
#define __IQUEUE_H	

#include <iostream> 
#include <clocale>
#include <cstdlib>
#include <new>

using namespace std;
template <typename T>
class queue
{
private:
	T*queuePrt;
	int schet;
public:
	queue()
	{
		schet = 1;
		T *queuePrt;
		queuePrt = new T[schet];
	}
	void dob(const T& el)
	{
		T put = el;
		if (queuePrt = NULL)
		{
			queuePrt[0] = put;
		}
		else
		{
			T*nenyjno;
			schet++;
			nenyjno = new T[schet];
			for (int i = 0; i < schet; i++)
			{
				nenyjno[i] = queuePrt[i];
			}
			nenyjno[schet] = put;
			delete[] queuePrt;
			T*queuePrt;
			queuePrt = new  T[schet];
			for (int i = 0; i < schet + 1; i++)
			{
				queuePrt[i] = nenyjno[i];
			}
			delete[] nenyjno;
			cout << "Элемент в очереди";
		}
	}
	
	T take()
	{
		T* nenyjno;
		begin = queuePrt[0];
		nenyjno = new T[schet-1]
			for (int i = 0; i < schet; i++)
		{
			nenyjno[i] = queuePrt[i+1]
		}
		schet--;
		delete[] queuePrt;
		T*queuePrt;
		for (int i = 0; i < schet + 1; i++)
		{
			queuePrt[i] = nenyjno[i];
		}
		delete[] nenyjno;
		cout << "Первый выбыл";
		return begin;
	}

	T get(int i) const
	{
		T nawe;
		int por = i;//порядок
		nawe = queuePrt[por];
		cout << "Найдена очередь: " << nawe;
		return nawe;
	}

	int size() const
	{
		cout <<"Размер очереди: "<< schet;
		return schet;
	}
	
	T dqueue()
	{
		delete[] queuePtr;
	}

};
#endif
