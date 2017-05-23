#include <iostream> 
#include <fstream> 
#include <ctime> 
std::string name=" "; 
std::string last=" ";
std::string charsel= " ";
std::string loo="False";
int num=1;
int nums=2;

const time_t ctt = time(0);

int main() {
	std::cout<< "===============================================" << std::endl;
	std::cout<< "             Welcome to Cave Crawler           " << std::endl; 
	std::cout<< "===============================================" << std::endl;
	std::cout<< "Enter first name: ";
	std::cin>>name; 
	std::cout<< "Enter last name: ";
	std::cin>>last;
	std::cout<< "================================================" << std::endl;
	std::cout<< "Hello " << name << " " << last << std::endl; 
	std::ofstream outfile ("save.txt");
	std::string one;
	outfile << "Save data for user " << name << " " << last << ":" << std::endl; 
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
		std::cout<<"Loading descriptions" << std::endl;
		std::cout<<"======" << std::endl;
		std::cout<<"Assassin"<< std::endl;
		std::cout<<"======" << std::endl;
		std::cout<<"Barbarian" << std::endl;
		std::cout<<"======" << std::endl;
		std::cout<<"Sniper" << std::endl;
		std::cout<<"======" << std::endl;
		loo="False"; 
	}
	
	
	
	
	} 
	outfile.close(); 
	
}
