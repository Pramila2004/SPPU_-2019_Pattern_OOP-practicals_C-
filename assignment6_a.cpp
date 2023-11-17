// Write C++ program using STL for sorting and searching user defined records such as personal 
// records (Name, DOB, Telephone number etc) using vector container.

#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


class Info{

    int roll_no;
    string name;
    string DOB;
    long int tele;

    public:

        void getdata(){
            cout<<"\nEnter Your Roll Number : ";
            cin>>roll_no;
            cout<<"Enter Your Name : ";
            cin>>name;
            cout<<"Enter Your Date Of Birth : ";
            cin>>DOB;
            cout<<"Enter Your Telephone Number : ";
            cin>>tele;

        }

        void display(){
            cout<<"\nRoll Number : "<<roll_no<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Date Of Birth : "<<DOB<<endl;
            cout<<"Telephone Number : "<<tele<<endl;
        

        }

        int getroll_no() const {
        return roll_no;
    }

        



     

};

void searching(vector <Info>v){

            int key;
            cout<<"Enter the Roll Number of student to be Searched : ";
            cin>>key;

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i].getroll_no()==key)
                {
                    cout<<"\n\nRecond is found !!!"<<endl<<endl;
                    v[i].display();
                    return ;
                }
            }

           
                cout<<"\n\nRecond is not found!!!"<<endl;
            

            return ;
}

void sorting(vector<Info> &v) {
   
    sort(v.begin(), v.end(), [](const Info &a, const Info &b) {
        return a.getroll_no() < b.getroll_no();
    });
}

int main(){

    int n;
    bool flag=true;
    system("CLS");
    cout<<"Enter Total Number of Students : ";
    cin>>n;

    Info info[n];
    vector <Info>vec;

    for (int i = 0; i < n; i++)
    {
        cout<<"\n-----------Enter Data for "<<i+1<<" Student -----------------"<<endl;
        info[i].getdata();
        

    }

    for (int i = 0; i < n; i++)
    {

        vec.push_back(info[i]);
    }

    while (flag)
    {
        system("CLS");
        int ch;
        cout<<"1.Searching "<<endl;
        cout<<"2.Sorting "<<endl;
        cout<<"3 Display Items "<<endl;
        cout<<"4 Exit "<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
                searching(vec);
                getch();
            }
            break;
            case 2:
            {
                sorting(vec);
                cout<<"\n***************************************After sorting of Records **************************************"<<endl<<endl;
                
                for (int i = 0; i < n; i++)
                {
                    cout<<"\n******************************** Data for "<<i+1<<" Item *************************************** "<<endl;
                    vec[i].display();
                }
                getch();
            }
            break;
            case 3:
            {
                cout<<"\n***************************************All Records **************************************"<<endl<<endl;
                
                for (int i = 0; i < n; i++)
                {
                    cout<<"\n******************************** Data for "<<i+1<<" Item *************************************** "<<endl;
                    vec[i].display();
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
                cout<<"Invalid Input!!!"<<endl;
                getch();
            }
            break;
        }
    }

   
   

    

    return 0;
}