/*
	5. WAP which illustrates the use of public and private access modifiers.
	Enter  member of your home N : 9
9 This is Value of Public Data Member of class home .
	*/
	
#include<iostream>
using namespace std;
class home{
	public:
	int n;
	
		int member;
};
int main(){
	home h;
	cout<<"Enter  member of your home N : ";
	cin>>h.member;
	cout<<h.member<<" This is Value of Public Data Member of class home .";
	
	return 0;
}
