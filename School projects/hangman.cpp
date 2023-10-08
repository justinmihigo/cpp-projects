#include <fstream>
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
vector<string>words={"computer","justin"};
string guessedword="";
string guess;
int lives=6;
string current=words[0+rand()%words.size()];
bool won=false;
while(lives>0){
    cout<<"Enter your guess"<<endl;
   cin>>guess;
   for(int i=0; i<current.length();i++){
       if (guess[i]!=current[i]){
           cout<<"_";
       }
       else{
           cout<<guess[i];
       }
   }
   if(guess==current){
       won=true;
       break;
   }
   else{
       won=false;
       lives--;
       cout<<"\nyou are left with  "<<lives<<" lives"<<endl;
   }
   cout<<endl;
   
}
if(won){
       cout<<"\nYou won"<<endl;
   }
   else if(lives==0){
      cout<<"you lost"<<endl;
   }

    return 0;
}
