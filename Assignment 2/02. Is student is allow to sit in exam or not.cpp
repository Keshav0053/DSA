#include<bits/stdc++.h>
using namespace std;
int main(){
	float at,p,a,x=0;
	char n;
	cout<<"Enter the number of total classes held:";
	cin>>a;
	cout<<"Enter the number of classes attended:";
	cin>>at;
	p=at*100/a;
	if(p>=75){
		x=1;
		cout<<"Percentage of classes attended:"<<p<<"%"<<endl;
		cout<<"Student is allowed to sit in exam."<<endl;
	}
	else if(x==0){
		cout<<"Percentage of classes attended:"<<p<<"%"<<endl;
		cout<<"Student has medical cause or not .('Y' or 'N')"<<endl;
		cout<<"Choose the option : ";
		cin>>n;	
		if(n=='Y'){
		cout<<"Student is allowed to sit in exam."<<endl;	
		}		
		else{
		cout<<"Student is not allowed to sit in exam."<<endl;
		}		
	} 
	return 0;
}
