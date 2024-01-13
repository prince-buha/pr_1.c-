/*
5. WAP which illustrates the use of public and private access modifiers
Enter  Value for N : 4
4 This is Value of Public Data Member of Class home .
*/

#include<iostream>
using namespace std;
class home{
	int n;
	public:
		int n1;
};
int main(){
	home h;
	cout<<"Enter  Value for N : ";
	cin>>h.n1;
	cout<<h.n1<<" This is Value of Public Data Member of Class home .";
	return 0;
}
