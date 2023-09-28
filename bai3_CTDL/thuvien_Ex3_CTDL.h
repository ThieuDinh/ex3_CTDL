#include <iostream>
using namespace std;
const int Max = 100;

typedef struct contiguousList
{
	int n;
	int list[Max];
}CL;

void input(CL &m);
void output(CL m);
int &size(CL &m);
bool isEmpty(CL m);
bool isFull(CL m);
bool kiemTraSoNguyenTo(int n);
int viTrisSoNguyenTo(CL m);

void ghepMang(CL m, CL n, CL &o);
void sapXepTangDan(CL &m);
void sapXepGiamDan(CL &m);
int timKiemNhiPhan(CL m, int x);
int timGiaTriMax(CL m);
int timGiaTriMin(CL m);
void nghichDao(CL &m);
void inputSNT(CL &m);
