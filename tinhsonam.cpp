#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ 
	float sotiengui,sotienmuon,laisuat;
 	int nam;
	cout<<"Nhap so tien ban gui : ";
	cin>>sotiengui;
	cout<<"Nhap so tien ban muon : "; 
	cin>>sotienmuon;
	cout<<"Nhap lai suat nam : "; 
	cin>>laisuat;
	for (laisuat=0.01*laisuat,nam=0;sotiengui<sotienmuon;sotiengui+=sotiengui*laisuat,nam++);
	cout<<"So nam can gui tiet kiem la :"<<nam<<"\n";
	getchar();
	return 0;
}