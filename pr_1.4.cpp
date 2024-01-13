/*
4. WAP to create a class which Read and Print House details along with Room details.
*/

#include<iostream>
#include<string.h>
using namespace std;
class house{
	public:
	int bhk;
	int price;
	char location[20];
	char type[20];
	char societyname[30];


};
int main(){
	house h;
	char utype[20];
	char ulocation[20];
	char usocietyname[30];
	
	cout<<"Enter The Type of House : ";
	gets(utype);
	cout<<"Enter The house  Location  : ";
	gets(ulocation);
	cout<<"Enter The Price of House : ";
	cin>>h.price;
	cout<<"Enter The BHK of House : ";
	cin>>h.bhk;
	cout<<"Enter your society name : ";
	cin>>h.societyname;
	
	
	
	
	strcpy(h.type,utype);
	strcpy(h.location,ulocation);
	strcpy(h.societyname,usocietyname);
	
	cout<<"You are getting "<<h.type<<" At "<<h.location<<" road "<<" For Rupees "<<h.price;
	cout<<" you are getting "<<h.bhk<<" BHK "<<"you are getting "<<h.societyname;
	cout<<" societyName";

	
}
