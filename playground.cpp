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
		act=rand() % 8+1;
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
	if (choice=="R") {
		int win=0;
		int loss=0;
		int total=0; 
		int draw=0;
		int rds=0;
		int rdschoice=0;
		cout<<"How many rounds? ";
		cin>>rdschoice; 
		while (rds!=rdschoice) {
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
			string player; 
			cout<<"Rock, Paper, or Scissors (case sensitive)? "; 
			cin>>player; 
			if (player==ai) { 
				cout<<"AI chose " << ai << endl;
				cout<<"Draw!" <<endl;
				rds+=1;
				draw+=1;
				total+=1;   
			} 
			if (player=="Rock" and ai=="Paper") { 
				cout<<"AI chose " << ai << endl;
				cout<<"You lose!"<<endl;
				rds+=1;
				loss+=1; 
				total+=1;  		
			}
			if (player=="Paper" and ai=="Scissors") { 
				cout<<"AI chose " << ai << endl;
				cout<<"You lose!" <<endl;
				rds+=1;
				loss+=1; 
				total+=1;  		
			}
			if (player=="Scissors" and ai=="Rock") { 
				cout<<"AI chose " << ai << endl;
				cout<<"You lose!" <<endl;
				rds+=1;
				loss+=1;
				total+=1;   		
			}
			if (player=="Rock" and ai=="Scissors") { 
				cout<<"AI chose " << ai << endl;
				cout<<"You win!" <<endl;
				rds+=1;
				win+=1; 
				total+=1;  		
			}
			if (player=="Paper" and ai=="Rock") { 
				cout<<"AI chose " << ai << endl;
				cout<<"You win!" <<endl;
				rds+=1;
				win+=1; 
				total+=1;  		
			}
			if (player=="Scissors" and ai=="Paper") { 
				cout<<"AI chose " << ai << endl;
				cout<<"You win!" <<endl;
				rds+=1;
				win+=1;
				total+=1;   		
			} 
		}
	cout<<"Final stats: " << endl;
	cout<<"You played " << total << " times." <<endl; 
	cout<<"You lost " << loss << " times, won " << win << " times, and drew " << draw << " times";
	loss=0;
	win=0;
	total=0;  
	}
}

