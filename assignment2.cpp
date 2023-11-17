// Develop a program in C++ to create a database of student’s information system containing the 
// following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact 
// address, Telephone number, Driving license no. and other. Construct the database with 
// suitable member functions. Make use of constructor, default constructor, copy constructor, 
// destructor, static member functions, friend class, this pointer, inline code and dynamic 
// memory allocation operators-new and delete as well as exception handling.

#include<iostream>
#include<cstring>
using namespace std;

class person{
public:
	char name[30] ;
	int roll_no;
	char _class[10];
	char div[10];
	char dob[25];
	char blood_group[10] ;
	
		person(){
					strcpy(name,"XYZ");
					roll_no=0;
					strcpy(_class,"1st");
					strcpy(div,"A");
					strcpy(dob,"dd/mm/yyyy");
					strcpy(blood_group,"o+");
						
		}
		
		void getdata1(){
			cout<<"Enter Student Information: "<<endl;
			cout<<"Name : ";
			cin>>name;
			cout<<"Roll Number : ";
			cin>>roll_no;
			cout<<"Class : ";
			cin>>_class;
			cout<<"Div : ";
			cin>>div;
			cout<<"Date Of Birth : ";
			cin>>dob;
			cout<<"Blood Group : ";
			cin>>blood_group;
			
		
		}
		
		person(person &p){
			strcpy(p.name,name);
			roll_no=p.roll_no;
			strcpy(p._class,_class);
			strcpy(p.div,div);
			strcpy(p.dob,dob);
			strcpy(p.blood_group,blood_group);
			
			
		
		}
		
	void display1(){	
	cout<<"\n"<<name<<" \t "<<roll_no<<" \t "<<_class<<" \t  "<<div<<" \t  "<<dob<<" \t  "<<blood_group<<"\t ";	
	}
};

class personal_info{
public:
	friend person;
	char address[30];
	char license[20];
	char insurance[20];
	personal_info(){
					strcpy(address,"ABC");
					strcpy(license,"XY-0000000000");
					strcpy(insurance,"XY000000000X");
	
		}
	personal_info(personal_info &p){
				
					strcpy(p.address,address);
					strcpy(p.license,license);
					strcpy(p.insurance,insurance);
	
		}
		
	void getdata2(){
			
			cout<<"Address : ";
			cin>>address;
			cout<<"License No : ";
			cin>>license;
			cout<<"insurance : ";
			cin>>insurance;
		}
	void display2(){	
		
		cout<<address<<" \t "<<license<<" \t "<<insurance<<endl;	
	}
	
	
};

void heading(){	
	cout<<"\n Name \t roll_no \t _class \t div \t dob \t blood_group \t Address \t License \t Insurance "<<endl<<endl;	
}



int main(){

	person p1,p2;

	personal_info pi1,pi2;
	
	

	bool flag=true;
	system("CLS");
	cout<<"****************************Student Database**************************"<<endl<<endl;
	
	cout<<"---------------------------Insert Student data----------------------"<<endl<<endl;
	p1.getdata1();
	p2=p1;
	pi1.getdata2();
	pi2=pi1;

	cout<<"---------------------------Display Student data----------------------"<<endl<<endl;
	
	heading();
	p2.display1();
	pi2.display2();





return 0;
}
