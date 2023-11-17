// Write a program in C++ to use map associative container. The keys will be the names of states 
// and the values will be the populations of the states. When the program runs, the user is 
// prompted to type the name of a state. The program then looks in the map, using the state 
// name as an index and returns the population of the state.

#include <iostream>
#include <conio.h>
#include <map>
using namespace std;

class data{
public:
    string state_name;
    long int population;
    
        void getdata(){
            cout<<"\nEnter name of State : ";
            cin>>state_name;
            cout<<"Enter Population of State : ";
            cin>>population;
        }
      
};

int main(){

    map<string,long int> state;
    map<string,long int>::iterator itr;
    bool flag=true;
    int ch;
    data d;
    string key;

    while (flag)
    {
        system("CLS");
        cout<<"**************************************MENU***********************************"<<endl<<endl;

        cout<<"1.Insert Data "<<endl;
        cout<<"2.Search Data "<<endl;
        cout<<"3.Display Data"<<endl;
        cout<<"4.Exit"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
                d.getdata();
                state.insert(pair<string, long int>(d.state_name,d.population));
                getch();

            }
            break;
            case 2:
            {
                cout<<"\nEnter state Name : ";
                cin>>key;

                
                int f=0;
                for ( itr = state.begin(); itr != state.end(); itr++)
                {
                    if (key==itr->first)
                    {
                        f++;
                        cout<<"\nPopulation of "<<itr->first<<" state is "<<itr->second<<endl;
                    }
                }
                if (f==0)
                {
                    cout<<"\nState is not found!!!"<<endl;

                }
                getch();
            }
            break;
            case 3:
            {
               
                cout<<"State        Population"<<endl<<endl;
                for ( itr = state.begin(); itr != state.end(); itr++)
                {
                    
                        cout<<itr->first<<"       "<<itr->second<<endl;
                    
                }
                getch();

            }
            break;
            case 4:
            {
                flag=false;
            }
            break;
        default:
        {
            cout<<"Invalid Input !!!"<<endl;
            getch();
        }
            break;
        }
    }

    

    return 0;
}