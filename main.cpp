//author: Abdulaziz Alhadbah
#include<iostream>
#include<string>

using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 5;
  char input;
do{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
}

while(( input!='q' ) && ( input!='Q' ));

  return 0;
}
