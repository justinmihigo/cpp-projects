#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	float got,gotm;
	float price, mi;
	int select;
	float amount;
	int hours;
	time_t now;
	time(&now);
	char *mt=ctime(&now);
	cout<<"Today is "<<mt<<endl;
	struct tm* mytime= localtime(&now);
	char uffer[80];
	strftime(uffer,sizeof(uffer),"%Y-%m-%d %H:%M:%S",mytime);
	cout<<uffer<<endl;
	int hour=mytime->tm_hour;
	int min=mytime->tm_min;
	int sec=mytime->tm_sec;
	if(hour>=0 && hour<7){
		price=500;
	}
	else if (hour>=7 && hour<14)
	 {
		price=1000;
	}
	else if (hour>=14 && hour<19)
	 {
		price=1500;
	}
	else if (hour>19){
		price=0;
		cout<<"we are closed"<<endl;
	}
		if(price==0){
			goto label;
			} 

		

	cout<<"You took the bike at "<<hour<<":"<<min<<":"<<sec<<endl;
	cout<<"Select one of this selection"<<endl;
	cout<<"1. How much do you got"<<endl;
	cout<<"2. Which time do you expect to use"<<endl;
	cin>>select;
	
	switch (select){
		case 1:
			cout<<"enter the the amount"<<endl;
			cin>>amount;
		
			got=amount/price;
			if (got<1){
				got=got*60;
				cout<<"you got "<<got<<" minutes"<<endl;
				
			}
			else{
			
			cout<<"you have "<< got<< "hours"<<endl;
			cout<<"you have to come back at "<<hour+got<<":"<<min<<":"<<sec<<endl;
			}
			break;
		case 2:
				cout<<"enter time in hours"<<endl;
				cout<<"if it's minutes enter 25 as number of hours"<<endl;
			cin>>hours;
			
			switch (hours){
				case 25:
					cout<<"enter minutes you expect to use"<<endl;
					cin>>mi;
					
						mi=mi/60;
						cout<<"you have to pay "<<mi*price<<endl;
						if(min+mi<60){
						cout<<"you have to come back at "<<hour<<":"<<min+mi<<":"<<sec<<endl;	
						}
						else{
						cout<<"you have to come back at "<<hour+1<<":"<<(min+60-mi)<<":"<<sec<<endl;
						}
						break;
					}
					
					cout<<"you have to come back at "<<hour+hours<<":"<<min<<":"<<sec<<endl;
			break;
		default:
			cout<<"Wrong input"<<endl;
			break;
			label: cout<<"We are sorry we don't work"<<endl;
	}
	
}
