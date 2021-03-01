#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	cout << "Enter the total number of change. (Example 3.45): ";

	int number_dollars;
	cin >>number_dollars;
	
	int number_half_dollars;
	cin >>number_half_dollars;
	
	int number_quarters;
	cin >>number_quarters;
	 
	int number_dimes;
	cin >>number_dimes;
	
	int number_nickles;
	cin >>number_nickles;
	
	int number_pennies;
	cin >>number_pennies;
	
	number_nickles = number_nickles * 5; 
	number_dimes = number_dimes * 10;
	number_quarters = number_quarters * 25;
	number_half_dollars = number_half_dollars * 50;
	number_dollars = number_dollars * 100;
	
	cout <<	"You have "<< number_dollars << " dollars\n";
	cout <<	"You have "<< number_half_dollars << " half dollars\n";
	cout <<	"You have "<< number_quarters << " quarters\n";
	cout <<	"You have "<< number_dimes << " dimes\n";
	cout <<	"You have "<< number_nickles  << " nickles\n";
	cout <<	"You have "<< number_pennies << " pennies\n";

  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	}