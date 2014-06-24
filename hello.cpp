#include <iostream>
#include <stdio.h>
using namespace std;

int x; 

int main()
  {
  // Be Eliza
  string s;
  cout << "What is your favorite color? ";
  cin >> s;
  cout << "Why do you like " << s << " so much?\n";

  // gobble the ENTER from the last >>
  cin.get();

  // Program's over. Wait for user to press some input.
  cout << "Press ENTER to quit.";
  cin.get();
  //or
  cin.ignore( 1, '\n' );
  //or
  getchar();
  // or whatever

  cout << "bye.";
  return 0;
  }
