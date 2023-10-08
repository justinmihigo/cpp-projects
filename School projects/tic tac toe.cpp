 #include <iostream>
#include <stdlib.h>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int row,column;
char turn='X';
bool draw= false;
void display(){
	cout<<"Player -1 [X]\t Player -2[0]\n";
	cout<<"\t\t|\t|\n";
	cout<<"\t"<<board[0][0]<<"\t|"<<board[0][1]<<"\t|"<<board[0][2]<<endl;
	cout<<"\t_______\t|______\t|_______\n";
	cout<<"\t\t|\t|\n";
	cout<<"\t"<<board[1][0]<<"\t|"<<board[1][1]<<"\t|"<<board[1][2]<<endl;
	cout<<"\t_______\t|______\t|_______\n";
	cout<<"\t\t|\t|\n";
	cout<<"\t"<<board[2][0]<<"\t|"<<board[2][1]<<"\t|"<<board[2][2]<<endl;
	cout<<"\t\t|\t|\n";
}
void playerturn(){
	if (turn=='X'){
		cout<<"Player-1 [x] turn:\n";
	}
	else if (turn=='O'){
		cout<<"Player-2 [O] turn:\n";
	}
	cin>>choice;
	switch(choice){
		case 1: row=0;column=0; break;
		case 2: row=0;column=1; break;
		case 3: row=0;column=2; break;
		case 4: row=1;column=0; break;
		case 5: row=1;column=1; break;
		case 6: row=1;column=2; break;
		case 7: row=2;column=0; break;
		case 8: row=2;column=1; break;
		case 9: row=2;column=2; break;
		default:
			cout<<"Invalid move played"<<endl;
	}
	if(turn=='X'&& board[row][column]!='X'&& board[row][column]!='O' ){
		board[row][column]='X';
		turn='O';
	}
	else if(turn=='O'&& board[row][column]!='X'&& board[row][column]!='O' ){
		board[row][column]='O';
		turn='X';
	}
	else{
		cout<<"Box is filled  please find another spot"<<endl;
		playerturn();
	}
}
bool gameover(){
	for(int i=0;i<3;i++){
		if(board[i][0]==board[i][1]&& board[i][0]==board[i][2]||board[1][i]==board[0][i] && board[0][i]==board[2][i] ){
			return false;
		}
	}
	if(board[0][0]==board[1][ 1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0]){
	return false;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(board[i][j]!='X' && board[i][j]!='O'){
				return  true;
			}
	}
}
draw=true;
return false;
}
int main(){
	while(gameover()){
	display();
	playerturn();
	gameover();
}
if (turn='X'&& draw == false){
	cout<<"Kudos! Player-1 with X has won the game"<<endl;	
}
else if (turn='O'&& draw == false){
	cout<<"Kudos! Player-2 with O has won the game"<<endl;	
}
else{
	cout<<"draw game"<<endl;
}
	
}
