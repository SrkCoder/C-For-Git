#include<iostream>
using namespace std;
class Student{
	private:
		int roll_no;
		string name;
	public:
	   setName(string Name){
	   	name=Name;
	   }
	   setRoll(int rollNo){
	   	roll_no=rollNo;
	   	
	   }
	   string getName(){
	   	return name;
	   }	
	   int getRollNo(){
	   	return roll_no;
	   }
	   int i=0;
	   
	   void Insert(Student std[]){
	   	int roll;
	   	cout<<"\t\t\tenter roll no"<<endl;
	   	cin>>roll;
	   	string name;
	   	cout<<"\t\t\tenter student name"<<endl;
	   	cin.ignore();
	   	getline(cin,name);
	   	std[i].setName(name);
	   	std[i].setRoll(roll);
	   	
	   	i++;
	   }
	   
	   void Display(Student std[]){
	   	if(i==0){
	   		cout<<"\t\t\tNo Record found!"<<endl;
	   		return;
		   }
		   cout<<"\t\t\t**** ALL RECORDS ****"<<endl;
	   	for(int j=0;j<i;j++){
	   		cout<<"\t\t\t"<<j+1<<": student RollNO is :"<<std[j].getRollNo()<<endl;
		    
			   cout<<"\t\t\tstudent name is :"<<std[j].getName()<<endl;
	   		cout<<"\t\t\t*********************"<<endl;
		   }
	   }
	   
	   void search(int key,Student std[]){
	   	 for(int j=0;j<i;j++){
	   	 	if(std[j].roll_no == key){
	   	 		cout<<"\t\t\t: student RollNO is :"<<std[j].getRollNo()<<endl;
		    
			   cout<<"\t\t\tstudent name is :"<<std[j].getName()<<endl;
	   		
				}
			}
	   }			
};
int main(){
	Student std[100];
	Student obj;
	start:
	int choice;
	cout<<"\t\t\t******STUDENTS MANAGEMENT SYSTEM******"<<endl;
	cout<<"\t\t\t 1 to insert student data"<<endl;
	cout<<"\t\t\t 2 to display student data"<<endl;
	cout<<"\t\t\t 3 to Search student"<<endl;
	
	cout<<"Enter Choice"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			obj.Insert(std);
			
			goto start;
		case 2:
				obj.Display(std);
				goto start;
		case 3:
			int key;
			cout<<"Enter student rollno"<<endl;
			cin>>key;
		      obj.search(key,std);
			  goto start;		
		default:
		cout<<"\t\t\tExiting..........."<<endl;							
	}
	
return 0;
}
