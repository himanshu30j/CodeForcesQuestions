#include<iostream>
#include"teacher.cpp"
#include"student.cpp"
#include"TA.cpp"
using namespace std;
int main(){
	TA a(10);
	a.student::print();
	a.print();
}
