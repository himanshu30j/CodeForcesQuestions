using namespace std;
class vehicle{
	private:
		int maxspeed;
	protected:
		int numtyres;
	public:
		int colors;
		vehicle(){
			cout<<"vehicles default constructer"<<endl;
		}
		~vehicle(){
			cout<<"vehicles default desconstructer"<<endl;
		}
		void print(){
			cout<<"vehicle"<<endl;
		}
};
