
#include <cstdlib>
#include <ctime>
#include <iostream> 
using namespace std; 



int main () {
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
