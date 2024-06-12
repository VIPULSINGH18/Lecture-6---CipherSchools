// Using (&&) operator and applying if else condition 



#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	if(a>3.14 && b<a){
		cout<<"Condition is satisfied";
	}
	else{
		cout<<"Condition is not satisfied";
	}
	return 0;	
	}




// Printing Grade of a Student according to marks he get using if else conditional statement



#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter the value of marks:";
	cin>>marks;
	if(marks>90){
		cout<<"Grade is A";
	}
	else if(marks>80){
		cout<<"Grade is B";
	}
	else if(marks>70){
		cout<<"Grade is C";
	}
	else if(marks>60){
		cout<<"Grade is D";
	}
	else if(marks<=60 && marks>=30){
		cout<<"Poor";
	}
	else{
		cout<<"Fail";
	}

}




// Using conditional statement to explore more and practicing basic question



#include<stdio.h>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter the value of a:"
	cin>>a;
	cout<<"Enter the value of b:"
	cin>>b;
	cout<<"Enter the value of c:"
	cin>>c;
	cout<<"Enter the value of d:"
	cin>>d;
	if(a>b && c>d){
		cout<<"Haha";
	}
	else if(a>b && c<d){
		cout<<"Hehe";
	}
	else if(a<b && c<d){
		cout<<"Huhu"
	}	
}
