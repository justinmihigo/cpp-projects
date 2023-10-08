#include <iostream>
using namespace std;
class book{
	private:
		int a, b;
	public:
		void input(){
			cout<<"enter the 2 numbers"<<endl;
			cin>>a>>b;
		}
		void display(){
			cout<<a<<b<<endl;
		}
};
int main(){
	book b1;
	b1.input();
	b1.display();
}
