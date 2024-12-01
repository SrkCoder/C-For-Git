#include<iostream>
using namespace std;
void bubble(int array[],int size){
	for(int step=0;step<size-1;step++){
		for(int i=0;i<size-step-1;i++){
			if(array[i]>array[i+1]){
			
			int temp=array[i];
			array[i]=array[i+1];
			array[i+1]=temp;
		}}
	}
}
int main (){
	int array[]={8,3,1,4,5,2};
	int size=sizeof(array)/sizeof(array[0]);
	bubble(array,size);
	for(int j=0;j<size;j++){
		cout<<array[j]<<endl;
	}
}
