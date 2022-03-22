
#include <iostream>
#include <cmath>
#include <cstdlib> 
#include<numeric>
using namespace std;

int main() {

  cout<<"Science Formulas Calculator + Optional Quiz";
  cout<<endl;
  cout<<endl;
  cout<<endl;


string choice;
cout<<"Disclaimer: If what you type does not provoke a response, then it is not embedded into this program."<<endl; cout<<"\n";

  cout<<"What are you looking to find? Write in all caps or all lowercase: "<<endl; getline(cin,choice); cout<<"\n\n";

if(choice=="matrix" || choice=="MATRIX"){
  int matrixoperation;
  cout<<"\n1 to add, 2, to subtract, 3 to multiply"<<endl;cin>>matrixoperation;
  if(matrixoperation==1)
  {
  float a,a1,a2,b,b1,b2,c,c1,c2;
  float x,x1,x2,y,y1,y2,z,z1,z2;
  cout<<"\nAdd matrices (3x3): "<<endl;
  cout<<"\nEnter all the values in order of columns starting at 1: "<<endl; cin>>a>>a1>>a2>>b>>b1>>b2>>c>>c1>>c2;
  cout<<"\nEnter the values for your other matrix: "<<endl; 
  cin>>x>>x1>>x2>>y>>y1>>y2>>z>>z1>>z2; cout<<"\n\nFinal Matrix:"<<endl; cout<<endl; cout<<"|"<<endl;
  cout<<a+x; cout<<"  "; cout<<a1+x1; cout<<"  "; cout<<a2+x2; cout<<" "; cout<<endl;
  cout<<b+y; cout<<"  "; cout<<b1+y1; cout<<"  "; cout<<b2+y2;cout<<"  "; cout<<endl;
  cout<<c+z; cout<<"  "; cout<<c1+z1; cout<<"  "; cout<<c2+z2;cout<<"  "; cout<<endl;
  cout<<"|";
  }

  if(matrixoperation==2)
  {
  float a,a1,a2,b,b1,b2,c,c1,c2;
  float x,x1,x2,y,y1,y2,z,z1,z2;
  cout<<"\nSubtract matrices (3x3): "<<endl;
  cout<<"\nEnter all the values in order of columns starting at 1: "<<endl; cin>>a>>a1>>a2>>b>>b1>>b2>>c>>c1>>c2;
  cout<<"\nEnter the values for your other matrix: "<<endl; 
  cin>>x>>x1>>x2>>y>>y1>>y2>>z>>z1>>z2; cout<<"\n\nFinal Matrix:"<<endl; cout<<endl; cout<<"|"<<endl;
  cout<<a-x; cout<<"  "; cout<<a1-x1; cout<<"  "; cout<<a2-x2; cout<<" "; cout<<endl;
  cout<<b-y; cout<<"  "; cout<<b1-y1; cout<<"  "; cout<<b2-y2;cout<<"  "; cout<<endl;
  cout<<c-z; cout<<"  "; cout<<c1-z1; cout<<"  "; cout<<c2-z2;cout<<"  "; cout<<endl;
  cout<<"|";
  }


if(matrixoperation==3)
{
  float a,a1,a2,b,b1,b2,c,c1,c2;
  float x,x1,x2,y,y1,y2,z,z1,z2;
  cout<<"\nMultiple matrices (3x3): "<<endl;
  cout<<"\nEnter all the values in order of columns starting at 1: "<<endl; cin>>a>>a1>>a2>>b>>b1>>b2>>c>>c1>>c2;
  cout<<"\nEnter the values for your other matrix: "<<endl; cin>>x>>x1>>x2>>y>>y1>>y2>>z>>z1>>z2;
  cout<<"\n\nFinal Matrix:"<<endl; cout<<endl; cout<<"|"<<endl;
  cout<<(a*x)+(a1*y)+(a2*z); cout<<"  "; cout<<(a*x1)+(a1*y1)+(a2*z1); cout<<"  "; cout<<(a*x2)+(a*y2)+(x*z2); cout<<"  "; cout<<endl; cout<<(b*x)+(b1*y)+(b2*z); cout<<"  "; cout<<(b*x1)+(b1*y1)+(b2*z1); cout<<"  "; cout<<(b*x2)+(b1*y2)+(b2*z2); cout<<"  "; cout<<endl; cout<<(c*x)+(c1*y)+(c2*z); cout<<"  "; cout<<(c*x1)+(c*y1)+(c*z1); cout<<"  "; cout<<(c*x2)+(c*y2)+(c*z2); cout<<"  "; cout<<endl; cout<<"|";

}
}


if(choice=="Wavelength" || choice=="wavelength")
{ float vel, freq; float wavelength; 
cout<<"\n\nwavelength formula: "<<endl;
cout<<"\nWhat is the velocity? "; cin>>vel;

cout<<"\nWhat is the frequency? "; cin>>freq;
wavelength = vel/freq;
cout<<wavelength;


}
if(choice=="Frequency" || choice=="frequency")
{
  float vel, wavelength, freq;
cout<<"\nWhat is the velocity? "; cin>>vel; cout<<endl;
cout<<"\nWhat is the wavelength? "; cin>>wavelength; 

cout<<endl;
freq = vel/wavelength;
cout<<wavelength;

}


if(choice=="MOLARITY")
{ float molarity;
float mass, volume;
cout<<"\nGive the number of moles of solute: "; cin>>mass; cout<<endl;

cout<<"\nGive the volume of solution: "; cin>>volume;

molarity = mass/volume; cout<<"\n\n";
cout<<molarity;

if(choice=="MOLALITY")
{
  float molality, moles, volumeh2o;
  cout<<"\nGive the number of moles solute: "; cin>>moles;
  cout<<endl;
  cout<<"\nGive the volume of water: "; cin>>volumeh2o;
  molality = moles/volumeh2o;
  cout<<molality;
}

if(choice=="ionic equation")
{ int bonds, ionmoles, double1moles, double2moles;
cout<<"How many bonds are in place (1=single or 2=double replacement)?"; cin>>bonds;
if(bonds==1)
{
cout<<"\nHow many moles of the single ion?"; cin>>ionmoles;
cout<<"\nHow many moles of the metal? "; cin>>double1moles;
cout<<"\nHow many moles of the nonmetal? "; cin>>double2moles;
}
}

if(choice=="boyle's law")
{
  float pressure1, pressure2, volume1,volume2;
  string availability;
  cout<<"\nAre you looking for the pressure or the volume?"; getline(cin,availability); cout<<endl<<endl;

  if(availability=="Pressure")
  {
    cout<<"Enter the volume of the first gas:"; cin>>volume1;
    cout<<"Enter the pressure of the second gas: "; cin>>pressure1;
    cout<<"Enter the volume of the second gas: "; cin>>volume2;

    pressure1=((pressure2/volume2)*volume1);

    cout<<pressure1;
  }
  if(availability=="Volume")
  {
    cout<<"Enter the volume of the second gas:"; cin>>volume2;
    cout<<"Enter the pressure of the second gas: "; 
    
    cin>>pressure2;
    cout<<"Enter the pressure of the first gas: "; cin>>pressure1;

    volume1=(pressure1/(pressure2/volume2));
cout<<"\n\n";
    cout<<volume1;
  }
}
}



if(choice=="work" || choice=="WORK")
{
  float force, distance;
  cout<<"\n\nWhat is the force in newtons? "; cin>>force;
  cout<<"\nWhat is the distance? "; cin>>distance;
  float work = force*distance;
  cout<<endl;
  cout<<"The work is: "<<work<<" Joules";
}

if(choice=="distance" || choice=="DISTANCE")
{
float distance, work, force;
cout<<"\n\nWhat is the work in joules? "; cin>>force;
cout<<"\nWhat is the force in newtons? "; cin>>distance;
distance = work/force;

cout<<endl;
cout<<"The distance is: "<<distance<<" units";

}

if(choice=="force" || choice=="FORCE")
{
float distance, work, force;
cout<<"\n\nWhat is the work in joules? "; cin>>force;
cout<<"\nWhat is the distance? "; cin>>distance;
force = work/distance;
cout<<endl;
cout<<"The force is: "<<force<<" newtons.";
}


if(choice=="practice" || choice=="PRACTICE")
{
  cout<<"\n\n";
    int workanswer= 120;
float reply1;
  
  cout<<"Work problem: \nI am pushing a box at a force of 20 newtons. The box has moved 6 meters. What is the work in joules? "; cin>>reply1;
  if(reply1==120)
  {
    cout<<"\nCORRECT!";
  }
  if(reply1!=120)
  {
    cout<<"\nWRONG! THE ANSWER IS 120!";
  }
  cout<<"\n\n";


  float reply2;  int boyleanswer=10;
  cout<<"\nBoyle's Law Problem: \nThe pressure of a gas is 5 atmospheres at 20 Liters. What is the pressure of the gas at 40 Liters? "; cin>>reply2;
  if(reply2==10)
  {
    cout<<"\nCORRECT!";
  }
  if(reply2!=10)
  {
    cout<<"\nWRONG";
  }
cout<<"\n\n";
  float reply3; double waveanswer=0.006;
  cout<<"\nWavelength Problem: \nThe velocity of a wave is 1000000 meters per second. The length of the wave is 6000 meters. What is the frequency in hertz? "; cin>>reply3;
cout<<endl;

  if(reply3==0.006)
  {
  cout<<"\nCORRECT!";
  }
  if(reply3!=0.006)
  {
    cout<<"\nWRONG!";
  }

if(reply1==120 && reply2==10 &&reply3==0.006)
{
  cout<<"\n\nCongrats, you got a 100%!";
}
if(reply1==120 && reply2==10 && reply3!=0.06)
{
  cout<<"\n\nYou got a 67%. Better luck next time!";
}
if(reply1==120 && reply2!=10 && reply3==0.06)
{
  cout<<"\n\nYou got a 67%. Better luck next time!";
}
if(reply1!=120 && reply2==10 && reply3==0.06)
{
  cout<<"\n\nYou got a 67%. Better luck next time!";
}

if(reply1==120 && reply2!=10 && reply3!=0.06)
{
  cout<<"\n\nYou got a 33%. :(";
}
if(reply1!=120 && reply2==10 && reply3!=0.06)
{
  cout<<"\n\nYou got a 33%. :(";
}
if(reply1!=120 && reply2!=10 && reply3==0.06)
{
  cout<<"\n\nYou got a 33%. :(";
}

if(reply1!=120 && reply2!=10 && reply3!=0.06)
{
  cout<<"\n\nYou got a zero. How 'bout you study before you back?";
}



}


cout<<"\n\n\n\n\n\nTHANK YOU FOR USING THE SCIENCE FUNCTIONS CALCULATOR + QUIZ!"<<endl;

exit(0);
return 0;


}