#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<vector>
#include<fstream>
#include<iomanip>
#include<sstream>

using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void loading() {
	int i,j;

	SetConsoleTextAttribute(h,11);
	gotoxy(80,15);
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2     \xB2\xB2\xB2\xB2\xB2\xB2\xB2      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	gotoxy(80,16);
	cout<<"\xB2\xB2     \xb2    \xB2\xB2\t   \xB2     \xB2\xB2    \xB2\xB2     \xB2\xB2     \xb2";
	gotoxy(80,17);
	cout<<"\xB2\xB2          \xB2\xB2\t         \xB2\xB2     \xB2\xB2    \xB2\xB2";
	gotoxy(80,18);
	cout<<"\xB2\xB2          \xB2\xB2\t         \xB2\xB2    \xB2\xB2     \xB2\xB2";
	gotoxy(80,19);
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2\t         \xB2\xB2\xB2\xB2\xB2\xb2\xB2      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	gotoxy(80,20);
	cout<<"      \xB2\xB2    \xB2\xB2\t \xB2\xB2\xB2\xB2    \xB2\xB2  \xB2\xB2             \xb2\xb2";
	gotoxy(80,21);
	cout<<"      \xB2\xB2    \xB2\xB2\t   \xB2\xB2    \xB2\xB2   \xB2\xB2            \xb2\xb2";
	gotoxy(80,22);
	cout<<"\xb2     \xB2\xB2    \xB2\xB2\t   \xB2\xB2    \xB2\xB2    \xB2\xB2     \xb2     \xb2\xb2";
	gotoxy(80,23);
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2     \xB2\xB2    \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";

	gotoxy(100,30);
	SetConsoleTextAttribute(h,12);
	printf("Loading...");

	for(i=10; i<195; i++) {
		for(j=28; j<29; j++) {
			gotoxy(i,j);
			Sleep(4);
			SetConsoleTextAttribute(h,10);
			printf("\xB2");
			printf("\xB1");
			printf("\xB0");
		}

	}

}

void logo() {
	SetConsoleTextAttribute(h,10);
	gotoxy(80,5);
	cout<<"+ ************** WELCOME TO *************** + ";
	SetConsoleTextAttribute(h,12);
	gotoxy(80,7);
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2     \xB2\xB2\xB2\xB2\xB2\xB2\xB2      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	gotoxy(80,8);
	cout<<"\xB2\xB2     \xb2    \xB2\xB2\t   \xB2     \xB2\xB2    \xB2\xB2     \xB2\xB2     \xb2";
	gotoxy(80,9);
	cout<<"\xB2\xB2          \xB2\xB2\t         \xB2\xB2     \xB2\xB2    \xB2\xB2";
	gotoxy(80,10);
	cout<<"\xB2\xB2          \xB2\xB2\t         \xB2\xB2    \xB2\xB2     \xB2\xB2";
	gotoxy(80,11);
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2\t         \xB2\xB2\xB2\xB2\xB2\xb2\xB2      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	gotoxy(80,12);
	cout<<"      \xB2\xB2    \xB2\xB2\t \xB2\xB2\xB2\xB2    \xB2\xB2  \xB2\xB2             \xb2\xb2";
	gotoxy(80,13);
	cout<<"      \xB2\xB2    \xB2\xB2\t   \xB2\xB2    \xB2\xB2   \xB2\xB2            \xb2\xb2";
	gotoxy(80,14);
	cout<<"\xb2     \xB2\xB2    \xB2\xB2\t   \xB2\xB2    \xB2\xB2    \xB2\xB2     \xb2     \xb2\xb2";
	gotoxy(80,15);
	cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    \xB2\xB2     \xB2\xB2    \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	SetConsoleTextAttribute(h,10);
	gotoxy(80,17);
	cout<<"SAMAR\t    GUL\t\t RESTURANT    SWABI"<<endl<<endl<<endl;

}

void borders() {
	int i=0;
	SetConsoleTextAttribute(h,12);
	for(i=3; i<=205; i++) {
		gotoxy(i,2);
		printf("\xB2");
	}

	for(i=2; i<=48; i++) {
		gotoxy(205,i);
		printf("\xB2\xB3");
	}

	for(i=2; i<=48; i++) {
		gotoxy(3,i);
		printf("\xB3\xB2");
	}

	for(i=4; i<=205; i++) {
		gotoxy(i,48);
		printf("\xB2");
	}

	for(i=4; i<=205; i++) {
		gotoxy(i,20);
		printf("\xB2");
	}
	SetConsoleTextAttribute(h,10);
	gotoxy(27,11);
	cout<<"DEVELOPED AND DESIGN BY : SALMAN KHAN";
	gotoxy(145,11);
	cout<<"DEVELOPED AND DESIGN BY : SALMAN KHAN";

}

void menuBorders() {
	int i=0;
	SetConsoleTextAttribute(h,12);
	for(i=3; i<=205; i++) {
		gotoxy(i,2);
		printf("\xB2");
	}

	for(i=2; i<=80; i++) {
		gotoxy(205,i);
		printf("\xB2\xB3");
	}

	for(i=2; i<=80; i++) {
		gotoxy(3,i);
		printf("\xB3\xB2");
	}

	for(i=4; i<=205; i++) {
		gotoxy(i,80);
		printf("\xB2");
	}

	for(i=4; i<=205; i++) {
		gotoxy(i,20);
		printf("\xB2");
	}
	SetConsoleTextAttribute(h,10);
	gotoxy(17,11);
	cout<<"DEVELOPED AND DESIGN BY : SALMAN KHAN";
	gotoxy(155,11);
	cout<<"DEVELOPED AND DESIGN BY : SALMAN KHAN";

}

void help()
{
	system("cls");
	gotoxy(8,4);
	cout<<"This project as title 'School management system' is comes under the Relational Database"<<endl;
	cout<<"\tManagement System (RDBMS). This application is developed with the help of Embarcadero Dev C++ 6.3 and"<<endl;
	cout<<"\tMy Sql. This application can also be run on the network environment so it can be said as network"<<endl;
	cout<<"\tapplication."<<endl<<endl;
	cout<<"\t\t\tHARDWARE"<<endl;
	cout<<"\tProcessor               Pentium-II or higher"<<endl;
	cout<<"\tProcessor Speed         533 MHZ"<<endl;
	cout<<"\tHard Disk               Space 1 GB (min.)"<<endl;
	cout<<"\tRam Memory              32 MB (64 MB recommended)"<<endl<<endl;
	cout<<"\t\t\tSOFTWARE"<<endl;
	cout<<"\tOperating System         Windows xp,7 or above"<<endl;
	cout<<"\tDatabase Server          Oracle My Sql"<<endl;
	cout<<"\tBack end                 Embarcadero Dev C++ 6.3 "<<endl<<endl<<endl;
	cout<<"\tMODULES USED IN THE PROJECT "<<endl<<endl;
	cout<<"\tThis project includes the following modules for development of the project. These are as"<<endl;
	cout<<"\tfollows: -"<<endl<<endl;
	cout<<"\t1. SPLASH FORM :"<<endl;
	cout<<"\tThis is a first form that displays the welcome screen for the user and also shows the"<<endl;
	cout<<"\tinformation of developer or version etc. "<<endl<<endl;
	cout<<"\t2. LOGIN FORM :"<<endl;
	cout<<"\tThis form shows the Login name and password when user enter a valid user name and"<<endl;
	cout<<"\tpassword then he/she can operate the application. "<<endl<<endl;
	cout<<"\t3. MAIN FORM :"<<endl;
	cout<<"\tThis form is a menu-based form that displays the menu for operation of the application. It"<<endl;
	cout<<"\tincludes various options for staff, student, fees and report related option. "<<endl<<endl;
	cout<<"\t4. STUDENT FORM :"<<endl;
	cout<<"\tThis form provides the option to add, modify, delete or find the information of a student who"<<endl;
	cout<<"\tseeks the admission in the school"<<endl<<endl;
	cout<<"\t5. STAFF FORM :"<<endl;
	cout<<"\tThis forms provides the option to add, delete, search and delete the information of staff (either"<<endl;
	cout<<"\tteaching or non-teaching) that is working in the school. "<<endl<<endl;
	cout<<"\tPress any key to continue..........."<<endl;
	getch();
	return;
}



// CLASSES

class MenuItem {
	public:
		string name;
		double price;
		string description;

		static vector<MenuItem> loadMenu() {
			system("cls");
			vector<MenuItem> menu;
			ifstream file("menu.txt");
			string line;
			while(getline(file,line)) {
				MenuItem item;
				stringstream ss(line);
				getline(ss,item.name, ',');
				ss>>item.price;
				ss.ignore();
				getline(ss,item.description, ',');
				menu.push_back(item);
			}
			file.close();
			return menu;
		}

		static void saveMenu(const vector<MenuItem>& menu) {
			ofstream file("menu.txt", ios::trunc);
			for(const auto& item : menu) {
				file<<item.name<<","<<item.price<<","<<item.description<<endl;
			}
			file.close();
		}
};
		
class Order {
	public:
		static int generateOrderId() {
			static int orderId=0;
			return orderId++;
		}

		static void saveOrder(int orderId, const vector<pair<MenuItem, int>>& cart, double total) {
			ofstream file("order.txt", ios::app);
			file<<"Order ID : "<<orderId<<endl;
			for(const auto& pair : cart) {
				const auto& item = pair.first;
				const auto& quantity = pair.second;
				file<<"Item : "<<item.name<<", Quantity : "<<quantity<<", Subtotal : $"<<fixed<<setprecision(2)<<item.price*quantity<<endl;
			}
			file<<"Total : $"<<fixed<<setprecision(2)<<total<<endl<<endl;
			file.close();
		}

		static void viewAllOders() {
			system("cls");
			logo();
			menuBorders();
			
			int i=23,j=0;
			double totalRevenue = 0.0;
			string line;
			
			ifstream file("order.txt");
			
			gotoxy(10,22);
			cout<<"ALL ORDERS";
			for(j=5; j<205;j++){
				SetConsoleTextAttribute(h,6);
				gotoxy(j,i);
				cout<<"_";
			}
			i+=2;
			while(getline(file,line)) {
				SetConsoleTextAttribute(h,10);
				gotoxy(10,i);
				cout<<line;
				if(line.find("Total : ") != string::npos) {
					stringstream ss(line.substr(line.find("$")+1));
					double orderTotal;
					ss>>orderTotal;
					totalRevenue+=orderTotal;
				}
				i++;
			}
			SetConsoleTextAttribute(h,6);
			for(j=5; j<205;j++){
				gotoxy(j,i);
				cout<<"_";
			}
			SetConsoleTextAttribute(h,10);
			i+=2;
			gotoxy(10,i);
			cout<<"Total Revenue : $"<<fixed<<setprecision(2)<<totalRevenue<<endl;
			file.close();
			getch();
		}

		static void viewCustomerOrder() {
			system("cls");
			logo();
			menuBorders();
			
			int i=23,j=0;
			string line;
			
			ifstream file("order.txt");
			
			gotoxy(10,22);
			cout<<"YOUR ORDERS"<<endl;
			for(j=5; j<205;j++){
				SetConsoleTextAttribute(h,6);
				gotoxy(j,i);
				cout<<"_";
			}
			i+=2;
			while(getline(file,line)) {
				SetConsoleTextAttribute(h,10);
				gotoxy(10,i);
				cout<<line<<endl;
				i++;
			}
			file.close();
			getch();
		}
};

class Admin {
	private:
		static int adminID;
		int a_ID,i=0;
		char ch;
		string adminName,adminUsername,adminPassword,adminPhNo,adminEmail,adminAddress,adminRole,adminGender;

	public:

//		Admin() {
//			adminName="Admin Name";
//			adminUsername="Admin Username";
//			adminPassword="Admin Password";
//			adminPhNo="03000000000";
//			adminEmail="adminemail@gmail.com";
//			adminAddress="Admin Address";
//			adminRole="Admin Role";
//			adminGender="Admin Gender";
//		}

		static int AdminID() {
			return ++adminID;
		}

		void adminSignup() {
			double pin;
			int i=0;
			
			SetConsoleTextAttribute(h,10);
			do{
				system("cls");
				logo();
				borders();
				for(i=67; i<140; i++) {
					gotoxy(i,30);
					printf("_");
				}
				for(i=67; i<140; i++) {
					gotoxy(i,33);
					printf("_");
				}
				for(i=31; i<34; i++) {
					gotoxy(66,i);
					printf("\xb3");
				}
				for(i=31; i<34; i++) {
					gotoxy(140,i);
					printf("\xb3");
				}
				SetConsoleTextAttribute(h,12);
				gotoxy(69,32);
				cout<<"Enter Pin To Signup ( Only Numbers, 0 to go back ) : ";
				SetConsoleTextAttribute(h,10);
				cin>>pin;
				if(pin==0){
					return;
				}
				
			}
			while(pin!=123);
			
			system("cls");
			logo();
			borders();
			SetConsoleTextAttribute(h,10);
			for(i=75; i<130; i++) {
				gotoxy(i,23);
				printf("_");
			}
			for(i=21; i<48; i++) {
				gotoxy(75,i);
				printf("\xb3");
			}
			for(i=21; i<48; i++) {
				gotoxy(130,i);
				printf("\xb3");
			}

			SetConsoleTextAttribute(h,6);
			gotoxy(94,22);
			cout<<"ADMIN SIGNUP";
			SetConsoleTextAttribute(h,12);
			gotoxy(80,25);
			cout<<"Your Admin ID is : ";
			SetConsoleTextAttribute(h,10);
			a_ID=AdminID();
			cout<<a_ID;
			gotoxy(80,27);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Full Name : ";
			SetConsoleTextAttribute(h,10);
			cin.ignore();
			getline(cin,adminName);
			gotoxy(80,29);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Address : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,adminAddress);
			gotoxy(80,31);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Email : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,adminEmail);
			gotoxy(80,33);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Phone Number : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,adminPhNo);
			gotoxy(80,35);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Gender : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,adminGender);
			gotoxy(80,37);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Admin Role : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,adminRole);
			gotoxy(80,39);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Username : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,adminUsername);
			gotoxy(80,41);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Password : ";
			SetConsoleTextAttribute(h,10);
			while(true) {
				ch=_getch();
				if(ch=='\r') {
					cout<<endl;
					break;
				} else if(ch=='\b') {
					if(adminPassword.empty()) {
						cout<<"\b\b";
						adminPassword.pop_back();
					}
				} else {
					cout<<"*";
					adminPassword+=ch;
				}
			}

			ofstream adminCredetialsFile("Admin Credentials.txt",ios::app);
			adminCredetialsFile<<adminUsername<<endl<<adminPassword<<endl<<endl;
			adminCredetialsFile.close();

			ofstream adminDataFile("Admin Data.txt",ios::app);
			adminDataFile<<adminID<<endl<<adminName<<endl<<adminAddress<<endl<<adminEmail<<endl<<adminPhNo<<endl<<adminGender<<endl<<adminRole<<endl<<endl<<endl;
			adminDataFile.close();

			system("cls");
			logo();
			borders();
			gotoxy(78,32);
			SetConsoleTextAttribute(h,6);
			cout<<"\x1 ";
			SetConsoleTextAttribute(h,12);
			cout<<"Your Admin account has been successfully created ";
			SetConsoleTextAttribute(h,6);
			cout<<"\x1"<<endl;
			gotoxy(80,33);
			SetConsoleTextAttribute(h,12);
			cout<<"\tNow press any key to continue ... ";
			getch();
			return;
		}

		int adminSignin() {
			system("cls");
			logo();
			borders();
			int i=0;
			char ch;
			string inputUsername,inputPassword,storedUsername,storedPassword;
			bool loginSuccess=false;

			SetConsoleTextAttribute(h,12);
			for(i=81;i<=125;i++){ // Horizontal
				gotoxy(i,27);
				cout<<"_";
			}
			for(i=80; i<=126; i++) { 
				gotoxy(i,30);
				printf("_");
			}
			for(i=80; i<=126; i++) {
				gotoxy(i,35);
				printf("_");
			}
			for(i=28; i<=35; i++) { //verticle
				gotoxy(80,i);
				printf("\xb3");
			}
			for(i=28; i<=35; i++) {
				gotoxy(126,i);
				printf("\xb3");
			}
			SetConsoleTextAttribute(h,10);
			gotoxy(90,29);
			cout<<"  ADMIN SIGNIN DASHBOARD";
			SetConsoleTextAttribute(h,6);
			gotoxy(83,32);
			cout<<"Enter Username : ";
			SetConsoleTextAttribute(h,10);
			cin.ignore();
			getline(cin,inputUsername);
			SetConsoleTextAttribute(h,6);
			gotoxy(83,34);
			cout<<"Enter Password : ";
			SetConsoleTextAttribute(h,10);
			while(true) {
				ch=_getch();
				if(ch=='\r') {
					cout<<endl;
					break;
				} else if(ch=='\b') {
					if(inputPassword.empty()) {
						cout<<"\b\b";
						inputPassword.pop_back();
					}
				} else {
					cout<<"*";
					inputPassword+=ch;
				}
			}

			ifstream adminCredetialsFile("Admin Credentials.txt");
			if(!adminCredetialsFile.is_open()) {
				cerr<<"Error: Unable to open the file."<<endl;
				return 0;
			}
			getline(adminCredetialsFile,storedUsername);
			getline(adminCredetialsFile,storedPassword);
			adminCredetialsFile.close();
			if(storedUsername==inputUsername && storedPassword==inputPassword) {
				system("cls");
				logo();
				borders();
				SetConsoleTextAttribute(h,12);

				for(i=80; i<=120; i++) { // Horizontal
					gotoxy(i,30);
					printf("_");
				}
				for(i=80; i<=120; i++) {
					gotoxy(i,35);
					printf("_");
				}

				for(i=31; i<=35; i++) { //verticle
					gotoxy(80,i);
					printf("\xb3");
				}
				for(i=31; i<=35; i++) {
					gotoxy(120,i);
					printf("\xb3");
				}

				SetConsoleTextAttribute(h,10);
				gotoxy(87,32);
				cout<<"Admin Login Successful";
				gotoxy(87,34);
				cout<<"Press any key to proceed";
				getch();
				adminDashboard();

			} else {
				system("cls");
				logo();
				borders();
				SetConsoleTextAttribute(h,12);

				for(i=80; i<=120; i++) { // Horizontal
					gotoxy(i,30);
					printf("_");
				}
				for(i=80; i<=120; i++) {
					gotoxy(i,33);
					printf("_");
				}

				for(i=31; i<=33; i++) { //verticle
					gotoxy(80,i);
					printf("\xb3");
				}
				for(i=31; i<=33; i++) {
					gotoxy(120,i);
					printf("\xb3");
				}
				gotoxy(97,32);
				cout<<"Failed"<<endl;
			}
			getch();
			return 0;
		}

		void adminDashboard() {
			system("cls");
			logo();
			borders();
			int choice,i=0;

			do {
				system("cls");
				logo();
				borders();
				SetConsoleTextAttribute(h,6);
				for(i=83; i<=122; i++) { // Horizontal
					gotoxy(i,23);
					printf("_");
				}
				for(i=82; i<=123; i++) {
					gotoxy(i,26);
					printf("_");
				}
				for(i=82; i<=123; i++) {
					gotoxy(i,41);
					printf("_");
				}
				for(i=24; i<=41; i++) { //verticle
					gotoxy(82,i);
					printf("\xb3");
				}
				for(i=24; i<=41; i++) {
					gotoxy(123,i);
					printf("\xb3");
				}

				gotoxy(87,25);
				SetConsoleTextAttribute(h,10);
				cout<<"WELLCOME TO THE ADMIN DASHBOARD";
				gotoxy(86,28);
				SetConsoleTextAttribute(h,12);
				cout<<"1. Add Item To Menu";
				gotoxy(86,30);
				cout<<"2. Update Item In Menu";
				gotoxy(86,32);
				cout<<"3. View Menu";
				gotoxy(86,34);
				cout<<"4. View All Orders";
				gotoxy(86,36);
				cout<<"5. View Profile";
				gotoxy(86,38);
				cout<<"6. Logout";
				gotoxy(86,40);
				cout<<"Enter You Choice : ";
				SetConsoleTextAttribute(h,10);
				cin>>choice;
				switch(choice) {
					case 1: {
						Admin::addItem();
						break;
					}
					case 2: {
						Admin::updateMenu();
						break;
					}
					case 3: {
						Admin::viewMenu();
						break;
					}
					case 4: {
						Admin::viewOrders();
						break;
					}
					case 5: {
						Admin::viewAdmin();
						break;
					}
					case 6: {
						system("cls");
						logo();
						borders();
						SetConsoleTextAttribute(h,12);
						for(i=82; i<=122; i++) { // Horizontal
							gotoxy(i,31);
							printf("_");
						}
						for(i=82; i<=122; i++) {
							gotoxy(i,34);
							printf("_");
						}
						for(i=32; i<=34; i++) { //verticle
							gotoxy(82,i);
							printf("\xb3");
						}
						for(i=32; i<=34; i++) {
							gotoxy(122,i);
							printf("\xb3");
						}
						SetConsoleTextAttribute(h,10);
						gotoxy(90,33);
						cout<<"You Are Logout...";
						break;
					}
					default: {
						system("cls");
						logo();
						borders();
						SetConsoleTextAttribute(h,12);
						for(i=82; i<=122; i++) { // Horizontal
							gotoxy(i,30);
							printf("_");
						}
						for(i=82; i<=122; i++) {
							gotoxy(i,35);
							printf("_");
						}
						for(i=31; i<=35; i++) { //verticle
							gotoxy(82,i);
							printf("\xb3");
						}
						for(i=31; i<=35; i++) {
							gotoxy(122,i);
							printf("\xb3");
						}
						SetConsoleTextAttribute(h,10);
						gotoxy(89,32);
						cout<<"You Entered Wrong Number";
						gotoxy(89,34);
						cout<<"Press Any Key To Enter Again";
						getch();
						break;
					}
				}
			} while(choice!=6);
			return;
		}

		void addItem() {
			int i=0;
			
			system("cls");
			logo();
			borders();
			SetConsoleTextAttribute(h,12);
			for(i=73; i<132; i++) {
				gotoxy(i,28);
				printf("_");
			}
			for(i=72; i<132; i++) {
				gotoxy(i,31);
				printf("_");
			}
			for(i=72; i<132; i++) {
				gotoxy(i,34);
				printf("_");
			}
			for(i=72; i<132; i++) {
				gotoxy(i,37);
				printf("_");
			}
			for(i=29; i<38; i++) {
				gotoxy(72,i);
				printf("\xb3");
			}
			for(i=29; i<38; i++) {
				gotoxy(132,i);
				printf("\xb3");
			}
			MenuItem item;
			gotoxy(75,30);
			SetConsoleTextAttribute(h,10);
			cout<<"Enter Item Name : ";
			cin.ignore();
			getline(cin, item.name);
			gotoxy(75,33);
			cout<<"Enter Item Price : ";
			cin>>item.price;
			gotoxy(75,36);
			cout<<"Enter Item Description : ";
			cin.ignore();
			getline(cin,item.description);

			vector<MenuItem> menu = MenuItem::loadMenu();
			menu.push_back(item);
			MenuItem::saveMenu(menu);
			system("cls");
			logo();
			borders();
			gotoxy(90,33);
			cout<<"Menu Added Successfully"<<endl;
			gotoxy(88,35);
			cout<<"Press Any Key to Continue ... ";
			getch();
		}

		void updateMenu() {
			system("cls");
			logo();
			borders();
			int i=0;
			SetConsoleTextAttribute(h,12);
			for(i=73; i<132; i++) {
				gotoxy(i,28);
				printf("_");
			}
			for(i=72; i<132; i++) {
				gotoxy(i,31);
				printf("_");
			}
			for(i=72; i<132; i++) {
				gotoxy(i,34);
				printf("_");
			}
			for(i=72; i<132; i++) {
				gotoxy(i,37);
				printf("_");
			}
			for(i=29; i<38; i++) {
				gotoxy(72,i);
				printf("\xb3");
			}
			for(i=29; i<38; i++) {
				gotoxy(132,i);
				printf("\xb3");
			}
			string name;
			gotoxy(75,30);
			SetConsoleTextAttribute(h,6);
			cout<<"Enter the name of Item to Update : ";
			SetConsoleTextAttribute(h,10);
			cin.ignore();
			getline(cin,name);
			vector<MenuItem> menu=MenuItem::loadMenu();
			bool found=false;
			for(auto& item : menu) {
				if(item.name==name) {
					system("cls");
					logo();
					borders();
					SetConsoleTextAttribute(h,12);
					for(i=73; i<132; i++) {
						gotoxy(i,28);
						printf("_");
					}
					for(i=72; i<132; i++) {
						gotoxy(i,31);
						printf("_");
					}
					for(i=72; i<132; i++) {
						gotoxy(i,34);
						printf("_");
					}
					for(i=72; i<132; i++) {
						gotoxy(i,37);
						printf("_");
					}
					for(i=29; i<38; i++) {
						gotoxy(72,i);
						printf("\xb3");
					}
					for(i=29; i<38; i++) {
						gotoxy(132,i);
						printf("\xb3");
					}
					gotoxy(75,30);
					SetConsoleTextAttribute(h,6);
					cout<<"Enter the name if Item to Update : ";
					SetConsoleTextAttribute(h,10);
					cout<<name;
					gotoxy(75,33);
					SetConsoleTextAttribute(h,6);
					cout<<"Enter New Price : ";
					SetConsoleTextAttribute(h,10);
					cin>>item.price;
					gotoxy(75,36);
					SetConsoleTextAttribute(h,6);
					cout<<"Enter New Description : ";
					SetConsoleTextAttribute(h,10);
					cin.ignore();
					getline(cin,item.description);
					found=true;
					break;
				}
			}
			if (found) {
				MenuItem::saveMenu(menu);
				system("cls");
				logo();
				borders();
				gotoxy(90,33);
				SetConsoleTextAttribute(h,10);
				cout<<"Item Updated Successfully"<<endl;
			} else {
				system("cls");
				logo();
				borders();
				gotoxy(90,33);
				SetConsoleTextAttribute(h,12);
				cout<<"Item not found"<<endl;
			}
		}

		void viewMenu() {
			int i=0;
			vector<MenuItem> menu= MenuItem::loadMenu();
			system("cls");
			logo();
			menuBorders();
			if(menu.empty()) {
				system("cls");
				logo();
				menuBorders();
				SetConsoleTextAttribute(h,12);
				for(i=82; i<=122; i++) { // Horizontal
					gotoxy(i,31);
					printf("_");
				}
				for(i=82; i<=122; i++) {
					gotoxy(i,34);
					printf("_");
				}
				for(i=32; i<=34; i++) { //verticle
					gotoxy(82,i);
					printf("\xb3");
				}
				for(i=32; i<=34; i++) {
					gotoxy(122,i);
					printf("\xb3");
				}
				gotoxy(90,33);
				cout<<"No Item In Menu ";
				return;
			}

			gotoxy(97,22);
			SetConsoleTextAttribute(h,6);
			cout<<"   Menu   ";
			SetConsoleTextAttribute(h,10);
			for(i=75; i<130; i++) {
				gotoxy(i,23);
				printf("_");
			}
			
			int k=25,l=28;
			
			for(size_t j=0; j<menu.size(); ++j) {
				SetConsoleTextAttribute(h,6);
				gotoxy(80,k);
				cout<<j+1<<".";
				SetConsoleTextAttribute(h,12);
				cout<<" Name : "<<menu[j].name<<endl;
				k++;
				gotoxy(82,k);
				cout<<" Price : "<<fixed<<setprecision(2)<<menu[j].price;
				k++;
				gotoxy(82,k);
				cout<<" Description : "<<menu[j].description<<endl<<endl;
				k+=3;
				SetConsoleTextAttribute(h,10);
				for(i=75; i<130; i++) {
					gotoxy(i,l);
					printf("_");
				}
				for(i=21; i<=l; i++) {
					gotoxy(75,i);
					printf("\xb3");
				}
				for(i=21; i<=l; i++) {
					gotoxy(130,i);
					printf("\xb3");
				}
				l+=5;
			}
			getch();
		}

		void viewAdmin() {
			int i=0;
			system("cls");
			logo();
			borders();
			SetConsoleTextAttribute(h,10);
			ifstream adminData("Admin Data.txt");
			string line;
			
			SetConsoleTextAttribute(h,10);
			for(i=75; i<130; i++) {
				gotoxy(i,23);
				printf("_");
			}
			for(i=21; i<48; i++) {
				gotoxy(75,i);
				printf("\xb3");
			}
			for(i=21; i<48; i++) {
				gotoxy(130,i);
				printf("\xb3");
			}
			
			SetConsoleTextAttribute(h,10);
			gotoxy(94,22);
			cout<<"ADMIN PROFILE";
			
			SetConsoleTextAttribute(h,12);
			getline(adminData,line);
			gotoxy(80,25);
			cout<<"Admin ID is : ";
			SetConsoleTextAttribute(h,10);
			cout<<line;
			SetConsoleTextAttribute(h,12);
			getline(adminData,line);
			gotoxy(80,27);
			cout<<"Admin Name is : ";
			SetConsoleTextAttribute(h,10);
			cout<<line;
			SetConsoleTextAttribute(h,12);
			getline(adminData,line);
			gotoxy(80,29);
			cout<<"Admin Address is : ";
			SetConsoleTextAttribute(h,10);
			cout<<line;
			SetConsoleTextAttribute(h,12);
			getline(adminData,line);
			gotoxy(80,31);
			cout<<"Admin Email is  ";
			SetConsoleTextAttribute(h,10);
			cout<<line;
			SetConsoleTextAttribute(h,12);
			getline(adminData,line);
			gotoxy(80,33);
			cout<<"Admin Phone Number is : ";
			SetConsoleTextAttribute(h,10);
			cout<<line;
			SetConsoleTextAttribute(h,12);
			getline(adminData,line);
			gotoxy(80,35);
			cout<<"Admin Gender is : ";
			SetConsoleTextAttribute(h,10);
			cout<<line;
			SetConsoleTextAttribute(h,12);
			getline(adminData,line);
			gotoxy(80,37);
			cout<<"Admin Role is : ";
			SetConsoleTextAttribute(h,10);
			cout<<line;
			SetConsoleTextAttribute(h,12);
			gotoxy(80,40);
			cout<<"Press any key to go back ... ";
			adminData.close();
			getch();
		}

		void viewOrders() {
			Order::viewAllOders();
		}
};

int Admin::adminID=0;

class Customer {
	private:
		static int custID;
		int c_ID=0,i=0;
		char ch;
		string c_name,c_username,c_password,c_PhNo,c_email,c_address,c_FoodPref,c_PayMethods,c_Gender;

	public:

		static int customerID() {
			return ++custID;
		}
		
//		Customer() {
//			c_name="Customer Name";
//			c_username="Customer Username";
//			c_password="Customer Password";
//			c_PhNo="03000000000";
//			c_email="customeremail@gmail.com";
//			c_address="Customer Address";
//			c_FoodPref="Vegetarian/NonVegetarian";
//			c_PayMethods="Cash/Card";
//			c_Gender="Customer Gender";
//		}

		void customerSignup() {
			system("cls");
			logo();
			borders();
			
			SetConsoleTextAttribute(h,10);
			for(i=75; i<130; i++) {
				gotoxy(i,23);
				printf("_");
			}
			for(i=21; i<48; i++) {
				gotoxy(75,i);
				printf("\xb3");
			}
			for(i=21; i<48; i++) {
				gotoxy(130,i);
				printf("\xb3");
			}

			SetConsoleTextAttribute(h,6);
			gotoxy(92,22);
			cout<<"CUSTOMER SIGNUP";
			SetConsoleTextAttribute(h,12);
			gotoxy(82,25);
			SetConsoleTextAttribute(h,12);
			cout<<"Your Customer ID is : ";
			SetConsoleTextAttribute(h,10);
			c_ID=customerID();
			cout<<c_ID;
			gotoxy(82,27);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Full Name : ";
			SetConsoleTextAttribute(h,10);
			cin.ignore();
			getline(cin,c_name);
			gotoxy(82,29);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Address : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,c_address);
			gotoxy(82,31);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Email : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,c_email);
			gotoxy(82,33);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Phone Number : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,c_PhNo);
			gotoxy(82,35);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Gender : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,c_Gender);
			gotoxy(82,37);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Food Prefrences : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,c_FoodPref);
			gotoxy(82,39);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Payment Method : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,c_PayMethods);
			gotoxy(82,41);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Username : ";
			SetConsoleTextAttribute(h,10);
			getline(cin,c_username);
			gotoxy(82,43);
			SetConsoleTextAttribute(h,12);
			cout<<"Enter Password : ";
			SetConsoleTextAttribute(h,10);
			while(true) {
				ch=_getch();
				if(ch=='\r') {
					cout<<endl;
					break;
				} else if(ch=='\b') {
					if(c_password.empty()) {
						cout<<"\b\b";
						c_password.pop_back();
					}
				} else {
					cout<<"*";
					c_password+=ch;
				}
			}

			ofstream customerCredentials("Customer Credencials.txt",ios::app);
			customerCredentials<<c_username<<endl<<c_password<<endl<<endl;
			customerCredentials.close();

			ofstream customerData("Customer Data.txt",ios::app);
			customerData<<c_ID<<endl<<c_name<<endl<<c_address<<endl<<c_email<<endl<<c_PhNo<<endl<<c_Gender<<endl<<c_FoodPref<<endl<<c_PayMethods<<endl<<endl<<endl;
			customerData.close();

			system("cls");
			logo();
			borders();
			gotoxy(78,32);
			SetConsoleTextAttribute(h,6);
			cout<<"\x1 ";
			SetConsoleTextAttribute(h,12);
			cout<<"Your Customer account has been successfully created ";
			SetConsoleTextAttribute(h,6);
			cout<<"\x1"<<endl;
			gotoxy(80,33);
			SetConsoleTextAttribute(h,12);
			cout<<"\tNow press any key to continue ... ";
			getch();
			return;
		}

		void customerSignin() {
			system("cls");
			logo();
			borders();
			int i=0;
			char ch;
			string inputUsername,inputPassword,storedUsername,storedPassword;
			bool loginSuccess=false;

			SetConsoleTextAttribute(h,12);
			for(i=81;i<=125;i++){ // Horizontal
				gotoxy(i,27);
				cout<<"_";
			}
			for(i=80; i<=126; i++) { 
				gotoxy(i,30);
				printf("_");
			}
			for(i=80; i<=126; i++) {
				gotoxy(i,35);
				printf("_");
			}
			for(i=28; i<=35; i++) { //verticle
				gotoxy(80,i);
				printf("\xb3");
			}
			for(i=28; i<=35; i++) {
				gotoxy(126,i);
				printf("\xb3");
			}
			SetConsoleTextAttribute(h,10);
			gotoxy(90,29);
			cout<<"CUSTOMER SIGNIN DASHBOARD";
			SetConsoleTextAttribute(h,6);
			gotoxy(83,32);
			cout<<"Enter Username : ";
			SetConsoleTextAttribute(h,10);
			cin.ignore();
			getline(cin,inputUsername);
			SetConsoleTextAttribute(h,6);
			gotoxy(83,34);
			cout<<"Enter Password : ";
			SetConsoleTextAttribute(h,10);
			while(true) {
				ch=_getch();
				if(ch=='\r') {
					cout<<endl;
					break;
				} else if(ch=='\b') {
					if(inputPassword.empty()) {
						cout<<"\b\b";
						inputPassword.pop_back();
					}
				} else {
					cout<<"*";
					inputPassword+=ch;
				}
			}

			ifstream customerCredencials("Customer Credencials.txt");
			if(!customerCredencials.is_open()) {
				cerr<<"Error: Unable to open the file."<<endl;
				return;
			}
			while(getline(customerCredencials,storedUsername),getline(customerCredencials,storedPassword)) {
				customerCredencials.close();
				if(storedUsername==inputUsername && storedPassword==inputPassword) {
					system("cls");
					logo();
					borders();
					SetConsoleTextAttribute(h,12);
					for(i=82; i<=122; i++) { // Horizontal
						gotoxy(i,30);
						printf("_");
					}
					for(i=82; i<=122; i++) {
						gotoxy(i,35);
						printf("_");
					}
					for(i=31; i<=35; i++) { //verticle
						gotoxy(82,i);
						printf("\xb3");
					}
					for(i=31; i<=35; i++) {
						gotoxy(122,i);
						printf("\xb3");
					}
					SetConsoleTextAttribute(h,10);
					gotoxy(89,32);
					cout<<"Customer Login Successful";
					gotoxy(89,34);
					cout<<"Press any key to proceed";
					getch();
					customerDashboard();
				} else {
					system("cls");
					logo();
					borders();
					SetConsoleTextAttribute(h,12);
					for(i=80; i<=120; i++) { // Horizontal
						gotoxy(i,30);
						printf("_");
					}
					for(i=80; i<=120; i++) {
						gotoxy(i,33);
						printf("_");
					}
					for(i=31; i<=33; i++) { //verticle
						gotoxy(80,i);
						printf("\xb3");
					}
					for(i=31; i<=33; i++) {
						gotoxy(120,i);
						printf("\xb3");
					}
					gotoxy(97,32);
					cout<<"Failed"<<endl;
				}
				getch();
				break;

			}
			return;
		}

		void customerDashboard() {
			int choice;
			do {
				system("cls");
				logo();
				borders();
				SetConsoleTextAttribute(h,6);
				for(i=82; i<=122; i++) { // Horizontal
					gotoxy(i,23);
					printf("_");
				}
				for(i=82; i<=122; i++) {
					gotoxy(i,26);
					printf("_");
				}
				for(i=82; i<=122; i++) {
					gotoxy(i,39);
					printf("_");
				}
				for(i=24; i<=39; i++) { //verticle
					gotoxy(82,i);
					printf("\xb3");
				}
				for(i=24; i<=39; i++) {
					gotoxy(122,i);
					printf("\xb3");
				}

				gotoxy(87,25);
				SetConsoleTextAttribute(h,10);
				cout<<"WELLCOME TO THE CUSTOMER DASHBOARD";
				gotoxy(86,28);
				SetConsoleTextAttribute(h,12);
				cout<<"1. View Menu";
				gotoxy(86,30);
				cout<<"2. Place Order";
				gotoxy(86,32);
				cout<<"3. View Orders";
				gotoxy(86,34);
				cout<<"4. View Profile";
				gotoxy(86,36);
				cout<<"5. Logout";
				gotoxy(86,38);
				cout<<"Enter You Choice : ";
				SetConsoleTextAttribute(h,10);
				cin>>choice;
				switch(choice) {
					case 1: {
						Customer::viewMenu();
						getch();
						break;
					}
					case 2: {
						Customer::placeOrder();
						break;
					}
					case 3: {
						Customer::viewOrders();
						break;
					}
					case 4: {
						//Admin::viewAdmin();
						break;
					}
					case 5: {
						system("cls");
						logo();
						borders();
						SetConsoleTextAttribute(h,12);
						for(i=82; i<=122; i++) { // Horizontal
							gotoxy(i,31);
							printf("_");
						}
						for(i=82; i<=122; i++) {
							gotoxy(i,34);
							printf("_");
						}
						for(i=32; i<=34; i++) { //verticle
							gotoxy(82,i);
							printf("\xb3");
						}
						for(i=32; i<=34; i++) {
							gotoxy(122,i);
							printf("\xb3");
						}
						SetConsoleTextAttribute(h,10);
						gotoxy(90,33);
						cout<<"You Are Logout...";
						break;
					}
					default: {
						system("cls");
						logo();
						borders();
						SetConsoleTextAttribute(h,12);
						for(i=82; i<=122; i++) { // Horizontal
							gotoxy(i,30);
							printf("_");
						}
						for(i=82; i<=122; i++) {
							gotoxy(i,35);
							printf("_");
						}
						for(i=31; i<=35; i++) { //verticle
							gotoxy(82,i);
							printf("\xb3");
						}
						for(i=31; i<=35; i++) {
							gotoxy(122,i);
							printf("\xb3");
						}
						SetConsoleTextAttribute(h,10);
						gotoxy(89,32);
						cout<<"You Entered Wrong Number";
						gotoxy(89,34);
						cout<<"Press Any Key To Enter Again";
						getch();
						break;
					}
				}
			} while(choice!=5);
			return;
		}

		void viewMenu() {
			vector<MenuItem> menu= MenuItem::loadMenu();
			system("cls");
			logo();
			menuBorders();
			if(menu.empty()) {
				system("cls");
				logo();
				menuBorders();
				SetConsoleTextAttribute(h,12);
				for(i=82; i<=122; i++) { // Horizontal
					gotoxy(i,31);
					printf("_");
				}
				for(i=82; i<=122; i++) {
					gotoxy(i,34);
					printf("_");
				}
				for(i=32; i<=34; i++) { //verticle
					gotoxy(82,i);
					printf("\xb3");
				}
				for(i=32; i<=34; i++) {
					gotoxy(122,i);
					printf("\xb3");
				}
				gotoxy(84,33);
				cout<<"No Item avalaible in the Menu. Please try Later ";
				getch();
				return;
			}

			gotoxy(97,22);
			SetConsoleTextAttribute(h,6);
			cout<<"   Menu   ";
			SetConsoleTextAttribute(h,10);
			for(i=75; i<130; i++) {
					gotoxy(i,23);
					printf("_");
				}
				
			int k=25,l=28;
			for(size_t j=0; j<menu.size(); ++j) {
				gotoxy(80,k);
				SetConsoleTextAttribute(h,6);
				cout<<j+1<<".";
				SetConsoleTextAttribute(h,12);
				cout<<" Name : ";
				SetConsoleTextAttribute(h,10);
				cout<<menu[j].name;
				k++;
				gotoxy(82,k);
				SetConsoleTextAttribute(h,12);
				cout<<" Price : ";
				SetConsoleTextAttribute(h,10);
				cout<<fixed<<setprecision(2)<<menu[j].price<<endl;
				k++;
				gotoxy(82,k);
				SetConsoleTextAttribute(h,12);
				cout<<" Description : ";
				SetConsoleTextAttribute(h,10);
				cout<<menu[j].description;
				k+=3;
				SetConsoleTextAttribute(h,10);
				for(i=75; i<130; i++) {
					gotoxy(i,l);
					printf("_");
				}
				for(i=21; i<=l; i++) {
					gotoxy(75,i);
					printf("\xb3");
				}
				for(i=21; i<=l; i++) {
					gotoxy(130,i);
					printf("\xb3");
				}
				l+=5;
			}
			getch();
		}

		void placeOrder() {
			vector<MenuItem> menu=MenuItem::loadMenu();
			if(menu.empty()) {
				system("cls");
				logo();
				borders();
				SetConsoleTextAttribute(h,12);
				for(i=76; i<=129; i++) { // Horizontal
					gotoxy(i,31);
					printf("_");
				}
				for(i=75; i<=130; i++) {
					gotoxy(i,34);
					printf("_");
				}
				for(i=32; i<=34; i++) { //verticle
					gotoxy(75,i);
					printf("\xb3");
				}
				for(i=32; i<=34; i++) {
					gotoxy(130,i);
					printf("\xb3");
				}
				gotoxy(79,33);
				cout<<"No Item avalaible in the Menu. Please try Later";
				getch();
				return;
			}

			vector<pair<MenuItem,int>> cart;
			string itemName;
			int quantity,k=25;
			double total=0.0;
			
			system("cls");
			logo();
			menuBorders();
			gotoxy(75,22);
			cout<<"Enter the name of the item you want to add to your cart (or Type done to finish )";
			while(true) {
				gotoxy(75,k);
				cout<<"Item Name : ";
				cin.ignore();
				getline(cin, itemName);
				if(itemName =="done") {
					break;
				}
				bool found=false;
				for(const auto& item : menu) {
					if(item.name == itemName) {
						k++;
						gotoxy(75,k);
						cout<<"Enter Quantity : ";
						cin>>quantity;
						cart.emplace_back(item,quantity);
						total+=item.price*quantity;
						k+=2;
						gotoxy(75,k);
						cout<<quantity<<" X "<<item.name<<" added to your cart"<<endl;
						found=true;
						k++;
						break;
					}
				}
				if(!found) {
					system("cls");
					logo();
					menuBorders();
					k++;
					gotoxy(75,k);
					cout<<"Item not found. Please enter a valid item name"<<endl;
				}
			}
                 
			int orderId=Order::generateOrderId();
			Order::saveOrder(orderId,cart,total);

			if(!cart.empty()) {
				system("cls");
				logo();
				menuBorders();
				SetConsoleTextAttribute(h,6);
				for(i=80;i<126;i++){
					gotoxy(i,23);
					cout<<"_";
				}
				SetConsoleTextAttribute(h,10);
				gotoxy(97,22);
				cout<<"YOUR CART";
				k=25;
				for(const auto& pair : cart) {

					const auto& item = pair.first;
					const auto& qty = pair.second;
					
					gotoxy(90,k);
					cout<<"Name : "<<item.name;
					k++;
					gotoxy(90,k);
					cout<<"Price : "<<fixed<<setprecision(2)<<item.price;
					k++;
					gotoxy(90,k);
					cout<<"Quanatity : "<<qty;
					k++;
				}
				SetConsoleTextAttribute(h,6);
				for(i=80;i<126;i++){
					gotoxy(i,k);
					cout<<"_";
				}
				SetConsoleTextAttribute(h,10);
				k+=2;
				gotoxy(90,k);
				cout<<"Total : "<<fixed<<setprecision(2)<<total<<endl<<endl;
				k++;
				gotoxy(90,k);
				cout<<"Order placed successfully "<<endl;
				k+=2;
				SetConsoleTextAttribute(h,12);
				for(i=80;i<126;i++){
					gotoxy(i,k);
					cout<<"_";
				}
				for(i=21;i<=k;i++){
					gotoxy(80,i);
					cout<<"\xb3";
				}
				for(i=21;i<=k;i++){
					gotoxy(126,i);
					cout<<"\xb3";
				}
				SetConsoleTextAttribute(h,10);
				
			} else {
				k++;
				gotoxy(85,33);
				cout<<"No item in the cart. order not placed"<<endl;
			}
			getch();
		}

		void viewOrders() {
			Order::viewCustomerOrder();
		}
};

int Customer::custID=0;



int main() {
	int i=0,choice,ch1,ch2,ch3;
	char ch4;
	system("cls");
	loading();
	system("cls");
	logo();
	borders();
	Admin admin;
	Customer customer;
	SetConsoleTextAttribute(h,6);
	for(i=82; i<=122; i++) { // Horizontal
		gotoxy(i,25);
		//Sleep(30);
		printf("\xF0");
	}
	for(i=82; i<=122; i++) {
		gotoxy(i,28);
		//Sleep(30);
		printf("_");
	}
	for(i=82; i<=122; i++) {
		gotoxy(i,31);
		//Sleep(30);
		printf("_");
	}
	for(i=82; i<=122; i++) {
		gotoxy(i,34);
		//Sleep(30);
		printf("_");
	}
	for(i=82; i<=122; i++) {
		gotoxy(i,37);
		///Sleep(30);
		printf("_");
	}
	for(i=82; i<=122; i++) {
		gotoxy(i,40);
		//Sleep(30);
		printf("_");
	}
	for(i=82; i<=122; i++) {
		gotoxy(i,44);
		//Sleep(3);
		printf("\xf0");
	}
	for(i=26; i<=43; i++) { //verticle
		gotoxy(82,i);
		//Sleep(30);
		printf("\xb3");
	}
	for(i=26; i<=43; i++) {
		gotoxy(122,i);
		//Sleep(30);
		printf("\xb3");
	}

	SetConsoleTextAttribute(h,10);
	gotoxy(92,27);
	cout<<"RESTURANT DASHBOARD";
	SetConsoleTextAttribute(h,12);
	gotoxy(85,30);
	printf("1. Sign Up");
	gotoxy(85,33);
	printf("2. Sign In");
	gotoxy(85,36);
	printf("3. Help");
	gotoxy(85,39);
	printf("4. Quite");
	gotoxy(85,42);
	printf("Type Your Choice Press Enter : ");
	SetConsoleTextAttribute(h,10);
	cin>>choice;

	switch(choice) {
		case 1: {
			system("cls");
			logo();
			borders();
			
			SetConsoleTextAttribute(h,6);
			for(i=82; i<=122; i++) { // Horizontal
				gotoxy(i,25);
				//Sleep(30);
				printf("\xF0");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,28);
				//Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,31);
				//Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,34);
				//Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,37);
				///Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,41);
				//Sleep(3);
				printf("\xf0");
			}
			for(i=26; i<=40; i++) { //verticle
				gotoxy(82,i);
				//Sleep(30);
				printf("\xb3");
			}
			for(i=26; i<=40; i++) {
				gotoxy(122,i);
				//Sleep(30);
				printf("\xb3");
			}
		
			SetConsoleTextAttribute(h,10);
			gotoxy(94,27);
			cout<<"SIGNUP DASHBOARD";
			SetConsoleTextAttribute(h,12);
			gotoxy(85,30);
			printf("1. Sign Up as ADMIN");
			gotoxy(85,33);
			printf("2. Sign UP as CUSTOMER");
			gotoxy(85,36);
			printf("3. Back");
			gotoxy(85,39);
			printf("Type Your Choice Press Enter : ");
			SetConsoleTextAttribute(h,10);
			cin>>ch1;
			switch(ch1) {
				case 1: {
					admin.adminSignup();
					system("cls");
					main();
				}
				break;
				case 2: {
					customer.customerSignup();
					system("cls");
					main();
				}
				break;
				case 3: {
					system("cls");
					main();
				}
				break;
				default: {
					cout<<"Enter valid Choice ";
				}
			}
		}
		break;
		case 2: {
			system("cls");
			logo();
			borders();
			SetConsoleTextAttribute(h,6);
			for(i=82; i<=122; i++) { // Horizontal
				gotoxy(i,25);
				//Sleep(30);
				printf("\xF0");
			}
			
			for(i=82; i<=122; i++) {
				gotoxy(i,28);
				//Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,31);
				//Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,34);
				//Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,37);
				///Sleep(30);
				printf("_");
			}
			for(i=82; i<=122; i++) {
				gotoxy(i,41);
				//Sleep(3);
				printf("\xf0");
			}
			for(i=26; i<=40; i++) { //verticle
				gotoxy(82,i);
				//Sleep(30);
				printf("\xb3");
			}
			for(i=26; i<=40; i++) {
				gotoxy(122,i);
				//Sleep(30);
				printf("\xb3");
			}
	
			SetConsoleTextAttribute(h,10);
			gotoxy(94,27);
			cout<<"SIGNIN DASHBOARD";
			SetConsoleTextAttribute(h,12);
			gotoxy(85,30);
			printf("1. Sign In as ADMIN");
			gotoxy(85,33);
			printf("2. Sign In as a CUSTOMER");
			gotoxy(85,36);
			printf("3. Back");
			gotoxy(85,39);
			printf("Type Your Choice Press Enter : ");
			SetConsoleTextAttribute(h,10);
			cin>>ch1;
			switch(ch1) {
				case 1: {
					admin.adminSignin();
					system("cls");
					main();
				}
				break;
				case 2: {
					system("cls");
					customer.customerSignin();
					main();
				}
				break;
				case 3: {
					system("cls");
					main();
				}
				break;
				default: {
					system("cls");
					logo();
					borders();
					SetConsoleTextAttribute(h,10);
					gotoxy(90,30);
					cout<<"Invalid Credientials"<<endl;
					gotoxy(86,33);
					cout<<"Press Any Key To Enter Again "<<endl;
					getch();
					system("cls");
					main();
				}
			}
		}
		break;
		case 3: {
			help();
			system("cls");
			main();
		}
		break;
		case 4: {
			system("cls");
			logo();
			borders();
			SetConsoleTextAttribute(h,10);
			gotoxy(90,30);
			cout<<"Do you want to exit"<<endl;
			gotoxy(86,33);
			cout<<"Press Y for 'Yes' & N for 'No' : ";
			cin>>ch4;
			if(ch4=='y'||ch4=='Y') {
				exit(0);
			} else if(ch4=='n'||ch4=='N') {
				system("cls");
				main();
			} else {
				SetConsoleTextAttribute(h,10);
				gotoxy(86,36);
				cout<<"Press the desired key : "<<endl;
				while(ch4!='y'||ch4!='Y'||ch4!='n'||ch4!='N') {
					system("cls");
					logo();
					borders();
					SetConsoleTextAttribute(h,10);
					gotoxy(90,30);
					cout<<"Do you want to exit"<<endl;
					gotoxy(90,33);
					cout<<"Press Y for 'Yes' & N for 'No' : ";
					cin>>ch4;
					if(ch4=='y'||ch4=='Y') {
						exit(0);
					} else if(ch4=='n'||ch4=='N') {
						system("cls");
						main();
					} else {
						SetConsoleTextAttribute(h,10);
						gotoxy(86,36);
						cout<<"Press the desired key : ";
						cin>>ch4;
					}
				}
			}
		}
		break;
		default: {
			system("cls");
			logo();
			borders();
			SetConsoleTextAttribute(h,10);
			gotoxy(90,30);
			cout<<"Invalid Credientials"<<endl;
			gotoxy(86,33);
			cout<<"Press Any Key To Enter Again "<<endl;
			getch();
			system("cls");
			main();
		}
	}
	getch();
	return 0;
}