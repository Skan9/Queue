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
		schet = 0;
		queuePrt = new T[schet];
	}
	void dob(const T& el)
	{
		T put = el;
		if (schet==0)
		{
			schet++;
			queuePrt[0] = put;
		}
		else
		{
			T*nenyjno;
			schet++;
			nenyjno = new T[schet-1];
			nenyjno[schet-1] = put;
			for (int i = 0; i < schet-1 ; i++)
			{
				nenyjno[i] = queuePrt[i];
			}
			queuePrt = new T[schet-1];
			queuePrt = nenyjno;
			cout << "������� � �������" << queuePrt[schet-1] << endl;
			
		}
	}

	T take()
	{
		T* nenyjno;
		begin = queuePrt[0];
		nenyjno = new T[schet - 1]
			for (int i = 1; i < schet; i++)
			{
			nenyjno[i - 1] = queuePrt[i]
			}
		schet--;
		queuePrt = new  T[schet];
		queuePrt = nenyjno;
		cout << "������ �����" << endl;
		return begin;
	}

	T get(int i) const
	{
		
		int por = i;//�������
		 cout << "������� �������: " << queuePrt[por] << endl;
		return por;
	}

	int size() const
	{
		cout << "������ �������: " << schet << endl;
		return schet;
	}

	T dqueue()
	{
		delete[] queuePtr;
	}

};
#endif
