#include<iostream>
#include<conio.h> // just use for getch();
#include<windows.h> // just for Sleep Function
#include<string>
#include<limits> // to use numeric_limits

using namespace std; //standard library file
// User-Defined data type for passengers

// All functions which i used in this Project
void welcome(); // for the welcome screen
void loading(); // for the loading screen
void process(); // for the process screen
void exit(); // for the exit screen
int menu(); // for the menu of the system
void user_panel(); // for the user panel
void edit_flights(); // for the admin panel
void login(); // for the login of the user
void signUp(); // for the sign up of the user
bool edit_userdata(); // for the edit the user data
void forgot_password(); // for the reset the password
void admin_panel(); // for the admin panel
void schedule(); // for the schedule of the flights
void receipt(); // for the receipt generation
void cancel_ticket(); // for the cancel the ticket
void reserve_seat(); // for the reserve the seat
void discount(); // for the discount
void about(); // for the about of the system
void user_manual(); // for the user manual of the system

// Global Variables
bool check_login_status = false;
const int n=3; // number of flights
const int users = 10; // number of users of the system
int count = 0; // for counting the number of passengers
int reserved_seats = 0; // for counting the number of reserved seats
string from; // for the from city of the flight like Lahore
// number of flights
bool schedule_set = false; // for checking the schedule status

// data type for the users
struct users_collection{
    string mail, user_name, password;
};

// receipt generation function 

// data type for the passengers
struct passenger{
	string name,address,passport,cnic,phone_no,seat_type,flight_no,date_of_flight,destination;
	int payment,discounts; 
};

// data type for the flights
struct plan{
	string date,from,to,timing,airline;
	int total_seats;
};
plan flights[n];


// array for the user
users_collection users_data[users]; // for the collection of users data, declare a array

	const int seat = 10; //Number of Passenger
	// passenger data[seat]; // for the collection of passengers data, declare a array
passenger p[100]; // array of passengers 100 passengers can be stored
// welcome function
void welcome(){
    system("cls");
    system("color C"); // for the color of the text
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t*************************************************************************************************\n";
	cout<<"\t\t\t\t\t^^|+|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                           	                                    |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                           		                            |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                           		                            |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                           	                                    |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                           	                                    |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                           		                            |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                       WELCOME  TO                                     |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                          (-_-)                                        |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                 AIRLINE Ticketing SYSTEM                              |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                     Developed By:                     |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                 Mubashar Ghazi        |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|                                                                                       |+|^^\n";
	cout<<"\t\t\t\t\t^^|+|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|+|^^\n";
	cout<<"\t\t\t\t\t*************************************************************************************************\n\n\n\n\t\t\t\t\t";
	
}
// Loading Function
void loading(){
	// Adding Some Visuals for the GUI
	// Sleep function is used to Pause of Screen for some Intervals
	system("cls");
	// system("pause");
	system("color A");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t ****************************~~Loading~~**************************\n"<<endl;
	cout<< "\t\t\t\t\t\t Loading |||||||                                                 | 17% ....";
	Sleep(500);
	system("cls");
	system("color C");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t ****************************~~Loading~~**************************\n"<<endl;
	cout<< "\t\t\t\t\t\t Loading |||||||||||||||||||                                     | 47% ....";
	Sleep(630);
	system("color B");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t ****************************~~Loading~~**************************\n"<<endl;
	cout<< "\t\t\t\t\t\t Loading |||||||||||||||||||||||||||||||||                       | 61% ....";
	Sleep(570);
	system("cls");
	system("color C");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t ****************************~~Loading~~**************************\n"<<endl;
	cout<< "\t\t\t\t\t\t Loading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
	Sleep(470);
	system("cls");
	system("color D");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t ****************************~~Loading~~**************************\n"<<endl;
	cout<< "\t\t\t\t\t\t Loading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
	Sleep(580);
}	

void process(){
	// Adding Some Visuals for the GUI
	system("pause");
	system("cls");
	system("color A");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Please Wait for a moment...\n"<<endl;
	cout<< "\t\t\t\t\t\t Processing <<<|||||||                                                 |>>> 17% ....";
	Sleep(500);
	system("cls");
	system("color C");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Please Wait for a moment...\n"<<endl;
	cout<< "\t\t\t\t\t\t Processing <<<|||||||||||||||||||                                     |>>> 47% ....";
	Sleep(630);
	system("color B");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Please Wait for a moment...\n"<<endl;
	cout<< "\t\t\t\t\t\t Processing <<<|||||||||||||||||||||||||||||||||                       |>>> 61% ....";
	Sleep(570);
	system("cls");
	system("color C");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Please Wait for a moment...\n"<<endl;
	cout<< "\t\t\t\t\t\t Processing <<<||||||||||||||||||||||||||||||||||||||||||||||||        |>>> 95% ....";
	Sleep(470);
	system("cls");
	system("color D");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Please Wait for a moment...\n"<<endl;
	cout<< "\t\t\t\t\t\t Proceesing <<<|||||||||||||||||||||||||||||||||||||||||||||||||||||||||>>> 100% ....\n";
	Sleep(580);
	cout<<endl<<"\t\t\t\t\t\t\t";
	system("cls");
}
// Menu Function
int menu(){ // function for the menu of the system
	
    int choice; // for the choice of the user
    system("cls");
    system("color B");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\n\n\n\n\t\t\t\t\t\t  *******************************************************************    \n";
    cout<<"\t\t\t\t\t\t  ***********************~~~~~~MAIN MENU~~~~*************************    \n";
    cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
    cout<<"\t\t\t\t\t\t  ****                   <1>~ User Panel                         ****    \n";
	cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <2>~ Flight Schedule                    ****    \n";
	cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <3>~ Seat Reservation                   ****    \n";
	cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <4>~ Cancel your Ticket                 ****    \n";
	cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <5>~ Know About Discount                ****    \n";
    cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
    cout<<"\t\t\t\t\t\t  ****                   <6>~ Generate Receipt                   ****    \n";
	cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <7>~ User Manual of system              ****    \n";
	cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <8>~ Admin Panel                        ****    \n";
    cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <9>~ About                              ****    \n";
    cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
	cout<<"\t\t\t\t\t\t  ****                   <10>~ Exit                               ****    \n";
	cout<<"\t\t\t\t\t\t  ****                                                           ****    \n";
    cout<<"\t\t\t\t\t\t  *******************************************************************    \n";
    cout<<"\t\t\t\t\t\t  *******************************************************************    \n";
    cout<<"\t\t\t\t\t\t__________________----------------------------_________________________\n";
	cin>>choice;
	
	return choice;
}

void user_panel(){

    string option;
    while (true) {

        cout << "\n\n\n\n\n\n\t\t\t\t~~~~~Welcome to the User Panel~~~~~~    " << endl;
        cout<<"\t\t\t\t******************************************************************** \n";
        cout << "\t\t\t\t <1>~ Type 'login'  to login to your account. " << endl;
        cout << "\t\t\t\t <2>~ Type 'signup' to create a new account   " << endl;
        cout << "\t\t\t\t <3>~ Type 'edit'   to edit your account      " << endl;
        cout << "\t\t\t\t <4>~ Type 'forgot' to reset your password    " << endl;
        cout << "\t\t\t\t <5>~ Type 'exit'   to exit the program       " << endl;
        cin >> option;
        // if the user wants to login
        if (option == "login" || option == "1") {
			login();
        } else if (option == "signup" || option == "2") { // if the user wants to sign up
			signUp();
        } else if (option == "edit" || option == "3") { // if the user wants to edit the data
            edit_userdata();
        }else if (option == "exit" || option == "5") { // if the user wants to exit
            if(check_login_status == true){
            cout << "Thank You for using our system! " << endl;
            break;	
			}else {
				cout<<"You Must have to login first!"<<endl;
				continue;
			}
        }else if(option=="forgot" || option == "4"){ // if the user wants to reset the password
            check_login_status = true;
			forgot_password();
        }else{ // if the user enters the wrong option
            cout << "Invalid Option! " << endl;
        }
    }
}

void reserve_seat() {
    int discount = 0, age;

    while (true) {
    system("cls");
    system("color D");
    cout<<"\n\n\n\n\t\t\t\t\t\t*******************~~Registration for Your Seat Reservation~~************************"<<endl;
	cout<<"\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~Be Careful before Providing Your Information~~~~~~~~~~~~~~~~~~~~\n"<<endl;	
    cin.ignore();
    cout<<"\t\t\t\t\t\tEnter your name: "; getline(cin,p[reserved_seats].name);
    cout<<"\t\t\t\t\t\tEnter your address: "; getline(cin,p[reserved_seats].address);
    cout<<"\t\t\t\t\t\tEnter your passport number: "; getline(cin,p[reserved_seats].passport);
    cout<<"\t\t\t\t\t\tEnter your CNIC number: "; getline(cin,p[reserved_seats].cnic);
    cout<<"\t\t\t\t\t\tEnter your phone number: "; getline(cin,p[reserved_seats].phone_no);
    cout<<"\t\t\t\t\t\tEnter your seat type: "; 
    
    // payment of the seat
    while (true) {
        cout << "\n\t\t\t\t\t\t 1. Business Class  Type BS" << endl;
        cout << "\t\t\t\t\t\t 2. Economy Class  Type EC" << endl;
        cout << "\t\t\t\t\t\t 3. Middle Class  Type MC" << endl;

        cout << "Enter the seat type (BS/EC/MC or 1/2/3): ";
        cin >> p[reserved_seats].seat_type;

        if (p[reserved_seats].seat_type == "BS" || p[reserved_seats].seat_type == "bs" || p[reserved_seats].seat_type == "1") {
            p[reserved_seats].payment = 50000;
            break;
        } else if (p[reserved_seats].seat_type == "EC" || p[reserved_seats].seat_type == "ec" || p[reserved_seats].seat_type == "2") {
            p[reserved_seats].payment = 30000;
            break;
        } else if (p[reserved_seats].seat_type == "MC" || p[reserved_seats].seat_type == "mc" || p[reserved_seats].seat_type == "3") {
            p[reserved_seats].payment = 20000;
            break;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Input! Please enter a valid seat type." << endl;
        }
    }

    cin.ignore();
    cout<<"Enter your flight number: "; getline(cin,p[reserved_seats].flight_no);
    cout<<"Enter your date of flight: "; getline(cin,p[reserved_seats].date_of_flight);
    cout<<"Enter your destination: "; getline(cin,p[reserved_seats].destination);
    cout<<"Your payment is: "<<p[reserved_seats].payment<<endl;
    cout<<endl;

        while (true) {
            cout << "If you want to get a discount, press 1; otherwise, press 0: ";
            cin >> discount;

            if (cin.fail() || (discount != 0 && discount != 1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Input! Please enter either 0 or 1." << endl;
            } else {
                break;
            }
        }

        
    if(discount==1){
    	cout<<"How much your age is: ";
        cin>>age;
    while(true){
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Invalid Input! Please enter a valid age."<<endl;
            cin>>age;
        }else{
            break;
        }
        }
     if(age>=60){
        	cout<<"You have 45% discount"<<endl;
            p[reserved_seats].discounts = 45;
        }else if(age>=40 && age<60){
        	cout<<"You have 15% discount"<<endl;
            p[reserved_seats].discounts = 15;
            cout<<"Are you Govt Employee?: (y/n)";
            char govt_employee;
            cin>>govt_employee;
            if(govt_employee=='y'){
                cout<<"You have 5% more discount"<<endl;
                p[reserved_seats].discounts = 15+5;
            }else{
                cout<<"You are not able to get more 5% discount"<<endl;
            }
        }else if(age>=20 && age<40){
            cout<<"You have 10% discount"<<endl;
            p[reserved_seats].discounts = 10;
            cout<<"Are you a student?: (y/n)\n";
            char student;
            cin>>student;
            if(student=='y'){
                cout<<"You have 10%  more discount"<<endl;
                p[reserved_seats].discounts = 10+10;
            }else{
                cout<<"You are not able to get more 10% discount"<<endl;
            }
        	
        }else{
            cout<<"You have 5% discount"<<endl;
            p[reserved_seats].discounts = 5;
        }   
        
    }else{
        cout<<"You have no discount"<<endl;
    }

        cout << "\t\t\t\t You have " << p[reserved_seats].discounts << "% Discount." << endl;
        cout << "\t\t\t\t Your have to pay: " << p[reserved_seats].payment - (p[reserved_seats].payment * p[reserved_seats].discounts / 100) << endl;
        cout << "Seat is reserved! Congratulations" << endl;
        cout << "\t\t\t\t Your seat number is: " << reserved_seats + 1 << endl;
        cin.ignore();

        cout << "Did you want to reserve more seats? (y/n): ";
        char choice;
        cin >> choice;

        while (true) {
            if (choice != 'n' && choice != 'y') {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Input! Please enter either 'y' or 'n'." << endl;
                cin >> choice; // Read the input again after invalid input
            } else {
                break;
            }
        }

        if (choice == 'n') {
            break;
        }

        reserved_seats++;
    }
    cout << endl;
}

void cancel_ticket() {
    string cnic, name;
    cin.ignore();
    system("cls");
    system("color D");

    cout<<"\n\n\n\n\t\t\t\t\t\t*******************~~Cancellation of Your Seat Reservation~~************************"<<endl;
    cout<<"\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~|||||----)~Kindly Enter Your Information~(----|||||~~~~~~~~~~~~~~~~~~~~\n"<<endl;

    cout << "Enter your seat number (CNIC): ";
    getline(cin, cnic);
    cout << "Enter your name: ";
    getline(cin, name);

    bool ticketFound = false;

    for (int i = 0; i <= reserved_seats; i++) {
        if (cnic == p[i].cnic && name == p[i].name) {
            // Clearing the ticket information
            p[i].name = "";
            p[i].address = "";
            p[i].passport = "";
            p[i].cnic = "";
            p[i].phone_no = "";
            p[i].seat_type = "";
            p[i].flight_no = "";
            p[i].date_of_flight = "";
            p[i].destination = "";
            p[i].payment = 0;
            p[i].discounts = 0;

            // Decrementing the reserved seats
            reserved_seats--;

            // Shifting the remaining tickets to fill the gap
            for (int j = i; j <= reserved_seats; j++) {
                p[j] = p[j + 1];
            }

            cout << "Your seat is canceled!" << endl;
            ticketFound = true;
            break;
        }
    }

    if (!ticketFound) {
        cout << "Record not found!" << endl;
    }
}

void exit(){
            cout<<endl<<endl;
            system("cls");

    // First Animation
    Sleep(60);
    cout << "\n\t\t\t\t\t--------------------------------------------\n";
    cout << "\t\t\t\t\t|              !!!!!!!!!!!                 |\n";
    cout << "\t\t\t\t\t|             (  o      o )                |\n";
    cout << "\t\t\t\t\t|             (     ||    )                |\n";
    cout << "\t\t\t\t\t|              ( ________ )                |\n";
    cout << "\t\t\t\t\t|               ##########                 |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|   Thank you for selecting our service    |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t--------------------------------------------";

    Sleep(1000);
    system("cls");

    // Second Animation
    Sleep(999);
    system("color B");
    cout << "\n\t\t\t\t\t--------------------------------------------\n";
    cout << "\t\t\t\t\t|              !!!!!!!!!!!                 |\n";
    cout << "\t\t\t\t\t|             (         o )                |\n";
    cout << "\t\t\t\t\t|             (     ||    )                |\n";
    cout << "\t\t\t\t\t|              ( ________ )                |\n";
    cout << "\t\t\t\t\t|               ##########                 |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|            Love You Good Luck            |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t--------------------------------------------";

    Sleep(1000);
    system("cls");

    // Third Animation
    system("color D");
    Sleep(1000);
    cout << "\n\t\t\t\t\t--------------------------------------------\n";
    cout << "\t\t\t\t\t|              !!!!!!!!!!!                 |\n";
    cout << "\t\t\t\t\t|             (  o      o )                |\n";
    cout << "\t\t\t\t\t|             (     ||    )                |\n";
    cout << "\t\t\t\t\t|              ( ________ )                |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|               ##########                 |\n";
    cout << "\t\t\t\t\t|                                          |\n";
    cout << "\t\t\t\t\t|   Thank you for selecting our service    |\n";
    cout << "\t\t\t\t\t|             _____________                |\n";
    cout << "\t\t\t\t\t|            |   o    o    |               |\n";
    cout << "\t\t\t\t\t|            |     i       |               |\n";
    cout << "\t\t\t\t\t|            |   |----|    |               |\n";
    cout << "\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t";
	system("pause");

}

void login() {
    bool u_login = false; // for checking the login status

    string user_n, pass;
//    cin.clear();
    cin.ignore();
    cout << "To Login Please Enter Your Details: " << endl;
    cout << "Enter Your User Name: ";
    getline(cin, user_n);
    
    cout << "Enter Your Password: ";
    getline(cin, pass);

    // checking the user name and password
    for (int i = 0; i < users; i++) {
        if (user_n == users_data[i].user_name) { // checking the user name
            // if user found
            if (pass == users_data[i].password) {
                u_login = true; // login status is true
                break; // break the loop
            } else {
                cout << "Invalid Password! Please try again." << endl;       
                return; // exit function if password is incorrect
            }
        }
    }

    if (u_login) {
        cout << "You Logged In Successfully!" << endl;
        check_login_status = true;
    } else {
        cout << "User Not Found! Please check your user name." << endl;
    }
    cout << endl << endl; 
}

void signUp() { 
    string proceed, record; 
    // Loop for the sign-up
    for (int i = count; i < users; i++) {
        cout << "Enter Your Details For SignUp!\n" << endl;
        cin.ignore();
        cout << "Enter User Name: ";
        getline(cin, users_data[i].user_name);

        cout << "Enter Your Email Address: ";
        getline(cin, users_data[i].mail);

        cout << "Enter a strong password: ";
        getline(cin, users_data[i].password);
        
        // Ask if the user wants to proceed
        cout << "Do you want to proceed? (yes/no): ";
        getline(cin, proceed);
            
        // If the user wants to proceed, confirm registration and break the loop
        if (proceed == "yes" || proceed == "Yes" || proceed == "YES") {
            cout << "You Registered Successfully! Congratulations!\n" << endl;
            check_login_status = true;
            count++;
            break;
        } else {
            cout << "You are not registered!\n" << endl;
            break;
        }
    }
}


void discount(){
    system("cls");
    int age;
    system("color D");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t*******************~~Discounts~~************************"<<endl;
    cout<<"\t\t\t\t\t\tEnter Your Age: ";
    while(true){ 
    cin>>age;  
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Invalid Input! Please enter a valid age."<<endl;
    }else{
        break;
    }
         }
    if(age >60){
        cout<<"You Can Get 45% discount on Your Ticket."<<endl;
    }else if(age>=40 && age<60){
        cout<<"You Can Get 15% discount on Your Ticket."<<endl;
        char govt_employee;
        cout<<"Are you Govt Employee?: (y/n)";
        cin>>govt_employee;
        if(govt_employee=='y'){
            cout<<"You Can Get 5% more discount"<<endl;
        }else{
            cout<<"You are not able to get more 5% discount"<<endl;
        }
    }else if(age>=20 && age<40){
        cout<<"You Can Get 10% discount on Your Ticket."<<endl;
        char student;
        cout<<"Are you a student?: (y/n)\n";
        cin>>student;
        if(student=='y'){
            cout<<"You Can Get more 10% discount."<<endl;
        }else{
            cout<<"You are not able to get more 10% discount."<<endl;
        }
    }else{
        cout<<"You Can Get 5% discount on Your Ticket."<<endl;
    }
}

void about(){
    system("cls");
    system("color D");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\n\n\n\n\n\t\t\t\t\t\t*******************~~About~~************************"<<endl;

    cout<<"\t\t\t\t\t\tThis is an Airline Ticketing System. \n";
    cout<<"\t\t\t\t\t\tThis system is developed by Mubashar Ghazi.\n";
    cout<<"\t\t\t\t\t\tThis system is developed for the PBL Project of first semester. \n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t\tAll Rights are Reserved. \n";
    cout<<"\t\t\t\t\t\t You can contact with us at pcmubasharghazi@gmail.com \n";
    cout<<"\t\t\t\t\t\t Thanks for using our service \n";


} // for the about of the system

void user_manual(){
    system("cls");
    system("color D");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\n\n\n\n\n\t\t\t\t\t\t*******************~~User Manual~~************************"<<endl<<endl;
    cout<<"\t\t\t\t\t\t                Be careful before using our system! \n";
    cout<<"\t\t\t\t\t\t1. First of all you have to create an account using signup option. \n";
    cout<<"\t\t\t\t\t\t * In case, if you have account go to login option, if you want to reset your password,\n\t\t\t\t\t\t you have to go to forgot option. \n";
    cout<<"\t\t\t\t\t\t2. If you have account then you have to login first. \n";
    cout<<"\t\t\t\t\t\t3. After login you can now see flight schedule before going to ticket.\n\t\t\t\t\t\t You can see flight schedule using filght schedule option \n";
    cout<<"\t\t\t\t\t\t4. After selecting the flight schedule you have to reserve your seat using seat reservation option. \n";
    cout<<"\t\t\t\t\t\t5. After reserving your seat you have to pay for your seat. \n";
    cout<<"\t\t\t\t\t\t6. After paying for your seat you can to print your receipt. \n";
    cout<<"\t\t\t\t\t\t7. After printing your receipt you have to exit the program. \n";
    cout<<"\t\t\t\t\t\t8. In case of emergency, If you want to cancel your reserved ticket then \n\t\t\t\t\t\t You have to select the Cancel ticket option from the menu. \n";
    cout<<"\t\t\t\t\t\t9. If you want to know about the discounts then you have to select the discount option. \n";
    cout<<"\t\t\t\t\t\t10. If you want to know about the system then you have to select the about option. \n";
    cout<<"\t\t\t\t\t\t11. If you want to know about the user manual of the system then you have to select the user manual option. \n";
    cout<<"\t\t\t\t\t\t12. If you want to exit the program then you have to select the exit option. \n";
    cout<<"\t\t\t\t\t\t13. If you want to edit your data then you have to select the edit option from the user panel menu. \n";
    cout<<"\t\t\t\t\t\t14. If you want to reset your password then you have to select the forgot password option from user panel menu. \n";
    cout<<"\t\t\t\t\t\t15. If you want to go to the admin panel then you have to select the admin panel option from the main menu.\n \t\t\t\t\t\t Enter your id and password and login to admin panel \n";
    cout<<"\t\t\t\t\t\t16. The Default id and password for admin panel is:   admin -- 123. \n";
    cout<<"\t\t\t\t\t\t All Rights are Reserved. \n";
    cout<<"\t\t\t\t\t\t Copyright @ Mubashar Ghazi - 03213308313 \n";
    cout<<"\t\t\t\t\t\t Thank You for using our system! \n";

} // for the user manual of the system

bool edit_userdata() {
    bool edit = false; // for checking the edit status
    string user_id, user_pass; 

    // ask for the user name and password
    cout << "To Modify Your Information..\n" << endl;
    cin.ignore();
    cout << "Enter Your User Name: " << endl;
    getline(cin, user_id);
    cout << "Enter Your Password: " << endl;
    getline(cin, user_pass);

    for (int i = 0; i < users; i++) { 
        if (user_id == users_data[i].user_name && user_pass == users_data[i].password) {
            cout << "Be Careful Before Entering Your Information! " << endl;

            cout << "Edit Your User Name: ";
            getline(cin, users_data[i].user_name);
            cout << "Enter your New Password: ";
            getline(cin, users_data[i].password);

            cout << "Your Data has been Updated." << endl;
            edit = true; // edit status is true
            break; // break the loop
        }
    }

    if (!edit) {
        cout << "Record not Found! Please check your user name and password." << endl;
    }

    return edit; // return the edit status
}

// Reset the password
void forgot_password() {
    string user_name, email, user_choice;
    cout << "Reset Your Password!" << endl;
    cin.ignore();
    cout << "Enter Your User Name: " << endl;
    getline(cin, user_name);
    cout << "Enter Your Email Address: " << endl;
    getline(cin, email);

    for (int i = 0; i < users; i++) {
        if (user_name == users_data[i].user_name && email == users_data[i].mail) {
            cout << "Your Password is: " << users_data[i].password << endl;
            cout << endl;
            cout << "Do you want to change your password? Type 'yes' to change your password." << endl;
            cin >> user_choice;

            if (user_choice == "yes") {
                cin.ignore(); // Clear input buffer
                cout << "Enter Your New Password: " << endl;
                getline(cin, users_data[i].password);
                cout << "Your Password has been changed successfully!" << endl;
            } else {
                cout << "Your Password is not changed!" << endl;
            }
            return; // Exit the function after processing
        }
    }
    cout << "Invalid User Name or Email Address!" << endl;
}

void schedule() {
    system("cls");
    system("color D");

    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    
    if (!schedule_set) {  // if the schedule is not set
        // Initialize default schedule
        flights[0].date = "03-02-2024";
        flights[0].to = "Karachi";
        flights[0].timing = "12:30 PM";
        flights[0].airline = "PIA";
        flights[0].total_seats = 10;

        flights[1].date = "03-02-2024";
        flights[1].to = "Dubai";
        flights[1].timing = "3:00 PM";
        flights[1].airline = "PIA";
        flights[1].total_seats = 10;

        flights[2].date = "03-02-2024";
        flights[2].to = "Islamabad";
        flights[2].timing = "09:30 PM";
        flights[2].airline = "PIA";
        flights[2].total_seats = 10;
    }

    cout << "\t\t\t\t Today is:  " << __DATE__ << "  "; cout << "Current Time is: " << __TIME__ << endl << endl;
    cout << "\t\t\t\t Flight      Date         TO        Timing       Airline" << "       Remaining Seats " << endl;
    cout << "\t\t\t\t-------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\t\t\t\t   " << i + 1 << "     " << flights[i].date << "     " << flights[i].to << "     " << flights[i].timing
             << "     " << flights[i].airline << "       " << flights[i].total_seats - reserved_seats << endl;
    }

    cout << endl << endl;
    cout << "\t\t\t\t    |+|______________________________________________________________________________________|+| \n";
    cout << "\t\t\t\t    |+|**************************************************************************************|+| \n";
    cout << "                                    __________________________________________________________________________________   " << endl;
    system("pause");
    cout << endl;
}

void edit_flights() {
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Enter Date (date/month/year): ";
        getline(cin, flights[i].date);

        cout << "Enter Airline (PIA#xyz): ";
        getline(cin, flights[i].airline);

        cout << "Enter Departure City: ";
        getline(cin, flights[i].from);

        cout << "Enter Destination City (Dubai, UK): ";
        getline(cin, flights[i].to);

        cout << "Enter Timing (hour:minutes 03:45 am/pm): ";
        getline(cin, flights[i].timing);

        cout << "Enter Number of Seats of this Flight: ";
        cin >> flights[i].total_seats;

        cout << "\nEnter Next Details...\n\n";
    }
    schedule_set = true; // schedule status is true
}

void receipt() {
    string name, cnic;
    int index = -1; // Initialize index to -1 as a flag for not found

    system("cls");
    system("color D");
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t*******************~~Receipt Generation~~************************" << endl;
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~|||||----)~Kindly Enter Your Information~(----|||||~~~~~~~~~~~~~~~~~~~~\n" << endl;

    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter your CNIC: ";
    getline(cin, cnic);

    for (int i = 0; i <= reserved_seats; i++) {
        if (cnic == p[i].cnic && name == p[i].name) {
            index = i; // Save the index where the ticket is found
            break;
        }
    }

    if (index != -1) {
        cout << "\t\t\t\t\t\tName: " << p[index].name << endl;
        cout << "\t\t\t\t\t\tAddress: " << p[index].address << endl;
        cout << "\t\t\t\t\t\tPassport number: " << p[index].passport << endl;
        cout << "\t\t\t\t\t\tCNIC number: " << p[index].cnic << endl;
        cout << "\t\t\t\t\t\tPhone number: " << p[index].phone_no << endl;
        cout << "\t\t\t\t\t\tSeat type: " << p[index].seat_type << endl;
        cout << "\t\t\t\t\t\tFlight number: " << p[index].flight_no << endl;
        cout << "\t\t\t\t\t\tDate of flight: " << p[index].date_of_flight << endl;
        cout << "\t\t\t\t\t\tDestination: " << p[index].destination << endl;
        cout << "\t\t\t\t\t\tTotal Price: " << p[index].payment << endl;
        cout << "\t\t\t\t\t\tDiscount: " << p[index].discounts << endl;
        cout << "\t\t\t\t\t\tFinal Payment: " << p[index].payment - (p[index].payment * p[index].discounts / 100) << endl;
        cout << "\t\t\t\t\t\tSeat Number: " << index + 1 << endl;
    } else {
        cout << "Record not found!" << endl;
    }
}

void admin_panel() {
	
    bool admin_login = false; // for checking the admin login status
    string id, pass; // admin id and password 
    int attempts = 1, choice; // here count is for the counting the number of attempts

    // loop for the admin login
    while(true) {
    	
        system("cls");
        cout << "    ||------------------------------------------||" << endl;
        cout << "    ||        { To Login into Admin Panel }     ||" << endl;
        cout << "    ||        {---------------------------}     ||" << endl;
        cout << "    ||------------------------------------------||" << endl << endl << endl;	

        cout << "\t\t\t   Enter ID: "; 
        getline(cin, id); 
        cout << endl;
        cout << "\t\t\t   Enter Password: "; 
        getline(cin, pass); 
        cout << endl;

        if(id == "admin" && pass == "123") {
            cout << "\t\t\t You Login Successfully!.." << endl;
            system("pause");
            process();
            system("cls");
            admin_login = true; // admin login status is true
            break;
        } else if(attempts % 5 == 0) { // if the count is equal to 5
            cout << "You have exceeded the number of attempts! " << endl;
            system("pause");
        } else {
            cout << "Invalid ID or Password! " << endl;
            cout << "Please Try Again! " << endl;
            system("pause");
            system("cls");
        }
        
        attempts++; // increment the count by 1 
    }

    // if the admin login status is true
    if(admin_login) {
        while(true) {
            system("cls");
            cout << "\n\n\n\n\t\t\t________|---|~~~=| Welcome to the Admin Panel! |=~~~~|---|__________" << endl;
            cout << "\t\t\t<1>~ Edit Flights Schedule" << endl;
            cout << "\t\t\t<2>~ View Flights Schedule" << endl;
            cout << "\t\t\t<3>~ View All Users Data" << endl;
            cout << "\t\t\t<4>~ View All Passengers Data" << endl;
            cout << "\t\t\t<5>~ View All Reserved Seats" << endl;
            cout << "\t\t\t<6>~ Exit" << endl;
            cout << "\t\t\tEnter Your Choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    edit_flights();
                    break;
                case 2:
                    schedule();
                    break;
                case 3:
                    for(int i=0;i<count;i++){
                    cout<<"User Name: "<<users_data[i].user_name<<endl;
                    cout<<"Email Address: "<<users_data[i].mail<<endl;
                    cout<<"Password: "<<users_data[i].password<<endl;
                    cout<<endl;
                    }
                    break;
                case 4:
                    for(int i=0;i<count;i++){
                    cout<<"Passenger Name: "<<p[i].name<<endl;
                    cout<<"Passenger Address: "<<p[i].address<<endl;
                    cout<<"Passenger Passport: "<<p[i].passport<<endl;
                    cout<<"Passenger CNIC: "<<p[i].cnic<<endl;
                    cout<<"Passenger Phone Number: "<<p[i].phone_no<<endl;
                    cout<<"Passenger Seat Type: "<<p[i].seat_type<<endl;
                    cout<<"Passenger Discount: "<<p[i].discounts<<endl;
                    cout<<"Passenger Payment: "<<p[i].payment<<endl;
                    cout<<endl;
                    }
                    break;
                case 5:
                   cout<<"Total Reserved Seats: "<<reserved_seats<<endl;
                    break;
                case 6:
                    cout << "Thank You for using our system! " << endl;
                    break;
                default:
                    cout << "Invalid Option! " << endl;
                    break;
            }

            if(choice == 6) {
                break;
            }
        }
    }
}

int main() {
    int exit_status = 0; // for checking exit status
    welcome();
    system("pause");
    system("cls");
    user_panel();
    
    while (true) {
        int choice = menu();
        
        switch (choice) {
            case 1:
                loading();
                user_panel();
                process();
                break;
            case 2:
                schedule();
                break;
            case 3:
                loading();
                reserve_seat();
                process();
                break;
            case 4:
                loading();
                cancel_ticket();
                process();
                break;
            case 5:
                loading();
                discount();
                process();
                break;
            case 6:
                loading();
                receipt();
                process();
                break;
            case 7:
                loading();
                user_manual();
                process();
                break;
            case 8:
                loading();
                admin_panel();
                process();
                break;
            case 9:
                loading();
                about();
                process();
                break;
            case 10:
                loading();
                exit_status = 1;
                exit();
                break;
            default:
                cout << "\t\t\t\tError: Invalid Option!" << endl;
                break;
        }
        
        if (exit_status == 1) {
            break;
        }
    }
    
    return 0;
}
