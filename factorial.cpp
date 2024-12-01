#include<iostream>
using namespace std;
int factorial(int num){
  
  		 if(num==0){
  		 	return 1;
		   }
  	else{	
  		return num*factorial(num-1);
}
}
int main(){
	int num;
	cin>>num;
	
	if(num<0){
	}
	else{
	

	cout<<"factorial is "<<factorial(num) ;
	}
}
