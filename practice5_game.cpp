#include <iostream>
#include <random>

using namespace std;

char space[9][3] = {
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	 "",
	""};

class surface
{
	public:
	int draw(){
	cout << "  "<<space[0][0] <<"|  "<<space[1][0]<<"|" << space[2][0];
	cout<<endl<<"____";
	cout<<endl;
	
	
	cout << "  "<<space[3][0]<< "|  "<<space[4][0]<<"|" << space[5][0];
	cout<<endl<<"____";
	cout<<endl;
	
	
	cout << "  "<<space[6][0]<<"|  "<<space[7][0] <<"|"<< space[8][0];
	cout<<endl<<"____";
	cout<<endl;
	
	}
};

class playmove{
  public:
  int play;
  
  public:
  int player(){
  	cout<<"Enter Choice :";
  	cin>>play;
  	
  	space[play][0] = 'X';
  }
};

class computer :public playmove{
  int com;
  
  public:
  int commove(){
  	random_device rd;
  	uniform_int_distribution<int> dist(1,9);
  	
  	com=dist(rd);
  	space[com][0] = 'Y';
  	
  	while(com==play){
  		com = dist(rd);
  	}
  }
};

  int main()
{
	int i =0;
	while(i<5){
	surface s;
	playmove p;
	p.player();
	
	
	computer c;
	c.commove();
	
	s.draw();
   i++;
	}
   
}