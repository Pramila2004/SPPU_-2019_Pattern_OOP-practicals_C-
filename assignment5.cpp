// Write a function template for selection sort that inputs, sorts and outputs an integer array and 
// a float array.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

template<class t>
class sort{
    int n;
    t arr[];
    public:

        void get_array(){
            int n;
            cout<<"Enter Total Number of Element in Array : "<<endl;
            cin>>n;
            
            cout<<"Enter Element of Array : "<<endl;
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }

            cout<<"Array Before Sort : ";
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;

            int min=0;
            int i,j;
            for ( i = 0; i < n-1; i++)
            {
                min=i;
                for ( j = i+1; j < n; j++)
                {
                    if (arr[min]>arr[j])
                    {
                        min=j;
                    }
                }

                t temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
            cout<<endl;
            cout<<"Array after sort : ";
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }


};

int main(){

    int ch;
    sort <int>s1;
    sort <float>s2;
    bool flag=true;
    
    while (flag)
    {
        system("CLS");
        cout<<"****************************MENU*******************************"<<endl<<endl;
        cout<<"1. Enter Array Elements for Integer Data Type : "<<endl;
        cout<<"2. Enter Array Elements for Float Data Type : "<<endl;
        cout<<"3. Exit "<<endl;

        cout<<"Enter Your Choice : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
                s2.get_array();
                getch();
            }
            break;
            case 2:
            {
                s2.get_array();
                getch();
            }
            break;
            case 3:
            {
                flag = false;
            }
            break;
            default:
            {
                cout<<"Inavlid Input "<<endl;
                getch();
            }
            
        }


    }
   
    



    

    return 0;
}