#include <iostream> 
#include <fstream> 
#include <ctime> 
std::string name=" "; 
std::string charsel= " ";
std::string loo="False";

const time_t ctt = time(0);

int main() {
	std::cout<< "===============================================" << std::endl;
	std::cout<< "             Welcome to management             " << std::endl; 
	std::cout<< "===============================================" << std::endl;
	std::cout<< "Enter name: ";
	std::cin>>name; 
	std::cout<< "Hello " << name << std::endl; 
	std::cout<< "Accessing save file..." << std::endl; 
	std::cout<< "No save file found. Creating..." << std::endl; 
	std::ofstream outfile ("save.txt");
	std::string one;
	outfile << "Save data for user " << name << ":" << std::endl; 
	outfile << "Date created: "<< asctime(localtime(&ctt)); 
	std::cout<< "===============================================" << std::endl;
	std::cout<< "              Entering character creation:     " << std::endl;
	std::cout<< "================================================" << std::endl;
	while (loo!="True") {
	std::cout<< "What kind of character would you like to play as?: "<<std::endl;
	std::cout<< "(A)ssassin, (B)arbarian, or (S)niper? (D)escriptions: ";
	std::cin>>charsel;	
	if (charsel=="A") {
		std::cout<<"Assassin selected.";
		outfile << "Chose assassin";
		loo="True";  	
	}
	if (charsel=="B") {
		std::cout<<"Barbarian selected.";
		outfile << "Chose barbarian";
		loo="True";  	
	}
	if (charsel=="S") {
		std::cout<<"Sniper selected.";
		outfile << "Chose sniper"; 
		loo="True"; 
		
	}
	if (charsel=="D") {
		std::cout<<"Loading descriptions";
		loo="True"; 
	}
	
	
	}
	
	
	 
	 
	outfile.close(); 
	
}
