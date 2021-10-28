#include<bits/stdc++.h>
#include"vehicle.cpp"
#include"car.cpp"
#include"truck.cpp"
#include"bus.cpp"
using namespace std;
int main(){
	bus b;
	b.print();
	b.car::print();
	b.truck::print();
	vehicle*v1 = new vehicle();
	vehicle*v2;
	bus c;
	v2 = &c;
	v2->print();
	
	//v.colors = 10;
	//v.numtyres = 20;
	
	//c.colors = 20;
	//c.numGears = 21;
	//cout<<"car colors:"<<c.colors<<endl;
	//cout<<"vehicle color:"<<v.colors<<endl;
	
}
