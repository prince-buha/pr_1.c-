/*
3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.
Enter Seconds : 9000

3 : 30 : 0
*/

#include<iostream>
using namespace std;
class Time{
	public:
		int hour;
		int minute;
		int second;
};
int main(){
	Time h;
	cout<<"Enter Seconds : ";
	cin>>h.second;
	if(h.second>60){
		h.minute= h.second/60 + h.minute;  
        h.second %=60;
	}
	if(h.minute>60){
		h.hour=h.minute/60 + h.hour;  
        h.minute %= 60;
	}
	cout<<endl<<h.hour<<" : "<<h.minute<<" : "<<h.second;
	return 0;
}
