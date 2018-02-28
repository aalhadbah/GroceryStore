//author: Abdulaziz Alhadbah
#include<iostream>
#include<string>

using namespace std;
const int LIST_SIZE = 5;

int main()
{
  string list[LIST_SIZE]; //array of 5 strings
  int numItems = 0;
  char input;
  string items;

do
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(input == 'a' || input == 'A')
{  
cout<<"What is the item?\n";
  cin>>items; 
 
 if(numItems<LIST_SIZE)
{
 
 
 
 list[numItems]=items;
 numItems++;



}


else{


 cout<< "You'll need a bigger list!\n";

}




}

          }while( input!='q' &&  input!='Q');


cout<<"==ITEMS TO BUY=="<<endl;
for(int numItems=0; numItems<LIST_SIZE; numItems++)
{

     cout<<endl<<numItems+1 << " ";

if(list[numItems]!="")
{
   cout<<list[numItems];

}


}cout<<endl;
  return 0;
}
