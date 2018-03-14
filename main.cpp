//author: Abdulaziz Alhadbah
#include<iostream>
#include<string>
#include<vector>

using namespace std;
const int LIST_SIZE = 5;

int main()
{
        vector<string> list; //array of 5 strings
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

                        list.push_back(items);


                }
        } while(input!='q' && input!='Q');

        if(list.size() !=0)
        { 


                cout<<"==ITEMS TO BUY==";
                for(int i=0; i<list.size(); i++)
                {

                        cout<<endl<<i+1 << " "<< list[i];

                }cout<<endl;

        }else

        {

                cout<< "No items to buy!\n";
                return 0;
        }

        return 0;
}


