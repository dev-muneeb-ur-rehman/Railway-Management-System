#include <iostream>
#include <fstream> //library used for file handling
#include <iomanip> //manupilating the output of objects
#include <stdlib.h> //memory allocation and processes
#include <cstdio> //for performing input and output
#include <string.h>
#include <conio.h> //console input output
#include <cstdlib> //different funtions and processes for high and effective programming 
#include<time.h> //for pnr number
using namespace std;

void mainMenu();
void firstPage();
void displayMenu();
void foodOptions();

class Management
{
public:
    Management()
    {
        firstPage();
    }
};

void firstPage()
{
    cout << "\n___________________________________________________________________________________" << endl;
    cout << "____________________________WELCOME TO AWAN RAILWAYS______________________________" << endl << endl;
    cout << "\t\t|\t 1. Sign In   \t|" << endl;
    cout << "\t\t|\t 2. Exit      \t|" << endl;
    int choice;
    string id = "sirmunim";
    string password = "oop";
    string un, pass; //un = user name and pass = password
    cout << "Select: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "____________________________________________________________" << endl;
        cout << endl << "Enter Username: ";
        cin >> un;
        if (id == un)
        {
            cout << "\nEnter Password: ";
            cin >> pass;
            if (pass == password)
            {
                mainMenu();
                firstPage();
            }
            else
            {
                cout << "Password is wrong, Please try again!" << endl;
                firstPage();
            }
        }
        else
        {
            cout << "Entered Admin ID is wrong, Please Try Again!" << endl;
            firstPage();
        }
        break;
    }
        default:
            break;
            case 2:
    {
        cout << "___________________Thanks for using AWAN Railways_____________________" << endl << endl;
        exit(0); //program terminated successfully
    }
    }
    }
class Details
{
public:
    static string name[6], gender[6];
    static int age[6];
    static string bp[10]; //Birth Prefrence
    static int cId[10]; //Customer ID
    char arr[100];
    static int pnr; //Passenger Name Record
    static int n; //Number Of Passenger
    // pnr = 1000000000 + (rand() % 9000000000);

    void information()
    {
        srand(time(NULL));
        pnr = 1000000000 + (rand() % 9000000000);
        cout << "\nYour PNR number is: " << pnr << endl;
        cout << "\nEnter the number of passengers: ";
        cin >> n;
        if (n > 6)
        {
            cout << "You can book tickets for only 6 passengers in a ticket!" << endl << endl;
            mainMenu();
        }
        for (int i = 0; i < n; i++)
        {
            cout << "\n Enter the customer ID :";
            cin >> cId[i];
            cout << "\n Enter the Name :";
            cin >> name[i];
            cout << "\n Enter the age :";
            cin >> age[i];
            cout << "\n Enter Birth Place :";
            cin >> bp[i];
            cout << "\n Gender:";
            cin >> gender[i];
        }
        cout << "Yours details are saved with us.\n";
        cout << "Your PNR number is: " << pnr << endl;
        cout << "Please use this PNR number to book tickets!" << endl << endl;
    }
};

int Details::cId[10];
string Details::name[6];
string Details::gender[6];
int Details::pnr;
string Details::bp[10];
int Details::age[6];
int Details::n;

class registration : public Details
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void trains()
    {
        string trainsN[] = {"PESHAWAR", "RAWALPINDI", "MULTAN", "HYDERABAD", "LAHORE", "FAISLABAD"};

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ".Train to " << trainsN[a] << endl;
        }

        cout << "\nWELCOME TO THE RAIlWAYS!" << endl;
        cout << "Press the number of the city you want to book the train:";
        cin >> choice;
        int f;

        switch (choice)
        {
        case 1:
        {
            cout << "_WELCOME TO PESHAWAR_\n" << endl;
            cout << " Your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n" << endl;
            cout << " 1.PES-123 " << endl;
            cout << "\t1-06-2023  8:00AM  10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200" << endl;
            cout << " 2.PES-345 " << endl;
            cout << "\t02-06-2023  10:00AM  15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400" << endl;
            cout << " 3.PES-456" << endl;
            cout << "\t03-06-2023  11:00AM  20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 2100;
                }
                else if (f == 2)
                {
                    charges = 3100;
                }
                else if (f == 1)
                {
                    charges = 5200;
                }

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN PES-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2300;
                }
                else if (f == 2)
                {
                    charges = 3300;
                }
                else if (f == 1)
                {
                    charges = 5400;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN PES-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2400;
                }
                else if (f == 2)
                {
                    charges = 3500;
                }
                else if (f == 1)
                {
                    charges = 5100;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN PES-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press 1 to go back to the Main Menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }

        case 2:
        {
            cout << "_WELCOME TO RAWALPINDI_\n" << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n" << endl;
            cout << " 1.RAW-897 " << endl;
            cout << "\t20-07-2023  8:00PM  10hrs 3A-Rs.1800 2A-Rs.2600 1A-Rs.4400" << endl;
            cout << " 2.RAW-567 " << endl;
            cout << "\t21-07-2022  10:00PM  15hrs 3AC-Rs.1900 2AC-Rs.2200 1AC-Rs.4800" << endl;
            cout << " 3.RAW-789" << endl;
            cout << "\t22-07-2022  11:00PM  20hrs 3A-Rs.1700 2A-Rs.2100 1A-Rs.4500" << endl;
            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 1800;
                }
                else if (f == 2)
                {
                    charges = 2600;
                }
                else if (f == 1)
                {
                    charges = 4400;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN RAW-897" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 1900;
                }
                else if (f == 2)
                {
                    charges = 2200;
                }
                else if (f == 1)
                {
                    charges = 4800;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN RAW-567" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 1700;
                }
                else if (f == 2)
                {
                    charges = 2100;
                }
                else if (f == 1)
                {
                    charges = 4500;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN RAW-789" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press 1 to go back to the Main Menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }

        case 3:
        {
            cout << "_WELCOME TO MULTAN_\n" << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n"<< endl;
            cout << " 1.MUL-123 " << endl;
            cout << "\t24-08-2023  12:00AM  10hrs 3A-Rs.2200 2A-Rs.3200 1A-Rs.5500" << endl;
            cout << " 2.MUL-345 " << endl;
            cout << "\t25-08-2023  2:00PM 15hrs  3A-Rs.2300 2A-Rs.3400 1A-Rs.5600" << endl;
            cout << " 3.MUL-456" << endl;
            cout << "\t26-08-2023  4:00PM  20hrs  3A-Rs.2400 2A-Rs.3600 1A-Rs.5700" << endl;
            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;
            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 2200;
                }
                else if (f == 2)
                {
                    charges = 3200;
                }
                else if (f == 1)
                {
                    charges = 5500;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN MUL-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2300;
                }
                else if (f == 2)
                {
                    charges = 3400;
                }
                else if (f == 1)
                {
                    charges = 5600;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN MUL-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2400;
                }
                else if (f == 2)
                {
                    charges = 3600;
                }
                else if (f == 1)
                {
                    charges = 5700;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN MUL-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            cout << " press 1 to go back to the main menu: " << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }
        case 4:
        {
            cout << "_WELCOME TO HYDERABAD_\n" << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n" << endl;
            cout << " 1.HYD-123 " << endl;
            cout << "\t14-09-2023  12:00AM  10hrs 3AC-Rs.1300 2AC-Rs.1900 1AC-Rs.3400" << endl;
            cout << " 2.HYD-345 " << endl;
            cout << "\t15-09-2023  2:00PM 15hrs  3AC-Rs.1400 2AC-Rs.2000 1AC-Rs.3500" << endl;
            cout << " 3.HYD-456" << endl;
            cout << "\t16-09-2022  4:00PM  20hrs 3AC-Rs.1500 2AC-Rs.2100 1AC-Rs.4200" << endl;
            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 1300;
                }
                else if (f == 2)
                {
                    charges = 1900;
                }
                else if (f == 1)
                {
                    charges = 3400;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN HYD-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 1400;
                }
                else if (f == 2)
                {
                    charges = 2000;
                }
                else if (f == 1)
                {
                    charges = 3500;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN HYD-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 1500;
                }
                else if (f == 2)
                {
                    charges = 2100;
                }
                else if (f == 1)
                {
                    charges = 4200;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN HYD-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            cout << " press 1 to go back to the main menu: " << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }

        case 5:
        {
            cout << "_WELCOME TO LAHORE_\n" << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n" << endl;
            cout << " 1.LAH-123 " << endl;
            cout << "\t17-10-2023  12:00AM  10hrs 3A-Rs.2200 2A-Rs.3200 1A-Rs.5300" << endl;
            cout << " 2.LAH-345 " << endl;
            cout << "\t18-10-2023  2:00PM 15hrs 3A-Rs.2300 2A-Rs.3300 1A-Rs.5400" << endl;
            cout << " 3.LAH-456" << endl;
            cout << "\t19-10-2023  4:00PM  20hrs 3A-Rs.2400 2A-Rs.3500 1A-Rs.5500" << endl;
            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 2200;
                }
                else if (f == 2)
                {
                    charges = 3200;
                }
                else if (f == 1)
                {
                    charges = 5300;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN LAH-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2300;
                }
                else if (f == 2)
                {
                    charges = 3300;
                }
                else if (f == 1)
                {
                    charges = 5400;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN LAH-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2400;
                }
                else if (f == 2)
                {
                    charges = 3500;
                }
                else if (f == 1)
                {
                    charges = 5500;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN LAH-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press 1 to go back  to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }

        case 6:
        {

            cout << "_WELCOME TO FAISALABAD_\n" << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n" << endl;
            cout << " 1.FAI-123 " << endl;
            cout << "\t04-11-2023  12:00AM  10hrs  3A-Rs.1500 2A-Rs.2200 1A-Rs.3700" << endl;
            cout << " 2.FAI-345 " << endl;
            cout << "\t05-11-2023  2:00PM 15hrs  3A-Rs.1600 2A-Rs.2300 1A-Rs.3800" << endl;
            cout << " 3.FAI-456" << endl;
            cout << "\t06-11-2023  4:00PM  20hrs  3A-Rs.1700 2A-Rs.2400 1A-Rs.3900" << endl;
            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 1500;
                }
                else if (f == 2)
                {
                    charges = 2200;
                }
                else if (f == 1)
                {
                    charges = 3700;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN FAI-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 1600;
                }
                else if (f == 2)
                {
                    charges = 2300;
                }
                else if (f == 1)
                {
                    charges = 3800;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN FAI-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 1700;
                }
                else if (f == 2)
                {
                    charges = 2400;
                }
                else if (f == 1)
                {
                    charges = 3900;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN FAI-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            cout << " press 1 to go back to the Main Menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        default:
        {
            cout << " INVALID input,Shifting you to the main menu !" << endl;
            mainMenu();
            break;
        }
        }
    }
};
float registration::charges;
int registration::choice;

class ticket : public registration
{

public:
    void Bill()
    {
        string destination[6] = "";
        for (int i = 0; i < n; i++)
        {
            ofstream outf("tickets.txt", ios::app); //let you add data in the end of the file
            {
                outf << pnr << "\t\t|";
                outf << cId[i] << "\t\t|";
                outf << name[i] << "\t|";
                outf << gender[i] << "\t|";
                if (registration::choice == 1)
                {
                    destination[i] = "PESHAWAR";
                }

                else if (registration::choice == 2)
                {
                    destination[i] = "RAWALPINDI";
                }

                else if (registration::choice == 3)
                {
                    destination[i] = "MULTAN";
                }

                else if (registration::choice == 4)
                {
                    destination[i] = "HYDERABAD";
                }

                else if (registration::choice == 5)
                {
                    destination[i] = "LAHORE";
                }

                else if (registration::choice == 6)
                {
                    destination[i] = "FAISALABAD";
                }
                outf << "NULL" << "\t\t|";
                outf << destination[i] << "\t\t|";
                outf << registration::charges << "\t|";
                outf << endl;
            }
            outf.close();
        }
        cout << "Total Cost: " << charges * n;
    }
    void database()
    {
        string destination[6] = "";

        for (int i = 0; i < n; i++)
        {

            ofstream outf("records.txt", ios::app);
            {
                outf << pnr << " ";
                outf << cId[i] << " ";
                outf << name[i] << " ";
                outf << gender[i] << " ";

                if (registration::choice == 1)
                {
                    destination[i] = "PESHAWAR";
                }

                else if (registration::choice == 2)
                {
                    destination[i] = "RAWALPINDI";
                }

                else if (registration::choice == 3)
                {
                    destination[i] = "MULTAN";
                }

                else if (registration::choice == 4)
                {
                    destination[i] = "HYDERABAD";
                }

                else if (registration::choice == 5)
                {
                    destination[i] = "LAHORE";
                }

                else if (registration::choice == 6)
                {
                    destination[i] = "FAISALABAD";
                }

                outf << destination[i] << " ";
                outf << registration::charges;
                outf << endl;
            }

            outf.close();
        }
    }

    void dispBill()
    {
		cout << "\t\t_______________________________________" << endl;
        cout << "\t\t_____________AWAN Railways____________" << endl;
        cout << "\t\t_______________Tickets_________________" << endl;
        cout << "\t\t_______________________________________" << endl << endl;
        cout << "PNR Num\t\t\t|" << "Customer ID\t|" << "Name\t|" << "Gender\t|" << "Boarding\t|" << "Destination\t|" << "Charge\t|" << endl;
        ifstream ifs("tickets.txt");
        {
            if (!ifs)
            {
                cout << "File error!" << endl;
            }

            while (!ifs.eof())
            {

                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
    void dispDatabase()
    {
        string cpnr,cid,cname,cgen,cdest,ccharge;
		cout << "\t\t_______________________________________" << endl;
        cout << "\t\t_____________AWAN Railways____________" << endl;
        cout << "\t\t_______________Tickets_________________" << endl;
        cout << "\t\t_______________________________________" << endl << endl;
        cout << "|PNR Num\t|" << "Customer ID\t|" << "Name\t\t|" << "Gender\t|" << "Destination\t|" << "Charge\t\t|" << endl;

        ifstream ifs;
        ifs.open("records.txt");

        while(ifs>>cpnr>>cid>>cname>>cgen>>cdest>>ccharge){
            cout<<"|"<<cpnr<<"\t|"<<cid<<"\t\t|"<<cname<<"\t\t|"<<cgen<<"\t|"<<cdest<<"\t\t|Rs. "<<ccharge<<"\t|"<<endl;
        }
        ifs.close();
        cout<<endl;
    }
    void deletedata()
    {
        ticket obj;
        int w;
        cout << "Enter PNR no.:" << endl;
        cin >> w;
        string line;
        int cpnr, ccharges, ccid;
        string cname, cgen, cdest;

        ifstream myfile;
        ofstream temp;
        myfile.open("records.txt");
        temp.open("temp.txt");
        while (myfile >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges)
        {
        if (cpnr != w)
        temp << cpnr << " " << ccid << " " << cname << " " << cgen << " " << cdest << " " << ccharges << endl << flush;
        }
        cout << "The record with the name " << w << " has been deleted if it exsisted" << endl;
        myfile.close();
        temp.close();
        remove("records.txt");
        getchar();
        rename("temp.txt", "records.txt");
    }
};

class orderFood : public ticket
{

public:
    string fpnr, cpnr, cname, ccid, cgen, cdest, ccharges;
    int fcharges;

    void foodOptions()
    {
        cout << "\n____________________________________________________________________" << endl;
        cout << "____________________WELCOME TO E-CATERING SERVICE_______________________" << endl << endl;
        cout << "\t1. View Menu and Order Food" << endl;
        cout << "\t2. Print Receipt" << endl;
        cout << "\t3. Back" << endl;
        cin >> choice1;
        cout << endl;

        switch (choice1)
        {
        case 1:
        {
            char filename[]="foodr.txt";
            remove(filename);
            getDetails();

            break;
        }
        case 2:
        {
            displayFoodReceipt();
            break;
        }
        case 3:
        {
            mainMenu();
            
            break;
        }
        default:
        {
            cout << "Invalid Option! Try Again!" << endl;
            foodOptions();
        }
        }
    }

    void getDetails()
    {
        cout << "\n____________________________________________________________________" << endl;
        cout << "Enter Details to continue" << endl;
        cout << "\tEnter Your PNR number: ";
        cin >> fpnr;
        ifstream f1;
        f1.open("records.txt");
        do
        {
            if (f1.eof())
            {
                cout << "PNR does not match with our record!\nPlease Enter a valid PNR! " << endl;
                f1.close();
                getDetails();
            }
            f1 >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges;
        } while (cpnr != fpnr);
        f1.close();

        if (cpnr == fpnr)
        {
            cout << "Welcome " << cname << "! Please find the Menu!" << endl;
            displayMenu();
        }
        else
        {
            cout << "Try Again" << endl;
            getDetails();
        }
    }

    void displayMenu()
    {
        fcharges = 0;
        cout << "\n____________________________________________________________________" << endl;
        cout << "____________________________FOOD MENU_________________________________" << endl << endl;
		cout << "\t|S.no." << "\t|Item Name" << "\t\t\t\t|Price" << "\t\t\t|" << endl;
        cout << "\t|1." << "\t| Sandwich" << "\t\t\t\t|Rs. 300" << "\t\t|" << endl;
        cout << "\t|2." << "\t| Biryani" << "\t\t\t\t|Rs. 250" << "\t\t|" << endl;
        cout << "\t|3." << "\t| Paratha Roll" << "\t\t\t\t|Rs.180 " << "\t\t|" << endl;
        cout << "\t|4." << "\t| Pulao" << "\t\t\t\t\t|Rs. 250" << "\t\t|" << endl;
        cout << "\t|5." << "\t| Omlette" << "\t\t\t\t|Rs. 150" << "\t\t|" << endl;
        cout << "\t|6." << "\t| Chai" << "\t\t\t\t\t|Rs. 100" << "\t\t|" << endl;
        cout << "\t|7." << "\t| Coffee" << "\t\t\t\t|Rs. 150" << "\t\t|" << endl;
        cout << "\t|8." << "\t| Cold-Drink" << "\t\t\t\t|Rs. 100" << "\t\t|" << endl;

        int choicess[8], noOfItems;
        cout << "Enter the number of Items you want to book: " << endl;
        cin >> noOfItems;

        for (int i = 0; i < noOfItems; i++)
        {
        tryagain:
            cout << "Enter your Choice " << i + 1 << ": ";
            cin >> choicess[i];
            cout << endl;

            fstream f2;
            fstream f3;

            f2.open("foodr.txt", ios::app);
            f3.open("foodd.txt", ios::app);

            switch (choicess[i])
            {
            case 1:
            {
                cout << "\tSandwich booked" << endl;
                fcharges += 300;
                f2 << "\t|Sandwich" << "\t\t" << "Rs. 300" << endl;
                f3 << cpnr << " Sandwich" << " 300" << endl;
                break;
            }

            case 2:
            {
                cout << "\tBiryani booked" << endl;
                fcharges += 250;
                f2 << "\t|Biryani" << "\t\t" << "Rs. 250" << endl;
                f3 << cpnr << "Biryani" << " 250" << endl;
                break;
            }

            case 3:
            {
                cout << "Paratha Roll Booked" << endl;
                fcharges += 180;
                f2 << "\t|Paratha Roll" << "\t\t" << "Rs. 180" << endl;
                f3 << cpnr << "Paratha Roll" << " 180" << endl;
                break;
            }

            case 4:
            {
                cout << "Pulao Booked" << endl;
                fcharges += 250;
                f2 << "\t|Pulao"<< "\t\t" << "Rs. 250" << endl;
                f3 << cpnr << "Pulao" << " 250" << endl;
                break;
            }
            case 5:
            {
                cout << "Omlette Booked" << endl;
                fcharges += 150;
                f2 << "\t|Omlette" << "\t\t" << "Rs. 150" << endl;
                f3 << cpnr << "Omlette" << " 150" << endl;
                break;
            }
            case 6:
            {
                cout << "Chai Booked" << endl;
                fcharges += 100;
                f2 << "\t|Chai" << "\t\t\t" << "Rs. 100" << endl;
                f3 << cpnr << "Chai" << " 100" << endl;
                break;
            }
            case 7:
            {
                cout << "Coffee Booked" << endl;
                fcharges += 150;
                f2 << "\t|Coffee" << "\t\t" << "Rs. 150" << endl;
                f3 << cpnr << "Coffee" << " 150" << endl;
                break;
            }
            case 8:
            {
                cout << "Cold-Drink Booked" << endl;
                fcharges += 100;
                f2 << "\t|Cold-Drink" << "\t\t" << "Rs. 100" << endl;
                f3 << cpnr << "Cold-Drink" << " 100" << endl;
                break;
            }
            default:
            {
                cout << "Enter Valid Input!\n";
                f2.close();
                f3.close();
                goto tryagain;
                break;
            }
            }
            f2.close();
            f3.close();
        }
        cout << "Order Placed Successfully! Please collect your Reciept by Print Reciept option!" << endl;
        system("pause");
        foodOptions();
    }

    void displayFoodReceipt()
    {
        cout << "\n________________________________________________________________________" << endl;
        cout << "____________________________ORDER RECIEPT_________________________________" << endl << endl;
        cout << "\tPassenger Details:\n";
        cout << "\t|PNR Num\t\t|" << "Name\t|" << "Gender\t|" << "Boarding\t|" << "Destination\t|" << endl;
        cout << "\t|" << cpnr << "\t\t|" << cname << "\t|" << cgen << "\t|NULL\t\t|" << cdest << "\t\t|" << endl << endl;
        cout << "\tOrdered Food Details:\n";
        ifstream f4("foodr.txt");
        {
            if (!f4)
            {
                cout << "File error!" << endl;
            }

            while (!f4.eof())
            {
                f4.getline(arr, 100);
                cout << arr << endl;
            }
        }
        f4.close();
        system("pause");
        foodOptions();
    }

    void displayFoodDatabase()
    {
        string food1, food2, food3, price;

        cout << "\n________________________________________________________________________" << endl;
        cout << "____________________________FOOD DATABASE_________________________________" << endl << endl;
        cout << "\t|PNR no\t\t|Item Name\t\t\t\t|Price\t\t|" << endl;
        fstream f5("foodd.txt", ios::in);
        while (f5 >> cpnr >> food1 >> food2 >> food3 >> price)
        {
            cout << "\t|" << cpnr << "\t|" << food1 << " " << food2 << " " << food3 << "\t\t\t|Rs. " << price << "\t|" << endl;
            cout << flush;
        }
        f5.close();
        system("pause");
    }
};

void mainMenu()
{
    int lchoice;
    int schoice, back;
	cout << "\t" << endl;
    cout << "\t               AWAN Railways " << endl << endl;
    cout << "\t_________________________Main Menu_______________________" << endl;
    cout << "\t___________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
	cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Train Booking              \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
    cout << "\t|\t Press 4 to display Database            \t|" << endl;
    cout << "\t|\t Press 5 to delete Database                    \t|" << endl;
    cout << "\t|\t Press 6 to view E-Catering     \t\t|" << endl;    
    cout << "\t|\t Press 7 exit                           \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t___________________________________________________________" << endl;
	cout << "\n";
    cout << "Enter the Choice: ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;
    orderFood f;

    switch (lchoice)
    {
    case 1:
    {
        char filename[] = "tickets.txt";
        remove(filename);

        cout << "____Customers___" << endl << endl;
        d.information();
        cout << "press 1 to go back to the Main Menu" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 2:
    {
        cout << "___Book a ticket in this section__" << endl << endl;
        r.trains();
        break;
    }
    case 3:
    {
        cout << "____Getting your Ticket___" << endl << endl;
        t.Bill();

        cout << "\nYour Ticket is printed, you can collect it" << endl << endl;
        cout << "Press 1 to display your ticket ";
        cin >> back;

        if (back == 1)
        {
            t.dispBill();
            t.database();
            cout << "press 1 to go back to the Main Menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            break;
        }
        break;
    }
    case 4:
    {
        t.dispDatabase();
        cout << "press 1 to go back to the Main Menu" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 5:
    {
        t.deletedata();
        cout << "press 1 to go back to the Main Menu" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
	case 6:
    {
        f.foodOptions();
        break;
    }
    case 7:
    {
        cout << endl << endl;
        return;
        break;
    }
    default:
    {
        cout << "Invalid Input, Please try again!" << endl << endl;
        mainMenu();
        break;
    }
    }
}
int main()
{
    Management mobj;
    return 0;
}
