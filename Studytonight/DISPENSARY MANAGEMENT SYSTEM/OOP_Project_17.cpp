#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Drug{
	protected:
		char drug_name[20];
		char id[7];
		
	public:	
		Drug()
		{
			drug_name[0,1,2,3,4,5,6] = 'no name';
			id[0,1,2,3,4,5,6] = 'no name';
		}

		
};
class Database : protected Drug{
		private:
			float sale_price, purchase_price, profit;
			int total_amount_of_drugs, amount_sale, amount_left;
			string manufacture_date, expiry_date;
			ofstream ofstrm;
			ifstream ifstrm;
			char sid[7];
		
		public:
		void Getdata()
		{
			cout<<"Enter Drug Id: ";
			cin>>id;
			cout<<"Enter Drug Name: ";
			cin>>drug_name;
			cout<<"Enter Sale Price: ";
			cin>>sale_price;
			cout<<"Enter Purchase Price: ";
			cin>>purchase_price;
			cout<<"Enter Total Amount Of Drugs: ";
			cin>>total_amount_of_drugs;
			cout<<"Enter Drug Amount Sale: ";
			cin>>amount_sale;
			cout<<"Enter Manufactured Date: ";
			cin>>manufacture_date;
			cout<<"Enter Expiry Date: ";
			cin>>expiry_date;
			
			ofstrm.open("drug.txt", ios::app);
			ofstrm<<id;
			ofstrm<<endl;
			ofstrm<<drug_name;
			ofstrm<<endl;
			ofstrm<<sale_price;
			ofstrm<<endl;
			ofstrm<<purchase_price;
			ofstrm<<endl;
			ofstrm<<total_amount_of_drugs;
			ofstrm<<endl;
			ofstrm<<amount_sale;
			ofstrm<<endl;
			ofstrm<<manufacture_date;
			ofstrm<<endl;
			ofstrm<<expiry_date;
			ofstrm<<endl;
			
			ofstrm.close();
			
		}
		void Showdata()
		{
			int ch;
			loop:
			cout<<"Drug ID: ";
			cin>>sid;
			
			cout<<"What do you want to check: "<<endl;
			cout<<"1. Profit: \n2. Amount Left: \n3. Expiry Date: \n4. Exit: "<<endl;
			cin>>ch;
			
			switch(ch)
			{
				case 1:
					cout<<"\tProfit"<<endl;
					cout<<"Selling Price = "<<sale_price<<"Rs."<<endl;
					cout<<"Buying Price = "<<purchase_price<<"Rs."<<endl;
					profit= sale_price - purchase_price;
					cout<<"Profit = "<<profit<<"Rs."<<endl<<endl;
					goto loop;
				break;	
				case 2:
					cout<<"\tAmount Left"<<endl;
					cout<<"Total Amount = "<<total_amount_of_drugs<<"Rs."<<endl;
					cout<<"Amount sold = "<<amount_sale<<"Rs."<<endl;
					amount_left = total_amount_of_drugs - amount_sale;
					cout<<"Amount left = "<<amount_left<<"Rs."<<endl<<endl;
					goto loop;
				break;
				case 3:
					cout<<"\tExpiry Date:"<<endl;
					cout<<"Manufactured Date = "<<manufacture_date<<endl;
					cout<<"Expiry date = "<<expiry_date<<endl;
					cout<<"Expiry date = "<<"Best Before "<<expiry_date<<endl<<endl;
					goto loop;
				break;
				case 4:
					
					break;
				default:
				cout<<"Invalid Choice."<<endl;	
				goto loop;	
			}
			
		}
};

main()
{
	Database obj;
	
	obj.Getdata();
	cout<<"Dispensary Management System:"<<endl;
	obj.Showdata();
	
	cout<<endl;
	system("pause");
}
