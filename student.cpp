#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		student(){
			cout<<"default student's constructer"<<endl;
		}
		student(int n){
			cout<<"parameter constructor of class student"<<endl;
		}
		void print(){
			cout<<"print function in student class"<<endl;
		}
		~student(){
			cout<<"default deconstructor of class student"<<endl;
		}
};
