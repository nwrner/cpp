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
		int rounds;
		int count; 
		cout<<"=================================="<<endl;
		cout<<"       Rock, Paper, Scissors      "<<endl;
		cout<<"=================================="<<endl; 
		cout<<"                 made by WarHammer"<<endl; 
		cout<<"=================================="<<endl; 
		cout<<"How many rounds would you like to play?: ";
		cin>>rounds; 
		while (rounds!=count) {
		
		
		
		
		
		
		
		
		
		
		
		
		
		}
		string player; 
		cout<<"Rock, paper, or scissors?: "; 
		cin>>player; 
		srand(time(NULL));
		int a;
		string ai; 
		a=rand() % 9;
		if (a==1 or a==2 or a==3) {
			ai="Rock";
		}
		if (a==4 or a==5 or a==6) { 
			ai="Paper";
		}
		if (a==7 or a==8 or a==9) {
			ai="Scissors";
		}
		cout<<"The AI chose" << " " << ai << endl; 
		if (ai==player) { 
			cout<<"Draw!"; 
		}
		if (ai=="Rock" and player=="Scissors") {
			cout<<"You lose!"; 
		}
		if (ai=="Paper" and player=="Rock") {
			cout<<"You lose!"; 
		}
		if (ai=="Scissors" and player=="Paper") {
			cout<<"You lose!"; 
		}
		if (ai=="Rock" and player=="Paper") {
			cout<<"You win!"; 
		}
		if (ai=="Paper" and player=="Scissors") {
			cout<<"You win!"; 
		}
		if (ai=="Scissors" and player=="Rock") {
			cout<<"You win!"; 
		}
	   }else {
		cout<<"No valid choice detected. Exiting."; 
		return 0; 
	}  
}
