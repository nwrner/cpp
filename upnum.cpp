#include <cstdlib>
#include <ctime>
#include <iostream> 
using namespace std; 


int main () { 
	string choice; 
	cout<<"================================="<<endl; 
	cout<<"         Party Box v0.1          "<<endl; 
	cout<<"================================="<<endl; 
	cout<<"                made by WarHammer"<<endl; 
	cout<<"================================="<<endl; 
	cout<<endl; 
	cout<<endl; 
	cout<<endl; 
	cout<<"==What would you like to play?=="<<endl;
	cout<<"(N)umber guess: A random number is generated and your goal is to guess it."<<endl;
	cout<<"(R)ock, Paper, Scissors: Classic game of Rock, Paper, Scissors agains the computer."<<endl;
	cout<<"(D)iplomacy Simulator: CLI version of Europe Universalis 4"<<endl;  
	cout<<"I would like to play: "; 
	cin>>choice; 
	/*Beginning of Number Guesser Sequence*/ 
	if (choice=="N") {
		cout<<"=================================="<<endl;
		cout<<"          Number Guesser          "<<endl;
		cout<<"=================================="<<endl; 
		cout<<"                 made by WarHammer"<<endl; 
		cout<<"=================================="<<endl; 
		int total=0; 
		int guess=0;
		srand(time(NULL));
		int act; 
		act=rand() % 9;
		while (guess != act and cin.fail()!=1) {
			cout<<"Enter your guess: "; 
			cin>>guess; 
			cout<<endl;
			total=total+1;
		}
		if (guess==act) {
			cout<<endl; 
			cout<<"Correct!" << endl; 
			cout<<"You guessed " << total << " times!";
			
		} 
		//Fixes the issue where this statement ^ would loop forever. 
		if (cin.fail()==1) { 
			cout<<"INVALID INPUT! Please only enter letters/words."; 
		}
	}
}
