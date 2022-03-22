#include <iostream>
using namespace std;

string toMorse(char character)
{
  string dot, dash, morse;

  dot = ". "; dash="_ "; morse="";

switch(character)
{
  case 'A':
  case 'a':
    return(dot+dash+"");
    break;

  case 'B':
  case 'b':
    return(dash+dot+dot+dot+"");
    break;

  case 'C':
   case 'c':
    return(dash+dot+dash+dot+"");
    break;
  
  case 'D':  case 'd':
    return(dash+dot+dot+"");
    break;
  
  case 'E':  case 'e':
    return(dot+"");
    break;

  case 'F':   case 'f':
    return(dot+dot+dash+dot+"");
    break;

  case 'G':   case 'g':
    return(dash+dash+dot+"");
    break;

  case 'H':   case 'h':
    return(dot+dot+dot+dot+"");
    break;

  case 'I':  case 'i':
    return(dot+dot+"");
    break;

  case 'J':  case 'j':
    return(dot+dash+dash+dash+"");
    break;

  case 'K':  case 'k':
    return(dash+dot+dash+"");
    break;
  
  case 'L':   case 'l':
    return(dot+dash+dot+dot+"");
    break;
  
  case 'M':  case 'm':
    return(dash+dash+"");
    break;

  case 'N':   case 'n':
    return(dash+dot+"");
    break;

  case 'O':   case 'o':
    return(dash+dash+dash+"");
    break;
  
  case 'P':  case 'p':
    return(dot+dash+dash+dot+"");
    break;
  
  case 'Q':  case 'q':
    return(dash+dash+dot+dash+"");
    break;
  
  case 'R':  case 'r':
    return(dot+dash+dot+"");
    break;
  
  case 'S':   case 's':
    return(dot+dot+dot+"");
    break;
  
  case 'T':  case 't':
    return(dash+"");
    break;

  case 'U':  case 'u':
    return(dot+dot+dash+"");
    break;
  
  case 'V':  case 'v':
    return(dot+dot+dot+dash+"");
    break;
  
  case 'W':   case 'w':
    return(dot+dash+dash+"");
    break;
  
  case 'X':   case 'x':
    return(dash+dot+dot+dash+"");
    break;
  
  case 'Y':  case 'y':
    return(dash+dot+dash+dash+"");
    break;
  
  case 'Z':  case 'z':
    return(dash+dash+dot+dot+"");
    break;

  case 1:
    return(dot+dash+dash+dash+"");
    break;

  case 2:
    return(dot+dot+dash+dash+dash+"");
    break;
  
  case 3:
    return(dot+dot+dot+dash+dash+"");
    break;
  
  case 4:
    return(dot+dot+dot+dot+dash+"");
    break;
  
  case 5:
    return(dot+dot+dot+dot+dot+"");
    break;

  case 6:
    return(dash+dot+dot+dot+dot+"");
    break;
  
  case 7:
    return(dash+dash+dot+dot+dot+"");
    break;
  
  case 8:
    return(dash+dash+dash+dot+dot+"");
    break;

  case 9:
    return(dash+dash+dash+dash+dot+"");
    break;
  
  case 0:
    return(dash+dash+dash+dash+dash+"");
    break;
  
  case ' ':
    return"    ";
}
} 
void convert(string text)
{
  for(int i=0; text[i]; i++)
  {
      cout<<toMorse(text[i]); 
  }
}
int main() {
cout<<"\n\nMorse Code Converter: "<<endl;
string text; string morse;
for(int i=0; text[i]; i++)
  {
      cout<<toMorse(text[i]); 
  }
  cout << "\n\nEnter a string: "; getline(cin, text);convert(text);
}