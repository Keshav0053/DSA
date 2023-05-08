#include<bits/stdc++.h>
using namespace std;
int main(){
float at,p,a;
	 cout<<"Enter the number of total classes held:";
	 cin>>a;
	 cout<<"Enter the number of classes attended:";
	 cin>>at;
	p=at*100/a;
if(p>=75){
		cout<<"Percentage of classes attended:"<<p<<"%"<<endl;
		cout<<"Student is allowed to sit in exam."<<endl;
}
else{
		cout<<"Percentage of classes attended:"<<p<<"%"<<endl;
		cout<<"Student is not allowed to sit in exam."<<endl;
}
	return 0;
}
