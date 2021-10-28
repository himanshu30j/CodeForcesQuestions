#include<bits/stdc++.h>
using namespace std;
class car: public virtual vehicle{
	public:
		int numGears;
		car(){
			cout<<"car's default constructer"<<endl;
		}
		~car(){
			cout<<"car's default deconstructer"<<endl;
		}
		void print(){
			cout<<"car"<<endl;
		}
};
