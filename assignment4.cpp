
// Write a C++ program that creates an output file, writes information to it, closes the file, open 
// it again as an input file and read the information from the file.

#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

class Student{
    int roll_no;
    string name;
    string div;
    float perc;

    public:

        Student(){
            roll_no=0;
            name="";
            div='\0';
            perc=0.0;
        }
        void getdata(){
            cout<<"\n\nEnter Your Roll Number : ";
            cin>>roll_no;
            cout<<"Enter  your Name : ";
            cin>>name;
            cout<<"Enter your Division : ";
            cin>>div;
            cout<<"Enter your Percentage : ";
            cin>>perc;
        }

        void put_into_file(){
            
            ofstream out("data.txt",ios::app);
            if (!out)
            {
               cout<<"\n\nError in file creation !!!"<<endl; 
            }else{
                out<<"Roll Number : "<<roll_no<<endl;
                out<<"Name : "<<name<<endl;
                out<<"Division : "<<div<<endl;
                out<<"Percentage : "<<perc<<endl<<endl;
            }
            cout<<"\n\n************************** Data Added Successfully ***************************\n"<<endl;
            out.close();
        }

        void get_from_file(){

            ifstream in("data.txt");

            string text;
            cout<<"\n\n****************************** Data of File ****************************** "<<endl<<endl;
            while (getline(in,text))
            {
                cout<<text<<endl;
            }
            cout<<endl<<endl;

        }

};
int main(){

    Student s;
    bool flag=true;
    int ch;
    while (flag)
    {
        system("CLS");
        cout<<"********************************MENU***********************************"<<endl<<endl;;
        cout<<"1.Insert Data Into File "<<endl;
        cout<<"2.Display Data of File "<<endl;
        cout<<"3.Exit "<<endl<<endl;
        cout<<"Enter Your choice : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
                s.getdata();
                s.put_into_file();
                getch();
            }
            break;
            case 2:
            {
                s.get_from_file();
                getch();
            }
            break;
            case 3:
            {
                flag=false;
            }
            break;
            default:
            {
                cout<<"\n\nInvalid Input!!!"<<endl;
                getch();
            }
            break;
        }

    }
    
    

    

    return 0;
}