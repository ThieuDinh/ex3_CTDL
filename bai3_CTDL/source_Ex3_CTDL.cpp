#include "thuvien_Ex3_CTDL.h"

void input(CL &m)
{
	cout << "Nhap so phan tu ";
	cin >> size(m);
	for (int i = 0; i < size(m); i++)
	{
		cout << "\nNhap phan tu thu [" << i << "] ";
		cin >> m.list[i];
	}
}
void output(CL m)
{
	cout << "\nList" << endl;
	for (int i = 0; i < size(m); i++)
	{
		cout <<  m.list[i] << "\t";
	}
}
int &size(CL &m)
{
	return m.n;
}

bool isEmpty(CL m)
{
	return size(m) == 0;
}
bool isFull(CL m)
{
	return size(m) >= Max;
}
bool kiemTraSoNguyenTo(int n)
{
	int count = 0;
	if (n <= 1)
		return false;
	for (int i = 1; i <= n; i++)
		if (n%i == 0)
			count++;
	if (count == 2)
		return true;
	else
		return false;
}
int viTrisSoNguyenTo(CL m)
{
	for (int i = 0; i < size(m); i++)
		if (kiemTraSoNguyenTo(m.list[i]))
			cout << i << " ";
	return 1;
}
bool kiemTraAThuocB(CL m, CL n)
{
	if (size(m) > size(n))
		return false;
	for (int i = 0; i < size(m); i++)
		;
}

//Phan 3
void ghepMang(CL m, CL n,CL &o)
{
	for (int i = 0; i < size(m); i++)
		o.list[i] = m.list[i];
	for (int i = 0; i < size(n); i++)
		o.list[i + size(n)] = n.list[i];
}

void sapXepTangDan(CL &m)
{
	for (int i = 0; i < size(m) - 1; i++)
		for (int j = size(m) - 1; j > i; j--)
			if (m.list[i] > m.list[j])
				swap(m.list[i], m.list[j]);
}

void sapXepGiamDan(CL &m)
{
	for (int i = 0; i < size(m) - 1; i++)
		for (int j = size(m) - 1; j > i; j--)
			if (m.list[i] < m.list[j])
				swap(m.list[i], m.list[j]);
}
int timKiemNhiPhan(CL m, int x)
{
	int left = 0;
	int right = size(m) - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (m.list[mid] == x)
			return mid;
		else if (m.list[mid] > x)
			right = mid - 1;
		else
			left = mid + 1;
	}
}

int timGiaTriMax(CL m)
{
	int max = m.list[0];
	for (int i = 1; i < size(m); i++)
		if (m.list[i] > m.list[max])
			max = i;
	return m.list[max];
}

int timGiaTriMin(CL m)
{
	int min = m.list[0];
	for (int i = 1; i < size(m); i++)
		if (m.list[i] < m.list[min])
			min = i;
	return m.list[min];
}

void nghichDao(CL &m)
{
	for (int i = 0; i < size(m) / 2; i++)
		swap(m.list[i], m.list[size(m) - 1 - i]);
}

void inputSNT(CL &m)
{
	cout << "Nhap so phan tu ";
	cin >> size(m);
	for (int i = 0; i < size(m); i++)
	{
		cout << "\nNhap phan tu thu [" << i << "] ";
		cin >> m.list[i];
		while (kiemTraSoNguyenTo(m.list[i]) == false)
		{
			cout << "Nhap lai mot so nguyen to ";
			cin >> m.list[i];
		}
	}
}