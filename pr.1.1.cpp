#include<iostream>
using namespace std;
class Distance{
	public: 
	int feet;
	int inch;
	
};


int main(){
	Distance f[2];
	int fsum;
	int isum;
	int i;
	for(i=1;i<=2;i++){
	
	cout<<"enter your feet"<<i<<" : ";
	cin>>f[i].feet;
	cout<<"enter your inch"<<i<<" : ";
	cin>>f[i].inch;
}
	
	 fsum= f[1].feet+ f[2].feet;
	 isum= f[1].inch + f[2].inch;
	while(isum<=12){
		fsum++;
		isum-12;
	}
	cout<<f[1].feet<<"Feet"<<f[1].inch<<"Inch +";
	cout<<f[2].feet<<"Feet"<<f[2].inch<<"Inch =";
	cout<<fsum<<"Feet"<<isum<<"Inch";
	
	return 0;
	
}

