using namespace std;
class TA:public teacher,public student{
    public:
	TA(){
		cout<<"default TA's constructer"<<endl;
	}
	TA(int n):student(n),teacher(n){
		cout<<"parameter constructor of class TA"<<endl;
	}
	void print(){
		cout<<"print function in TA class"<<endl;
	}
	~TA(){
		cout<<"default deconstructor of class TA"<<endl;
	}
};
