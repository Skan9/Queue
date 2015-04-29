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
		schet = 0;
		queuePrt = new T[schet];
	}
	//O(N)
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
			cout << "Ýëåìåíò â î÷åðåäè" << queuePrt[schet-1] << endl;
			
		}
	}
	//O(N)
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
		cout << "Ïåðâûé âûáûë" << endl;
		return begin;
	}
	//O(1)
	T get(int i) const
	{
		
		int por = i;//ïîðÿäîê
		T nawe;//?
		nawe=queuePrt[por];//?
		cout << "Íàéäåíà î÷åðåäü: " << nawe << endl;
		return nawe;
	}
	//O(1)
	int size() const
	{
		cout << "Ðàçìåð î÷åðåäè: " << schet << endl;
		return schet;
	}
	//O(1)
	T dqueue()
	{
		delete[] queuePtr;
	}

};
#endif
