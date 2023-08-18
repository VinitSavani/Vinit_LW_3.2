#include<iostream>
using namespace std;

class hotel
{
	int id;
	string name;
	string type;
	int rating;
	static string location;
	int establish_year;
	int staff_quantity;
	int room_quantity;
	
	public:
		set()
		{
			cout << endl << "Enter hotel id :- " ;
			cin >> id ;
			cout << "Enter hotel name :- " ;
			cin >> name ;
			cout << "Enter hotel type :- " ;
			cin >> type ;
			cout << "Enter hotel rating :- " ;
			cin >> rating ;
			cout << "Enter hotel establish year :- " ;
			cin >> establish_year ;
			cout << "Enter hotel staff quantity :- " ;
			cin >> staff_quantity ;
			cout << "Enter hotel room quantity :- " ;
			cin >> room_quantity ;
		}
		
		get1()
		{
			cout << endl << "Hotel id :- " << id << endl ;
			cout << "Hotel name :- " << name << endl ;
			cout << "Hotel type :- " << type << endl ;
			cout << "Hotel rating :- " << rating << " Star" << endl ;
		}
		
		get2()
		{
			cout << "Hotel establish year :- " << establish_year << endl ;
			cout << "Hotel staff quantity :- " << staff_quantity << endl ;
			cout << "Hotel room quantity :- " << room_quantity << endl ;
		}
		
		static locationinfo()
		{
			cout << "Hotail locatin :- " << location << endl ;
		}
};

string hotel::location = "Surat" ;

int main()
{
	int n,i;
	
	cout << "How many hotails in your city :- " ;
	cin >> n ;
	
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].set();
	}
	for(i=0;i<n;i++)
	{
		h[i].get1();
		h[i].locationinfo();
		h[i].get2();
	}
	
	return 0;
}
