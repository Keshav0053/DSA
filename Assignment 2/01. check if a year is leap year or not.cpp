#include<bits/stdc++.h>
using namespace std;
int main (){
int yr; 
  cin>>yr;
if(yr%400==0 || yr%4==0){
	cout<<yr<<" is leap Year ";
            }	
else {
	cout<<yr<<" is not leap Year ";
        }
		return 0;
}
