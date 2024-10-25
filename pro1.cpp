#include<iostream>
using namespace std;
 struct Order{
 	int id;
 	char customer_name[50];
 	char fooditem[50];
 	double price;
 };
 Order wish[100];
 int Ordercount=0;
 
void generateOrder()
 {
 	cout<<"ENTER ORDER ID:- ";
 	 cin>>wish[Ordercount].id;
 	cout<<"ENTER CUSTOMER NAME:- ";
 	 cin>>wish[Ordercount].customer_name;
 	cout<<"ENTER FOOD ITEM:- ";
 	 cin>>wish[Ordercount].fooditem;
 	cout<<"ENTER FOOD PRICE:- ";
 	 cin>>wish[Ordercount].price;
 	 Ordercount++;
 }
void displayOrder()
 {
 	if(Ordercount=0)
 	{
 		cout<<"___NO ORDERS TO DISPLAY.___"<<endl;
 		return;
	 }
	    cout<<"Order ID\tCUSTOMERNAME\tFOOD ITEM\tPRICE"<<endl;
	    
	 for(int i=0;i<Ordercount;i++)
	 {
	 	cout<< wish[i].id<<"\t\t"<<wish[i].customer_name<<"\t\t"<<wish[i].fooditem<<"\t\t"<<wish[i].price<<endl;
	 	
	 }
 }
void searchOrderByID(int id)
{

	bool found=false;
	for(int i=0;i<Ordercount;i++)
	{
		cout<<"Order found: "<<endl;
		cout<<"Order ID: "<<wish[i].price<<endl;
		cout<<"Custommer name: "<<wish[i].customer_name<<endl;
		cout<<"Food item: "<<wish[i].fooditem<<endl;
		cout<<"Price: "<<wish[i].price<<endl;
		 found=true;
		 break;
	}


  if(!found)
  {
  	cout<<"...ORDER NOT FOUND..."<<endl;
  	
  }
}
    int main(){
	    int choice;
		while(true){
			cout<<"||1 GENERATE ORDER__||"<<endl;
			cout<<"||2_DISPLAY ORDER_||"<<endl;
			cout<<"||3_SEARCH ORDER BY ID_||"<<endl;
			cout<<"||4_EXIT_||"<<endl<<endl;
			cout<<"ENTER YOUR CHOICE: ";
			cin>>choice;
			switch(choice){ 
				case 1:
					generateOrder();
				 cout<<"___YOUR ORDER IS GENERATED___\n "<<endl;
				 break;
				case 2:
					displayOrder();
				 cout<<"__YOUR ORDER IS DISPLAYED__\n "<<endl;
				 break;
				case 3:
					int id;
					 cout<<"__ENTER ORDER ID TO SEARCH: ____";
					  cin>>id;
					  searchOrderByID(id);
					  break;
				case 4:
					 exit(0);
					 default:
					 	cout<<"INVALID CHOICE..PLEASE TRY AGAIN.. "<<endl;
		}
	}
		return 0;
}