class bus:public  car,public  truck{
	public:
		bus(){
			cout<<"default constructor of class bus"<<endl;
		}
		~bus(){
			cout<<"default deconstructor of class bus"<<endl;
		}
		void print(){
			cout<<"bus"<<endl;
		}
};
