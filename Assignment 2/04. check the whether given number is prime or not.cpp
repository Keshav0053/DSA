#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,count=0;
	cout<<"enter no.:";
	cin>>n;
	for(i=0;i<n;i++){
		if(n%2==0){
			count++;
		}
	}
			
		if(count==2){
			cout<<n<<" "<<"prime no.";
		}
		else{
			cout<<n<<" "<<"not prime no.";
		}
    }
