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
	//O(1)
	queue()
	{
		schet = 1;
		queuePrt = new T[schet];
	}
	//O(N)
	void dob(const T& el)
	{
		T put = el;
		if (schet == 1)
		{
			schet++;
			queuePrt[0] = put;
		}
		else
		{
			T*nenyjno;
			schet++;
			nenyjno = new T[schet - 1];
			nenyjno[schet - 1] = put;
			for (int i = 0; i < schet - 1; i++)
			{
				nenyjno[i] = queuePrt[i];
			}
			queuePrt = nenyjno;
			delete[] nenyjno;

		}
	}
	//O(N)
	T take()
	{
		T* nenyjno;
		int begin;
		begin = queuePrt[0];
		nenyjno = new T[schet - 1]
			for (int i = 1; i < schet; i++)
			{
			nenyjno[i - 1] = queuePrt[i]
			}
		schet--;
		queuePrt = nenyjno;
		delete[] nenyjno;
		return begin;
	}
	//O(1)
	T get(int i) const
	{
		return queuePrt[i];
	}
	//O(1)
	int size() const
	{
		schet--;
		return schet;
	}
	//O(1)
	wqueue()
	{
		delete[] queuePtr;
	}

};
#endif
