#include <iostream>
#include <ctime>
using namespace std;

void lotteryGen(){
	int num[5];
	srand(time(0));
	
	cout << "Your winning numbers are:";
	for(int i=0; i<5;i++){	
		num[i] = rand()%100; 
		cout << num[i] << ' ';
	}
	return;
}
void d20(){
	int output;
	srand(time(0));
	
	output = rand()%20;
	cout << "You have rolled:" << output << "\n";

	return;
}
void d6(){
	int output;
	srand(time(0));
	
	output = rand()%6;
	cout << "You have rolled:" << output << "\n";

	return;
}
int main(){
	int select;
	cout << "***** Welcome to the Tool Bag *****\n";
	cout << "***** Please select a tool to use *****\n";
	cout << "** 1.Lottery Number Generator **\n";
	cout << "** 2.d20 Roll  **\n";	
	cout << "** 3.d6 Roll  **\n";
	cout << "** 99. To Exit the Program **\n";
	cin >> select;

	switch(select){
	
	case 1:
	lotteryGen();
	break;

	case 2:
	d20();
	break;
	
	case 3:
	d6();
	break;

	case 99:
	
	break;

	default:
	cout << "Please make a valid selection.\n";
	cout << "\n";
	main();
	}
	return 0;

}
