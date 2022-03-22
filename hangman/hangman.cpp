#include <iostream>
#include <cstdlib>
using namespace std;




void printAlphabet(char alphabet[])
{
  for(int i=0; i<26; i++)
  {
    cout<<alphabet[i]<<"";
    if(i==12)
    {
      cout<<endl;
    }
  }
  cout<<endl;
}
void printArr(char arr[], int size)
{
for(int i=0; i<size; i++)
{
  cout<<arr[i]<<" ";
}
}

void drawing(int remains)
{
	switch(remains)
	{
		case 9:
			cout << "_ _ _ _ _ _ _ _ _ _ _ _\n";
			break;
		case 8:
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 7:
			cout << "    _ _ _ _ _ _\n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 6:
			cout << "    _ _ _ _ _ _\n";
			cout << "   |           |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 5:
			cout << "    _ _ _ _ _ _\n";
			cout << "   |           |       \n";
			cout << "   O           |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 4:
			cout << "    _ _ _ _ _ _\n";
			cout << "   |           |       \n";
			cout << "   O           |       \n";
			cout << "   |           |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 3:
			cout << "    _ _ _ _ _ _\n";
			cout << "   |           |       \n";
			cout << "   O           |       \n";
			cout << "   |/          |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 2:
			cout << "    _ _ _ _ _ _\n";
			cout << "   |           |       \n";
			cout << "   O           |       \n";
			cout << "  \\|/          |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 1:
			cout << "    _ _ _ _ _ _\n";
			cout << "   |           |       \n";
			cout << "   O           |       \n";
			cout << "  \\|/          |       \n";
			cout << "  /            |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
			break;
		case 0:
			cout << "    _ _ _ _ _ _\n";
			cout << "   |           |       \n";
			cout << "   O           |       \n";
			cout << "  \\|/          |       \n";
			cout << "  / \\          |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "               |       \n";
			cout << "_ _ _ _ _ _ _ _|_ _ _ _\n";
      cout<<"\nYou are wrong!";
			break;
			
	}
}


string choice(int category)
{
  string videoGames[]={"Tetris", "Resident Evil", "FIFA", "Fortnite", "Battlefield", "Madden", "Call of Duty: Warzone", "Valorant", "PUBG", "Minecraft", "Battlefront", "Pac-Man", "Assassin’s Creed", "Animal Crossing", "Legend Of Zelda", "Genshin Impact", "League Of Legends", "Among Us", "Wii Sports", "Wii Resort", "Pokemon", "Metal Gear", "Undertale", "OFF", "Oneshot", "Terraria", "Counter Strike Global Offensive", "Grand Theft Auto V", "Overwatch", "Rust", "Among Us", "Super Mario Odyssey", "Destiny", "Red Dead Redemption", "Mario Kart", "Five Nights at Freddy’s", "A Hat in Time", "Clash of Clans", "Roblox", "Clash Royale", "Plants Vs Zombies", "Gran Turismo Sport", "Forza Horizon", "The Crew 2", "Horizon Dawn Zero", "Overcooked", "Rocket League", "Super Mario World", "Professor Layton", "Vib-Ribbon"};
  int game = 50;


  string movies[] = {"The Sound of Music", "Avengers", "Flight", "Need for Speed", "Insidious", "A Quiet Place", "The Conjuring", "Murder Mystery", "Wedding Crashers", "Mary Poppins", "Fast and Furious", "James Bond", "It", "Matrix", "Spiderman Far from Home", "Spiderman No Way home", "John Wick Parabellum", "Jurassic Park", "Harry Potter", "Star Wars", "Shrek", "Transformers", "Endgame", "Parasite", "Dr. Strangelove", "The shining", "The Irishman", "The social network", "12 angry men", "Wizard of oz", "Godfather", "La la land", "Jaws", "Black panther", "Lion King", "Wall-e", "ET", "Lord of the Rings", "Rocky", "Forrest Gump", "Gone with the Wind", "Dark Knight", "Indiana Jones and the Temple of Doom", "Die Hard", "Predator", "Lethal Weapon", "The Departed", "Avatar", "Knives Out", "Inception", "Spirited Away", "My Neighbor Totoro", "Ponyo", "Kiki’s Delivery Service", "Castle in the Sky", "Princess Mononoke", "Grave of the Fireflies", "The Cat Returns", "Howl’s Moving Castle", "The Terminal", "UP", "How to Train Your Dragon", "Pirates of the caribbean", "Mission Impossible", "John Wick", "Megamind", "Back to the Future", "Top Gun", "I am legend"};
  int movie1 = 69;

  string sports[] = {"Soccer", "Football", "Golf", "Basketball", "Cricket", "Volleyball", "Baseball", "Tennis", "Rugby", "Field Hockey", "Softball", "Lacrosse", "Boxing", "Croquet", "Badminton", "Swimming", "Softball", "Ice Hockey", "Futsal"};
  int sports1 = 19;

  string candy[] = {"Skittles", "Snickers", "Sour Patch", "Kit Kat", "Crunch", "Smarties", "Three Musketeers", "Hershey", "Milky Way", "Tootsie Rolls", "Toffee", "Twix", "MnM", "Whoppers", "Twizzlers", "Starburst", "Payday", "Reese's Peanut Butter Cups", "Butter Fingers"};
  int candy1 = 19;

  string foodchains[] = {"Taco Bell", "McDonalds", "Subway", "KFC", "Burger King", "Wendy’s", "White Castle", "Popeyes", "Chick Fil A", "In-N-Out", "Dunkin Donuts", "Panda Express", "Starbucks"};
  int food = 14;

  

  switch(category)
  {
    case 1:
      return videoGames[rand()%game];
    case 2:
      return movies[rand()%movie1];
    case 3:
      return sports[rand()%sports1];
    case 4:
      return candy[rand()%candy1];
    case 5:
      return foodchains[rand()%food];
    default:
      return "Rerun and try again. Follow all directions.";
  }
  
}


//
string toLower(string text)
{
  string lower="";
  for(int i=0; i<text.length(); i++)
  {
    char curr = text.at(i);
    if(curr>=65 && curr<=90)
    {
      curr+=32;
    }
    lower+=curr;
  }
  return lower;
}
//


int main() {

srand(time(NULL));

int hangmanchoice; int replay; string category1 = "";
string word = "";




//
do{
cout<<"\n\nPick a category:\n1. Video Games\n2. Movies\n3. Sports\n4. Candies\n5. Fast Food Chains\n6. Random"; cin>>hangmanchoice; cout<<endl;

if(hangmanchoice==6)
  {
    hangmanchoice=rand()%5+1;
  }
switch(hangmanchoice)
{
  case 1:
     word = choice(1);
     word = toLower(word);
    category1 = "\nVideo games";
    break;
  case 2:
     word = choice(2);
          word = toLower(word);
    category1 = "\nFood";
    break;
  case 3:
       word = choice(3);
     word = toLower(word);
    category1 ="\nSports";
    break;
  case 4:
       word = choice(4);
     word = toLower(word);
    category1 = "\nCandies";
    break;
  case 5:
       word = choice(5);
     word = toLower(word);
    category1 = "\nFast Food Chains";
    break;
  default:
    cout<<"\n\nRerun and try again, following all directions.";


}


if(hangmanchoice>=1 && hangmanchoice<=6)
{
bool play = true;
int remainingguesses = 10;
bool correct;
bool inword;

string username;
char guess;

char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
printAlphabet(alphabet);

 
int len=word.length();/////can remove later

char blanks[word.length()];

for(int i=0; i<word.length(); i++)
{
  if((word.at(i)>=65 && (word.at(i)<=90)) || (word.at(i)>=97 && word.at(i)<=122))
  {
  blanks[i] = '_';
  }
  else
  {
    blanks[i] = word.at(i);
  }
}

getline(cin, username);




//
do
{
  drawing(remainingguesses);
  printAlphabet(alphabet);
  printArr(blanks, word.length());
  cout<<"\nGuess a letter: "; getline(cin,username); 
  if(username.length()==1)
  {
    guess= username.at(0);
    inword = false;
  for(int i=0; i<len; i++)
  {
    if(word.at(i)==guess)
    {
      inword = true;
      blanks[i] = guess;
    }
  }
  }
  else
  {
    if(word==username)
    {
      for(int i=0; i<len; i++)
      {
        blanks[i] = word.at(i);
      }
    }
    else
    {
      drawing(0);
      cout<<"\n\nYou are incorrect";
      break;
    }
  }


  cout<<endl; cout<<endl;


  for(int i=0; i<26; i++)
  {
    if(alphabet[i]==guess)
    {
      alphabet[i] = ' ';
    }
  }

  if(!inword){
    remainingguesses--;
  }

  correct = true;
  for(int i=0; i<len; i++)
  {
    if(blanks[i]=='_')
    {
      correct = false;
    }
  }
if(correct)
{
  play=false;
}
else if(remainingguesses==0)
{
  play = false;
  drawing(0);
}

if(correct)
{
  printArr(blanks, len);
  cout<<"\n\nYou are correct!";
  play = false;
}

}while(play);
//
}
cout<<"\n\nPlay again?\n1. Yes\n2. No\n\n\n\n\n\n\n\n\n\n\n\n"; cin>>replay;
}while(replay==1);

}

