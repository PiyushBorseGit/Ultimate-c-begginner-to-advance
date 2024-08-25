#include<iostream>
#include<string>

using namespace std;

int sr[19];
string books[19];
int max_b = sizeof(books)/sizeof(books[0])-1;

int add(){
int n;

cout<<"Enter no. of book :";
cin>>n;

for(int i=0;i<n;i++){
  cout<<"enter name of book :";
  cin>>books[i];  
  sr[i] =i+1;	
 }	
}

//remove function

int remove(){
	
int index;


cout<<"To see index select view"<<endl;

cout<<"Enter index of book :";
cin>>index; 	

for(int i=index;i<max_b;i++){
	books[i-1]= books[i];
}
}

int update(){
	
int index;

cout<<"To see index select view"<<endl;

cout<<"Enter index of book :";
cin>>index; 

cout<<"Enter new value :";
cin>>books[index-1];	
	}

//view function

int view(){
cout<<"Sr num.\t books"<<endl;
int i=0;
while(i<max_b){
	if(sr[i]<=0 and books[i]=="\0"){
		break;
	}
	cout<<sr[i]<<"\t"<<books[i]<<endl;
	i++;
}
}

//main function
int main(){

int choice;

cout<<"\t Welcome to Library"<<endl;

cout<<"Select 1 for Add"<<endl;
cout<<"Select 2 for remove"<<endl;
cout<<"Select 3 for update"<<endl;
cout<<"Select 4 for view"<<endl;


cout <<"Enter Choice :";
cin>>choice;

while(choice <= 4){

if(choice==1){
	add();
}
else if(choice ==2){
 remove();	
}
else if(choice == 3){
 update();	
}
else if(choice == 4){
	view();
}
else{
	cout<<"exiting....";
}


cout <<"Enter Choice :";
cin>>choice;
}
}