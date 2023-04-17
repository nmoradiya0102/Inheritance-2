#include<iostream>

using namespace std;

class M{
	public:
		int a;
		M(){
			cout<<"Enter value M : ";
			cin>>a;
		}
};
class N : public M{
	public:
		int b;
		N(){
			cout<<"enter value N : ";
	 	    cin>>b;
		}
};
class O :public N{
	public:
		int c;
	 O(){
	 	cout<<"enter value O : ";
	 	cin>>c;
	 	
	 	cout<<endl<<"Sum = "<<a+b+c;
	}
};

int main(){
	O obj;
	
	return 0;
}

