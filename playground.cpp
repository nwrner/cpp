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
	cout<<""<<endl;  
	cout<<"I would like to play: "; 
	cin>>choice; 
	
	if (choice=="N") {
		cout<<"=================================="<<endl;
		cout<<"          Number Guesser          "<<endl;
		cout<<"=================================="<<endl; 
		cout<<"                 made by WarHammer"<<endl; 
		cout<<"=================================="<<endl; 
		int total=0; 
		int guess=0;
		int act=12;
		while (guess != act) {
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
	}
	
	if (choice=="R") {
		cout<<"=================================="<<endl;
		cout<<"       Rock, Paper, Scissors      "<<endl;
		cout<<"=================================="<<endl; 
		cout<<"                 made by WarHammer"<<endl; 
		cout<<"=================================="<<endl; 
		string ai="Rock"; 
		string player; 
		cout<<"Rock, paper, or scissors?: "; 
		cin>>player; 
		if (player=="Paper") {
			cout<<"AI chose Rock. You win!";
		}
		if (player=="Rock") {
			cout<<"AI chose Rock. Go again."; 
		}
		if (player=="Scissors") {
			cout<<"Ai chose Rock. You lose!"; 
		}
		}else {
			cout<<"No valid choice detected. Exiting."; 
			return 0; 
	}  
}
