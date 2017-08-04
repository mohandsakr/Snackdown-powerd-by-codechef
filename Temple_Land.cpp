//============================================================================
//problem link: https://www.codechef.com/SNCKQL17/problems/TEMPLELA
// Name        : Temple_Land.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use this under your responsibility
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
#include <iostream>
using namespace std;
bool valid(int arr[],int n,int max,int indexofmax){
	int mid=n/2 ;
	if(n%2!=1){
		return false;
	}
	else if(arr[0]!=1&& arr[n-1]!=1){
		return false;
	}
	else if(arr[mid]!=max){
			return false;
		}
	else {
		for(int i=1;i<=mid;i++){
			int rigthvalue=arr[indexofmax+i];
			int leftvalue=arr[indexofmax-i];
			if(rigthvalue!=leftvalue||rigthvalue!=arr[mid]-i)
			{
				return false;
			}
		}
		return true;

	}




	}



int main() {
	int s;
	cin>>s;
	while(s--){
		int n,max=0,indexofmax;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>max){
				max=x;
				indexofmax=i;

			}
			arr[i]=x;
		}
		if(valid(arr,n,max,indexofmax)){
			cout<<"yes"<<"\n";
		}
		else{
			cout<<"no"<<"\n";
		}









	}

	return 0;
}
