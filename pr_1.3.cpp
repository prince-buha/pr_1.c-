/*
3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.
 Enter your Seconds :- 7000
 
output:-
2 : 56 : 40

*/

#include<iostream>

using namespace std;

class watch{
	public :
		int hour;
		int minute;
		int second;
};
int main(){
	watch w;
	cout<<" Enter your Seconds :- ";
	cin>>w.second;
	if(w.second>60){
		w.minute= w.second/60 + w.minute;  
		w.second %= 60;
        
	}
	if(w.minute>60){
		w.hour=w.minute/60 + w.hour; 
		w.minute %= 60; 
        
	}
	
	cout<<endl<<w.hour<<" : "<<w.minute<<" : "<<w.second;
	
return 0;
}
