#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class student{
	public:
		int id;
		char firstname[20], lastname[20];
		
		student()
		{
			id = 0;
			firstname[0,1] = 'NO';
			lastname[0,1] = 'NO';
		}
		
};

main()
{
	int ch,sid;

	student s;
	loop:
	cout<<"1. Save student record \n2. Read student record \n3. Delete a record \n4. Modify a record \n5. Search a record \n6. Exit \nChoice is: ";
	cin>>ch;
	
	
	switch(ch)
	{
		case 1:
			{
			cout<<"Enter student Id:";
			cin>>s.id;
			cout<<"Enter student first name:";
			cin>>s.firstname;
			cout<<"Enter student last name:";
			cin>>s.lastname;
			
			ofstream ofstrm;
			ofstrm.open("Student1.txt", ios :: app);
			ofstrm<<endl;
			ofstrm<<s.id;
			ofstrm<<endl;
			ofstrm<<s.firstname;
			ofstrm<<endl;
			ofstrm<<s.lastname;
			ofstrm<<endl;
			
			ofstrm<<endl;
			
			ofstrm.close();
			goto loop;
			break;
		}
		case 2:
			{
			ifstream ifstrm;
			ifstrm.open("Student1.txt");
			
				ifstrm>>s.id;
				ifstrm>>s.firstname;
				ifstrm>>s.lastname;
			
			while(!ifstrm.eof())
			{
				cout<<endl;
				cout<<"Student Id is: "<<s.id<<endl;
				cout<<"First Name: "<<s.firstname<<" "<<s.lastname<<endl<<endl;
				
				ifstrm>>s.id;
				ifstrm>>s.firstname;
				ifstrm>>s.lastname;
			}
			
			ifstrm.close();
			goto loop;
			break;
		}
		case 3:
			{
				cout<<"Enter id to delete a record: ";
				cin>>sid;
				
				ifstream ifstrm1;
				ifstrm1.open("Student1.txt");
				ofstream ofstrm1;
				ofstrm1.open("new.txt");
				
				ifstrm1>>s.id;
				ifstrm1>>s.firstname;
				ifstrm1>>s.lastname;
				
				while(!ifstrm1.eof())
				{
					if(s.id!=sid)
					{
						ofstrm1<<endl;
						ofstrm1<<s.id;
						ofstrm1<<endl;
						ofstrm1<<s.firstname;
						ofstrm1<<endl;
						ofstrm1<<s.lastname;
						ofstrm1<<endl;
					}
					else{
							cout<<"\t Record Deleted!"<<endl;
						}
					
					ifstrm1>>s.id;
					ifstrm1>>s.firstname;
					ifstrm1>>s.lastname;
				}
				
			ofstrm1.close();		
			ifstrm1.close();
			
			remove("Student1.txt");
			rename("new.txt","Student1.txt");
						
			goto loop;
			break;
		}
		case 4:
			{
				cout<<"Enter id to Edit a record: ";
				cin>>sid;
				
				ifstream ifstrm2;
				ifstrm2.open("Student1.txt");
				ofstream ofstrm2;
				ofstrm2.open("new.txt");
				
				ifstrm2>>s.id;
				ifstrm2>>s.firstname;
				ifstrm2>>s.lastname;
				
				while(!ifstrm2.eof())
				{
					if(s.id!=sid)
					{
						ofstrm2<<endl;
						ofstrm2<<s.id;
						ofstrm2<<endl;
						ofstrm2<<s.firstname;
						ofstrm2<<endl;
						ofstrm2<<s.lastname;
						ofstrm2<<endl;
					}
					else{
						cout<<"\nEnter New ID:";
						cin>>s.id;
						cout<<"\nEnter New First Name:";
						cin>>s.firstname;
						cout<<"\nEnter New Last Name:";
						cin>>s.lastname;
						
						
						ofstrm2<<endl;
						ofstrm2<<s.id;
						ofstrm2<<endl;
						ofstrm2<<s.firstname;
						ofstrm2<<endl;
						ofstrm2<<s.lastname;
						ofstrm2<<endl;
						
					}
					
					ifstrm2>>s.id;
					ifstrm2>>s.firstname;
					ifstrm2>>s.lastname;
				}
				
			ofstrm2.close();		
			ifstrm2.close();
			
			remove("Student1.txt");
			rename("new.txt","Student1.txt");
			
			
			
			goto loop;
			break;
		}
		case 5:
			{
				cout<<"Enter id to Search a record: ";
				cin>>sid;
				
				ifstream ifstrm2;
				ifstrm2.open("Student1.txt");
				
				ifstrm2>>s.id;
				ifstrm2>>s.firstname;
				ifstrm2>>s.lastname;
				
				while(!ifstrm2.eof())
				{
					if(s.id==sid)
					{
						ifstrm2>>s.id;
						ifstrm2>>s.firstname;
						ifstrm2>>s.lastname;
						cout<<endl;
				cout<<"Student Id is: "<<s.id<<endl;
				cout<<"First Name: "<<s.firstname<<" "<<s.lastname<<endl<<endl;
						
					}
					else{
						cout<<"\nThis id record does not exist."<<endl;				
					}
					
				}
						
			ifstrm2.close();
						
			goto loop;
			break;
		}
		case 6:
			
			break;
		default:
			cout<<"Invalid Choice."<<endl<<endl;
			goto loop;
	}
	
	
	cout<<endl;
	system("pause");
}
