#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:
        
        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:

        static string name, gender;
        int phoneNo, age;
        string add;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"\n Enter the customer ID : ";
            cin>>cId;
            cout<<"\nName : ";
            cin>>name;
            cout<<"\nAge : ";
            cin>>age;
            cout<<"\nGender : ";
            cin>>gender;
            cout<<"\nMobile : ";
            cin>>phoneNo;
            cout<<"\nAddress : ";
            cin>>add;

            cout<<"Your details are saved with us.\n"<<endl;
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:

        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
            
            for(int a=0; a<6; a++)
            {
                cout<<(a+1)<<". flight to"<<flightN[a]<<endl;
            }
            
            cout<<"\nWelcome to the Airlines!"<<endl;
            cout<<"Press the number of the country for which you want to book the flight to : ";
            cin>>choice;

            switch(choice)
            {
                case 1:
                {
                    cout<<"_______________Welcome to Dubai Emirates________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. DUB - 498"<<endl<<"\t08-01-2022\t8:00 AM\t10 hrs"<<endl<<"Rs.14000"<<endl;
                    cout<<"2. DUB - 658"<<endl<<"\t09-01-2022\t4:00 AM\t12 hrs"<<endl<<"Rs.10000"<<endl;
                    cout<<"3. DUB - 508"<<endl<<"\t11-01-2022\t11:00 AM\t11 hrs"<<endl<<"Rs.9000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=14000;
                        cout<<"\n You have successfully booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges=10000;
                        cout<<"\n You have successfully booked the flight DUB - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges=9000;
                        cout<<"\n You have successfully booked the flight DUB - 508"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu : "<<endl;
                    cin>>back;
                    mainMenu();
                }

                case 2:
                {
                    cout<<"_______________Welcome to Canadian Airlines________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. CA - 198"<<endl<<"\t09-01-2022\t2:00 PM\t20 hrs"<<endl<<"Rs.34000"<<endl;
                    cout<<"2. CA - 158"<<endl<<"\t11-01-2022\t6:00 PM\t23 hrs"<<endl<<"Rs.29000"<<endl;
                    cout<<"3. CA - 208"<<endl<<"\t14-01-2022\t12:00 PM\t21 hrs"<<endl<<"Rs.27000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=34000;
                        cout<<"\n You have successfully booked the flight CA - 198"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges=29000;
                        cout<<"\n You have successfully booked the flight CA - 158"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges=27000;
                        cout<<"\n You have successfully booked the flight CA - 208"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu : "<<endl;
                    cin>>back;
                    mainMenu();
                }

                case 3:
                {
                    cout<<"_______________Welcome to UK Airways________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. UK - 798"<<endl<<"\t12-01-2022\t10:00 AM\t14 hrs"<<endl<<"Rs.44000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=14000;
                        cout<<"\n You have successfully booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu : "<<endl;
                    cin>>back;
                    mainMenu();
                }

                case 4:
                {
                    cout<<"_______________Welcome to US Airways________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. US - 567"<<endl<<"\t10-01-2022\t9:00 AM\t22 hrs"<<endl<<"Rs.37000"<<endl;
                    cout<<"2. US - 437"<<endl<<"\t09-01-2022\t6:00 AM\t22 hrs"<<endl<<"Rs.39000"<<endl;
                    cout<<"3. US - 807"<<endl<<"\t12-01-2022\t10:00 AM\t21 hrs"<<endl<<"Rs.42000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=37000;
                        cout<<"\n You have successfully booked the flight US - 567"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges=39000;
                        cout<<"\n You have successfully booked the flight US - 437"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges=42000;
                        cout<<"\n You have successfully booked the flight US - 807"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu : "<<endl;
                    cin>>back;
                    mainMenu();
                }

                case 5:
                {
                    cout<<"_______________Welcome to Australian Airlines________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. AS - 698"<<endl<<"\t18-01-2022\t9:00 AM\t20 hrs"<<endl<<"Rs.44000"<<endl;
                    cout<<"2. AS - 358"<<endl<<"\t09-01-2022\t4:00 AM\t22 hrs"<<endl<<"Rs.34000"<<endl;
                    cout<<"3. AS - 208"<<endl<<"\t11-01-2022\t10:00 AM\t21 hrs"<<endl<<"Rs.42000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=44000;
                        cout<<"\n You have successfully booked the flight AS - 698"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges=34000;
                        cout<<"\n You have successfully booked the flight AS - 358"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges=42000;
                        cout<<"\n You have successfully booked the flight AS - 208"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu : "<<endl;
                    cin>>back;
                    mainMenu();
                }

                case 6:
                {
                    cout<<"_______________Welcome to European Airlines________________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. EU - 898"<<endl<<"\t02-01-2022\t2:00 AM\t18 hrs"<<endl<<"Rs.36000"<<endl;
                    cout<<"2. EU - 958"<<endl<<"\t03-01-2022\t6:00 AM\t19 hrs"<<endl<<"Rs.37000"<<endl;
                    cout<<"3. EU - 708"<<endl<<"\t12-01-2022\t10:00 AM\t20 hrs"<<endl<<"Rs.31000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=36000;
                        cout<<"\n You have successfully booked the flight EU - 898"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2)
                    {
                        charges=37000;
                        cout<<"\n You have successfully booked the flight EU - 958"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3)
                    {
                        charges=31000;
                        cout<<"\n You have successfully booked the flight EU - 708"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main menu : "<<endl;
                    cin>>back;
                    mainMenu();
                }

                default :
                {
                    cout<<"Invalid input, Shifting you to the main menu !"<<endl;
                    mainMenu();
                    break;
                }
            }
        }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
    public:
        void Bill()
        {
            string destination="";
            ofstream outf("customer_ticket.txt");
            {
                outf<<"_____________XYZ Airlines______________"<<endl;
                outf<<"________________Ticket_________________"<<endl;
                outf<<"_______________________________________"<<endl;
                outf<<"Custoer ID : "<<Details::cId<<endl;
                outf<<"Customer Name : "<<Details::name<<endl;
                outf<<"Customer Gender : "<<Details::gender<<endl;
                outf<<"\tDESCRIPTION"<<endl<<endl;

                if(registration::choice==1)
                {
                    destination="Dubai";
                }
                else if(registration::choice==2)
                {
                    destination="Canada";
                }
                else if(registration::choice==3)
                {
                    destination="UK";
                }
                else if(registration::choice==4)
                {
                    destination="US";
                }
                else if(registration::choice==5)
                {
                    destination="Australia";
                }
                else if(registration::choice==6)
                {
                    destination="Europe";
                }

                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost :\t\t"<<registration::charges<<endl;

            }
            outf.close();
        }

        void dispBill()
        {
            ifstream ifs("customer_ticket.txt");
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\n\t                   XYZ Airlines\n"<<endl;
    cout<<"\t ____________________Main Menu__________________"<<endl;
    cout<<"\t _______________________________________________"<<endl;
    cout<<"\t|\t                                          \t|"<<endl;
    cout<<"\t|\t Press 1 to add the Customer Details      \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration          \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges           \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                          \t|"<<endl;
    cout<<"\t|_______________________________________________|"<<endl;
    
    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout<<"_______________Customers_______________\n"<<endl;
        d.information();
        cout<<"Press any key to go back to Main Menu";
        cin>>back;
        mainMenu();
        break;
    }
    case 2:
    {
        cout<<"___________Book a flight using this system___________\n"<<endl;
        r.flights();
        break;
    }
    case 3:
    {
        cout<<"_______________GET YOUR TICKET______________\n"<<endl;
        t.Bill();
        cout<<"Your ticket is printed, you can collect it \n"<<endl;
        cout<<"Press 1 to display your ticket";
        cin>>back;
        if(back==1)
        {
            t.dispBill();
            cout<<"Press any key to go back to main menu";
            cin>>back;
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
        cout<<"\n\n\t_____________Thank-You_____________"<<endl;
        break;
    }
    default:
        cout<<"Invalid input, Please try again!\n"<<endl;
        mainMenu();
        break;
    }
}

int main()
{
    Management Mobj;
    return 0;
}