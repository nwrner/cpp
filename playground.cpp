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
	cout<<"(N)umber guess: "<<endl;
	cout<<""<<endl;
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
	}else{ 
		cout<<"No choice detected. Exiting."; 
		return 0; 
	}  
}
