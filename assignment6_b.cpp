// Write C++ program using STL for sorting and searching user defined records such as Item 
// records (Item code, name, cost, quantity etc) using vector container

#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


class Item{

    

    public:
        int code;
        string name;
        float cost;
        int quantity;

        void getdata(){
            cout<<"\nEnter ID : ";
            cin>>code;
            cout<<"Enter Name of Item : ";
            cin>>name;
            cout<<"Enter Cost of Item : ";
            cin>>cost;
            cout<<"Enter Quantity of Item : ";
            cin>>quantity;

        }

        void display(){
            cout<<"\nID : "<<code<<endl;
            cout<<"Name of Item : "<<name<<endl;
            cout<<"Cost of Item : "<<cost<<endl;
            cout<<"Quantity of Item : "<<quantity<<endl;

        

        }

        int getID() const {
        return code;
    }

        



     

};

void searching(vector <Item>v){

            int key;
            cout<<"Enter the ID of Item to be Searched : ";
            cin>>key;

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i].getID()==key)
                {
                    cout<<"Recond is found !!!";
                     cout<<"\n******************************** Data for of ID "<<key<<"*************************************** "<<endl;
                    v[i].display();
                    return ;
                }
            }

           
                cout<<"Recond is not found!!!"<<endl;
            

            return ;
}





void sorting(vector<Item> &v) {
   
    sort(v.begin(), v.end(), [](const Item &a, const Item &b) {
        return a.getID() < b.getID();
    });
}



int main(){

    int n;
    bool flag=true;
    system("CLS");
    cout<<"Enter Total Number of Items : ";
    cin>>n;

    Item info[n];
    vector <Item>vec;

    for (int i = 0; i < n; i++)
    {
        cout<<"\n-----------Enter Data for "<<i+1<<" Item -----------------"<<endl;
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
        cout<<"4 Exit "<<endl;
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