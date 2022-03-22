#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main() {
cout << "\n\nThis is the Ultimate Guess My Number Game"<<endl;

int choice;

cout<<"\n1. Guess My Number\n2. Guess Your Number - Random\n3. Guess Your Number - Binary Search\n0. Exit"<<endl; cin>>choice;

if(choice==0)
{
  exit(0);
  return 0;
}

if(choice==1)
{
  int num, guess;
  cout<<"\nGuess the computer's number: "<<endl;
  srand(time(0)); num=rand()%100 + 1;
int replay1;
do{
cout<<"Enter a number between 1 and 100: "; cin>>guess; cout<<endl;
if (guess > num){
cout << "Too high!\n\n";}
else if (guess < num){
cout << "Too low!\n\n";}
else
{cout << "\nCorrect! You got it!"<<endl;}
}while(replay1!=0);

}

if(choice==2)
{  cout<<"\n\nWelcome to the guess a number game!"<<endl;
  int num, guess;
  srand(time(NULL));
  num = rand() % 100 + 1; 
  cout<<"\nPick a number from 1 to 100: "<<endl; cin>>guess;
      if(guess>num)
          {cout<<"\nYou are incorrect! The correct number was "<<num<<"!"<<endl;}
      else if (guess < num)
            {cout<<"\nYou are incorrect! The correct number was "<<num<<"!"<<endl;}
      else
        {cout<<"Congratulations! You have picked the correct number! You win!"<<endl;}
}

if(choice==3)
{
   cout << "\n\nComputer guesses your number: "<<endl;
usleep(2000000); int maxVal, minVal=1, guess, choice=0, numtries=0, pow2=1;
cout<<"\nWhat is the maximum value? \n"<<endl; cin>>maxVal;
while(pow2<maxVal)
{
  numtries++;
  pow2*=2;
}
while(choice!=3)
{
  guess = (maxVal+minVal)/2;
  cout<<"\n"<<guess;
  cout<<"\nToo high or too low? 1 = high, 2=low, 3=correct"; cin>>choice;
  guess--;

  if(choice==1)
  {
  maxVal=guess;
  }
  if(choice==2)
  {
    minVal=guess;
  }
  else if(choice==3)
  {
    cout<<"\n\nCorrect!";
  }
}
}





int replay;
do
{
  cout<<"\n1. Guess My Number\n2. Guess Your Number - Random\n3. Guess Your Number - Binary Search\n0. Exit"<<endl; cin>>choice;

if(choice==0)
{
  exit(0); return 0;
}
if(choice==1)
{
  int num, guess;
  cout<<"\nGuess the computer's number: "<<endl;
  srand(time(0)); num=rand()%100 + 1;
cout<<"Enter a number between 1 and 100: "; cin>>guess; cout<<endl;
if (guess > num){
cout << "Too high!\n\n";}
else if (guess < num){
cout << "Too low!\n\n";}
else
{cout << "\nCorrect! You got it!"<<endl;}

}

if(choice==2)
{  cout<<"\n\nWelcome to the guess a number game!"<<endl;
  int num, guess;
  srand(time(NULL));
  num = rand() % 100 + 1; 
  cout<<"\nPick a number from 1 to 100: "<<endl; cin>>guess;
      if(guess>num)
          {cout<<"\nYou are incorrect! The correct number was "<<num<<"!"<<endl;}
      else if (guess < num)
            {cout<<"\nYou are incorrect! The correct number was "<<num<<"!"<<endl;}
      else
        {cout<<"Congratulations! You have picked the correct number! You win!"<<endl;}
}

if(choice==3)
{
   cout << "\n\nComputer guesses your number: "<<endl;
usleep(2000000); int maxVal, minVal=1, guess, choice=0, numtries=0, pow2=1;
cout<<"\nWhat is the maximum value? \n"<<endl; cin>>maxVal;
while(pow2<maxVal)
{
  numtries++;
  pow2*=2;
}
while(choice!=3)
{
  guess = (maxVal+minVal)/2;
  cout<<"\n"<<guess;
  cout<<"\nToo high or too low? 1 = high, 2=low, 3=correct"; cin>>choice;
  guess--;

  if(choice==1)
  {
  maxVal=guess;
  }
  if(choice==2)
  {
    minVal=guess;
  }
  else if(choice==3)
  {
    cout<<"\n\nCorrect!";
  }
}
}
}while(replay!=0);

}