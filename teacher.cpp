#include<bits/stdc++.h>
using namespace std;
class teacher{
	public:
		teacher(){
			cout<<"default teacher's constructer"<<endl;
		}
		teacher(int n){
			cout<<"parameter constructor of class teacher"<<endl;
		}
		void print(){
			cout<<"print function in teacher class"<<endl;
		}
		~teacher(){
			cout<<"default deconstructor of class teacher"<<endl;
		}
};
