#include<iostream>
#include<cstdlib>
using namespace std;
void main(){
	cout<<"\tWelcome to GuessNum"<<endl;
	int guess = rand() %20+1;
    int num;
    
    cout<<"Guess Number :";
    cin>>num;
    
    while(num != guess){
    	cout<<"Guess Number :";
        cin>>num;
    }
    
    cout<<"You Win num is"<<guess;
}