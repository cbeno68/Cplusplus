#include <iostream>
#include <ctime>
using namespace std;


void mainMenu(){

	const string PLAY;
	const string EXIT;
	int menuSelection;

	cout << " *** FARKLE *** \n";
	cout << " -- 1. PLAY -- \n";
	cout << " -- 0. EXIT -- \n";
	cin >> menuSelection;

	switch(menuSelection){
	case 1:cout << "selection 1\n";
	break;
	
	case 0:cout << "selection 0\n";
	break;
	
	}	

}
void game(){

	const int PLAYER_SCORE = 0 ;
	const int COMP_SCORE = 0 ;
	


}

void d6(){
	int output;
	srand(time(0));

	output = rand()%6;
	
	return;

}
int main(){
	mainMenu();
	return 0;
}
