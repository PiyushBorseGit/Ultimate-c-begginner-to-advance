#include<iostream>
using namespace std;

float balance(double bal){
	return bal;
}

float deposit(double b,double d){
return b+d;	
}
float withdraw(double b, double w){
	return b-w;
}
int main(){
	float b,d,withdrawal;
	int op;

cout<<"\t Welcome OursBanks "<<endl;
cout<<"User : Piyush J. Borse"<<endl;
cout<<"Account No. : 123xxxxx37"<<endl;


cout<<"Select operation By no."<<endl;
cout<<"1. Balance Check"<<endl;
cout<<"2. Deposit"<<endl;
cout<<"3. Withdrawal"<<endl;
cout<<"4. Exit"<<endl;

cout<<"Enter Your Choice :";
cin>>op;

while(op != 4){
if(op == 1){
	cout<<balance(b)<<endl;
}
else if(op == 2){
	cout<<"Enter Amount to deposit :";
	cin>>d;
	b = deposit(b,d);
}
else if(op == 3){
	cout<<"Enter Amount To withdraw";
	cin>>withdrawal;
	b = withdraw(b,withdrawal);
}
else{
	cout<<"Invalid Value"<<endl;
}

cout<<"Enter Your Choice :";
cin>>op;
}
cout<<"Thanks to use";
}
