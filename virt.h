#pragma once
template <class T> class Iqueue {
public:
	// �������� �������
	virtual void add(const T& elem) = 0;
	// ������� �������
	virtual void remove(const T& elem) = 0;
	// ���������� �� �������
	virtual bool contains(const T& elem) const = 0;
	// ������ ����� ���������
	virtual int size() const = 0;
};