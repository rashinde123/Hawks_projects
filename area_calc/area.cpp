#include <iostream>
using namespace std;



int rooms()
{
int rooms, length, width, height, doors, windows, roomarea;

for(int i=1; i>=1; i++)
{
  cout<<"\nWhat is the length of the room? "; cin>>length; cout<<endl; 
  cout<<"\nWhat is the width of the room? "; cin>>width; cout<<endl;
  cout<<"\nWhat is the height of the room? "; cin>>height; cout<<endl;
  
  roomarea = length*width*height;
  cout<<"\nThe area of the room is: "<<roomarea<<" square units."<<endl;
}

double doorarea=20.01;
double windowarea = 12;
double doorwindowarea = (doors*20.01) + (windows*12);
double totalroomarea=rooms++;

double finalarea = totalroomarea - doorwindowarea;

return finalarea;
cout<<"\n\nThe final area is "<<roomarea<<" square units."<<endl;


}

int main() {

cout<<"\n\nRoom Area Calculator"<<endl;

int rooms, length, width, height, doors, windows, roomarea;
cout<<"\nHow many rooms do you want to be painted? "; cin>>rooms; cout<<endl;
cout<<"\nHow many doors are there? "; cin>>doors;
cout<<"How many windows are there? "; cin>>windows;

cout<<"\nWhat is the length of the room? "; cin>>length; cout<<endl; 
  cout<<"\nWhat is the width of the room? "; cin>>width; cout<<endl;
  cout<<"\nWhat is the height of the room? "; cin>>height; cout<<endl;
  
  roomarea = length*width*height;
  cout<<"\nThe area of the room is: "<<roomarea<<" square units."<<endl;

  double wallarea = roomarea/6;
double ceilingarea = roomarea/3; return wallarea; return ceilingarea;

cout<<"\nThe square footage of the walls is "<<wallarea<<" and the square footage of the ceiling is "<<ceilingarea<<"."<<endl;
  




}