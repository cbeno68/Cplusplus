#include <iostream>
#include <ctime>
using namespace std;

void lotteryGen(){
	int num[5];
	srand(time(0));

	for(int i=0; i<5;i++){	
		num[i] = rand()%100; cout << num[i] << ' ';
	}
	return;
}
int main(){
	string select;
	cout << "***** Welcome to the Tool Bag *****\n";
	cout << "***** Please select a tool to use *****\n";
	cout << "** 1.Lottery Number Generator **\n";
	cin >> select;
	if(select == "1"){
	lotteryGen();
	}
	else{
	cout << "Please select a tool.";
	}
	return 0;

}
