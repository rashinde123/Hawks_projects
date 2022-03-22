#include <iostream>
using namespace std;


void printArr(double arr[], int len)
{
cout << endl;
for(int i=0; i < len; i++)
{
cout << arr[i];
if(i != len - 1)
{
cout << ", ";
}
}

cout << endl;

}



int main() {
int i;
int size; double values[i], sum=0, temp;

cout<<"\n\nWhat is the size of the dataset? "; cin>>size;

for(int i=0; i<size; i++)
{
  cout<<"Enter the values: "; cin>>values[i];sum+=values[i];

}

for(int i=0; i<size-1; i++)
{
  int min=i;
  for(int j=i+1; j<size;j++ )
  {
    if(values[j]<values[min])
    {
      min=j;
    }
  }
  double temp = values[i];
  values[i] = values[min];
  values[min] = temp;
}
cout<<"\n\nThe sorted array is ";
printArr(values,size);

double mode; int longestStreak=0, streak=0, numModes=0;

double range = (values[size-1] - values[0]);
cout<<"\n\nThe range is "<<range;


double mean = sum/size;
cout<<"\n\nThe mean is "<<mean;



double median;
if(size%2==0)
{
median = (values[size/2] + values[size/2-1])/2;
cout<<"\n\nThe median is "<<median;

}
else
{
  median = values[size/2];
  cout<<"\n\nThe median is "<<median;

}

if(values[i]==values[i+1])
  {
    streak++;
    if(streak==longestStreak)
    {
      numModes++;

    }
    if(streak>longestStreak)
    {
      numModes=1;
      longestStreak= streak;
      mode = values[i];
    }

  }
  else
  {
    streak=0;
  }
  if(numModes==1)
  {
    cout<<"\n\nThe mode is "<<mode;
  }
  else
  {
    cout<<"\n\nThere is no mode";
  }



}