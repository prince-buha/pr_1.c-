/*
1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
enter your feet1 : 4
enter your inch1 : 14
enter your feet2 : 6
enter your inch2 : 17
4Feet14Inch +6Feet31Inch =10Feet31Inch

*/
#include<iosteram>
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

