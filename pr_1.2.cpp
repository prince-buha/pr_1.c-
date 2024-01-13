/*
2. WAP to create a class to read and add two times.
Enter Hour for 0 :- 1
Enter Minute for 0 :- 60
Enter Second for 0 :- 90
Enter Hour for 1 :- 1
Enter Minute for 1 :- 70
Enter Second for 1 :- 80
1 Hour 60 Minute 90 Second + 1 Hour 70 Minute 80 Second = 3 Hour 71 Minute 110 Second
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
		Time t[2];
		int i;
		int secondsum;
		int minutesum;
		int hoursum;
		for(i=0;i<=1;i++){
			cout<<"Enter Hour for "<<i<<" :- ";
			cin>>t[i].hour;
			cout<<"Enter Minute for "<<i<<" :- ";
			cin>>t[i].minute;
			cout<<"Enter Second for "<<i<<" :- ";
			cin>>t[i].second;
		}
		
		 secondsum = t[0].second+t[1].second;
		 minutesum = t[0].minute+t[1].minute;
		 hoursum = t[0].hour+t[1].hour;
		if (secondsum>=60) {
    		minutesum+=1;  
    		secondsum-=60;
		}
		if (minutesum>=60) {
    		hoursum+=1; 
    		minutesum-=60;
		}
		cout<<t[0].hour<<" Hour "<<t[0].minute<<" Minute "<<t[0].second<<" Second";
		cout<<" + "<<t[1].hour<<" Hour "<<t[1].minute<<" Minute "<<t[1].second<<" Second";
		cout<<" = "<<hoursum<<" Hour "<<minutesum<<" Minute "<<secondsum<<" Second ";
	}
