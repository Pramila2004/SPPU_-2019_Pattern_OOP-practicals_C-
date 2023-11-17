//  Imagine a publishing company which does marketing for book and audio cassette versions. 
// Create a class publication that stores the title (a string) and price (type float) of publications. 
// From this class derive two classes: book which adds a page count (type int) and tape which 
// adds a playing time in minutes (type float).
// Write a program that instantiates the book and tape class, allows user to enter data and 
// displays the data members. If an exception is caught, replace all the data member values with 
// zero values.

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class Publication{
protected:
	string title;
	float price;
	
public:

	void add(){
			cout<<"\n\nEnter The Name of Publication : ";
			cin>>title;
			cout<<"Enter the price of publication   : ";
			cin>>price;
	
	}
	void display_publication(){
			cout<<"\n\nName of Publication : "<<title<<endl;
			cout<<"Price of Publication  : "<<price<<endl;
	
	}


};

class Book : public Publication{

int page_count;

public :

	void add_book(){
	
		try{
		
			add();
			cout<<"Enter The Number of page count : ";
			cin>>page_count;
			
			if(page_count<=0){
				page_count=0;
				title="";
				price=0.0;
				throw page_count;
				
			}
		}
		catch(...){
			cout<<"\n\nInvalid Page Number"<<endl;
		}
	}
	
	void display_book(){
		cout<<"******************************Book Publication*****************************"<<endl<<endl;
		display_publication();
		cout<<"Number of pages : "<<page_count<<endl;
	
	}

};

class Tape : public Publication{

float play_time;

public :
	void add_tapes(){
	
		try{
		
			add();
			cout<<"Enter The Play Time of Tape : ";
			cin>>play_time;
			
			if(play_time<=0){
				play_time=0;
				title="";
				price=0.0;
				throw play_time;
				
			}
		}
		catch(...){
			cout<<"\n\nInvalid Play Time"<<endl;
		}
	}
	
	void display_tapes(){
		cout<<"******************************Tape Publication*****************************"<<endl<<endl;
		display_publication();
		cout<<"Play Time : "<<play_time<<endl;
	
	}

};


int main(){

int size=10;
Book b1[10];
Tape t1[10];
int book_count=0;
int tape_count=0;
int ch;
bool flag=true;
while(flag ){

	system("CLS");
	cout<<"************************************MENU*******************************"<<endl<<endl;
	cout<<"\n1.Add Book Data "<<endl;
	cout<<"2.Display Book Data "<<endl;
	cout<<"3.Add Tapes Data "<<endl;
	cout<<"4.Display Tapes Data "<<endl;
	cout<<"5.Total Book Count "<<endl;
	cout<<"6.Total Tape Count "<<endl;
	cout<<"7.Exit"<<endl<<endl;

	cout<<"Enter Your Choice : "<<endl;
	cin>>ch;

		switch(ch){

			case 1:
			{
				b1[book_count].add_book();
				book_count++;
				getch();
			}
			break;
			case 2:
			{

				for(int i=0;i<book_count;i++){
					b1[i].display_book();
				}
				getch();
			}
			break;
			case 3:
			{
				t1[tape_count].add_tapes();
				tape_count++;
				getch();
			}
			break;
			case 4:
			{
				for(int i=0;i<tape_count;i++){
					t1[i].display_tapes();
				}
				getch();
			}
			break;
			case 5:
			{
				cout<<"\n\nTotal Book Count : "<<book_count<<endl;
				getch();
			}
			break;
			case 6:
			{
				cout<<"\n\nTotal Tape Count : "<<tape_count<<endl;
				getch();
			}
			break;
			case 7:
			{
				flag=false;
			}	
			break;
			default :
			{
				cout<<"Invalid Input !!!"<<endl;
				getch();
			}	
			break;
		}

	}

return 0;
}








