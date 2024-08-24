#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op,dis;
	
	cout<<"start calc y/n :";
	cin>>dis;

	while(dis == 'y'){
		cout<<"Enter First Num :";
		cin>>num1;
		
		cout<<"enter operation :";
		cin>>op;
		
		cout<<"Enter Second Num :";
		cin>>num2;
		
		switch(op){
		   case '+':
		   cout<<num1+num2<<endl;
		   break;	
		   
		   case '-':
		   cout<<num1-num2<<endl;
		   break;
		   
		    case '*':
		   cout<<num1*num2<<endl;
		   break;
		   
		   case '/':
		   cout<<num1/num2<<endl;
		   break;   
		   
		   case '%':
		   cout<<num1%num2<<endl;
		   break;   
		}
	    cout<<"continue y/n :";
    	cin>>dis;
	}
	
	cout<<"Thanks For Use";
}