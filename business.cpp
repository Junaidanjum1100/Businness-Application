//*********************************************** LIBRARY FILES ***************************************
#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <iomanip>
//********************************************* END OF LIBRARY FILES***********************************
using namespace std;
void printMaze();                          
//********************************************** MAIN HEADER FILES**************************************

void mainHeader();    // show main header of the application
void AdminHeader();   // Header for Admin working
void managerHeader(); // Header for manager...
void userHeader();    // Header for user working..
void printBorder();   // use for print box on the main menus
//***********************************************End of Headers*******************************

// *********************************************special function**************************
void gotoxy(int x, int y);
void clearScreen();
//*********************************************Driver Function of Application********************

char loginMenu(); // login Menu funcation

// **********************************************All main Menus function**********************
void printMenusBorder(int num);             // print border on the menu
char adminMenu();                           // Admin working (menus)
char managerMenu();                         // Manager working(menus)
char userMenu();                            // usermenus (working)
void submenubeforemainmenu(string submenu); // menu after main headers..

//....................................Admin  working Related All Function ..............................
//  ##################################### 1. check password Admin ####################################
bool checkAdminPassword();
char showErrorForAdmin();
bool checkAdminPasswordRequirement(string adminName, string adminPassword);
void changeAdminPassword();
void checkRequirementsForChangeAdminPassword(string specialName, string specialColor, string fruit, int num);
// ###################################### 2. Admin working related to manager##########################
void adminworking();                                                                                   // show total admin working
void addManager();                                                                                     // add manager
string checkPhoneNumber();                                                                             // check Phone number is Valid or NOT
bool inputDataForCheckManagerIsValid();                                                                // Enter data for manager
void addmanagerdetail(string name, string password, string managerEmails, string managerPhoneNumbers); // Add managern Detail
void addManagerToArray(string name, string password, string managerEmails, string managerPhoneNumbers);   // add manager data after all checking
// ........................................ 2 Delete Manger Data Function .............................
void deleteManager();                                // delete manager data
void deleteManagerdetail(string name, string email); // checkManager data
void deleteManagerDataAfterChecking(int newidx);     // delete manager data after all checking
//......................................... 3 Update Manager Data Function................................
void updateManager();                                                                                  // update manager data
string checknewPhoneNumber();                                                                          // check phoneNumber
bool checkDataforUpdateManagaData(string name,string email);                                                        // checking data for valid manager
void gettingNewManagerData();                                                                          // Getting new data for manager
int checkManagerPhoneNumberIsValid(string managerPhoneNumbers);                                        // check manager phone Number
int checkManagerEmailIsValid();                                                                        // check manager Email
void updateManagerDetail(string newname, string newpassword, string newEmail, string newPhoneNumbers); // UPdate manager detail
//..........................................4 View All manager Detail..................................
void viewAllManager();
void viewAllCustomer();
// .......................................5 View All Buses.........................................
void allBusesDetail(); // for see all available buses

// ##############################################Manager working function###################################
bool checkmanager(string name, string password); // check manager is valid
void managerWorking();                           // all manager working
//.........................................Add Bus Detail.........................................
void addBuses(); // add new  bus function
int checkbus(string busnumber);
void addBusDetail(string busId);
void addBusDetailIntoArray(string busId, string bus_name, string bus_company, string bus_source, string bus_destination, int bus_fare, int bus_seats,int available_seats);
//........................................Delete Bus Detail...........................................
void deleteBus(); // remove bus for available
void deleteBusdetail(string busnumber);
void deleteBusDetailFromArray(int newidx);
//........................................Update Bus Detail.............................................
void updateBus(); // change the information of the any bus
char updatebusdetail();
void UpdateAllBusDetail(int newidx);
void showMassageForBus(string massage);
void updateSpecificDataOfTheBus(int newidx);
void updateBusDetailAccortingTospecialSearch(string choise, int newidx);

// ..................................View all Buses.........................................
void viewAllbuses();   // see all available bus
void viewSoldTicket(); // see the Sold ticket
int getBusInformationIdx(string name, string arr[]);

//...............................Driver working function for driver...............
void addDriver();                     // add new driver detail
bool checklicense(string licensenum); //  varify the License of the driver
void varificationAndAddDriver(int result, string licensenum);
void addDriverDetail(string licensenum); // check driver lincese
//....................................Delete Driver Detail...............
void deleteDriver(); // delete the information of the driver
int checkAndDeleteDriver(string driverlicense);
void deleteDriverDetail(string driverlicense);
void deleteDriverdetailAfterChacking(int newidx);
void showMassageDriverNotExist();
//.................................Update Driver Detail....................................
void updateDriver(); // change the driver information
int checkDriverIDIsValid(string num);
void checkDriverDetailISUpdate(int newidx);
void updatedDriverData(int newidx);
void viewallDriver();
// ############################################## < User working function > ######################
char loginmenu();       // user login menu
void userAccount();     // userAccount
void takeSignInInput(); // signIn menu
void takeSignUpInput(); // signUp menu
bool checkUserForSignIn();
void userWorking(); // user working
bool checkUserExist();
void addUserToArray(string name, string password);
//..............................................Buy ticket...........................

void buyticket(); // bus ticket function
int checkUserFare(string bus_ID);
void displayRequiredBuses(string cityFrom, string cityto);
void ticketBuying(string cityFrom, string cityto, string busId);
void addTicketsToArray(string buyename, string buyeremail, string busID, int seat_No);
// .........................................Generate Ticket ................................
void generateTicket(string buyename, int ticketes, string busID);
//..........................................Cancle ticket...................................
int inputDataForCanleTicket();
int checkTicketIsValid(string name, int ticketnum);
void cancleticket(); // for cancle the tikcket
void generateInVoice();
int checkUserForGenerateInVoice(string customer_email);
void inputDataForbuyingTicket(string cityFrom, string cityto, string busID);
void dispalyTicket(int newidx);
void deletepassenger(int newidx);
bool getBusID(string busId);
int getPrice(string bus_ID);

//****************************************Check Name is valid or NOt**********************
string checkNameisValid(string name, int x, int y, string header);

// ********************************************Global Function.=**************************
string name, password, email;

string parseData(string line, int count);
// ***************************** Manager File Handling ************************************
//...................................................load DATA...............................
bool loadManagerCredential();
bool loadBusData();
bool loadDriverData();
bool loadUserData();
bool loadAdminPassword();
bool loadSoldTicket();
//......................................................Store Data into file ..............................
void storeManagerCredential(string managerName, string managerpassword, string phoneNo, string email);
void storeBusCredential(string busId, string busName, string busCompany, string busFrom, string busto, int busFare, int totalSeats,int available_Seats);
void storeDriverCredential(string drivername, string driverId, string driverlicense);
void storeUsercredential(string name, string password);
void storeAdminCredential(string adminname, string adminpassword);
void storeSoldTicketCredential(string buyer_name, string buyer_email,int user_Fare, string busId, int seatNO);
void addAllBusesToFile();
//.......................................................Delete Data From File...................................
void deleteManagerCredential();
void deleteBusData();
void deleteSoldTicket();
void deleteDriverData();
//.......................................................Update Data...................................
void updatemanagerData();
void updateBusData();
void updateAdmin();
void storeAdminCredential(string adminname, string adminpassword);
void updateDriverData();
// ...............................global variable for admin checking ................
string adminNames = "", adminPasswords = "";
// ...............................global arrays for user...............................
string users[100], passwords[100], buyerName[100], buyerEmail[100];
int tickets[100], seatNo[100];
string userbusID[100];

// ............................global variable for user.................................
int index = 0, usercount = 0, usersCount = 0,buyerCount=0;

// ..............................global arrays for admin working............................
string managerName[20], managerPassword[20], managerEmail[20];
string managerPhoneNumber[20];
//...............................global variable for admin working..........................
int managerCounts = 0, managercount = 0;
//..............................global arrays for manager working............................
string busName[100], busCompany[100], busFrom[100], busto[100], busID[100];
int fare[100], totalSeats[100], availableSeats[100], userFare[100];

// .............................global variables for manager working..............................
int busCounts = 0, buscount = 0;
// ....................  global array for driver.................
string driverName[100], driverLicense[100];
string driverID[100];
//.................. global variable for driver.................................
int driverCounts = 0, drivercount = 0;
char ch1 = 219, ch2 = 196;
int X = 17, Y = 70;

//.................. For Coloring text ...........................................
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

// ############################################### >> MAIN FUNCTION <<##########################
main()
{
    system("CLS");
    mainHeader();
 //************************************ >> FILES LOADING WORKING << ***************************
    if (loadAdminPassword()  && loadManagerCredential() && loadDriverData() && loadUserData() && loadAdminPassword() && loadBusData() && loadSoldTicket())
    {
        gotoxy(25, 65);
        cout << "---------------------------------------------";
        gotoxy(26, 65);
        cout << "|Congrats! Successfully Data Read from File |";
        gotoxy(27, 65);
        cout << "---------------------------------------------";
        gotoxy(28, 65);
        system("pause");
    }
    else
    {
        gotoxy(25, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------------";
        gotoxy(26, 65);
        cout << "|ERROR!   No Data Read From File Try Again  |";
        gotoxy(27, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(28, 65);
        system("pause");
    }
    //***************************************** >> END OF FILES LOADING << **************************
    char loginOption = ' ', subOption = ' ';
    while (true)
    {
        system("cls");
        mainHeader();
        submenubeforemainmenu("login ");
        loginOption = loginMenu();
        system("cls");
        if (loginOption == '1')                 //******* >> ADMIND WORKING << *********
        {
            bool result;
            result = checkAdminPassword();
            if (result == 1)
            {
                adminworking();
            }
            else
            {
                char ch = showErrorForAdmin();
                if (ch == 'Y')
                {
                    changeAdminPassword();
                }
                else
                {
                    continue;
                }
            }
        }

        //.................................manager working ..............................
        else if (loginOption == '2')
        {
            system("cls");
            managerHeader();
            submenubeforemainmenu("manager signIn ");
            bool result = false;
            result = inputDataForCheckManagerIsValid();
            if (result)
            {
                managerWorking();
            }
            else
            {
                gotoxy(21, 65);
                SetConsoleTextAttribute(h, 4);
                cout << "---------------------------------------------";
                gotoxy(22, 65);
                cout << "|SORRY! No Managers Available Name try later|";
                gotoxy(23, 65);
                cout << "---------------------------------------------";
                SetConsoleTextAttribute(h, 7);
                gotoxy(24, 65);
                system("pause");
            }
        }
        else if (loginOption == '3')                //********* >> USER WORKING << **********
        {
            userWorking();
        }
        else if (loginOption == '4')
        {
            break;
        }
        else
        {
            system("cls");
            mainHeader();
            submenubeforemainmenu("Login  > ");
            gotoxy(21, 65);
            SetConsoleTextAttribute(h, 4);
            cout << "---------------------------------------------";
            gotoxy(22, 65);
            cout << "|ERROR! Please Provide Valid Option To Enter|";
            gotoxy(23, 65);
            cout << "---------------------------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(24, 65);
            system("pause");
        }
    }
}

// ################################### >> Admin working all Function << ############################
void mainHeader()
{
    printMaze();
    SetConsoleTextAttribute(h, 6);
    gotoxy(2,2);
    cout << "                    _______                       __        __        __       __             __" << endl;
    gotoxy(3,2);
    cout << "                   |       \\                     |  \\      |  \\      |  \\     /  \\           |  \\" << endl;
    gotoxy(4,2);
    cout << "                   | $$$$$$$\\  ______    ______   \\$$  ____| $$      | $$\\   /  $$  ______  _| $$_     ______    ______       _______   ______   ______ ____" << endl;
    gotoxy(5,2);
    cout << "                   | $$__| $$ /      \\  /      \\ |  \\ /      $$      | $$$\\ /  $$$ /      \\|   $$ \\   /      \\  /      \\     /       \\ /      \\ |      \\    \\" << endl;
    gotoxy(6,2);
    cout << "                   | $$    $$|  $$$$$$\\|  $$$$$$\\| $$|  $$$$$$$      | $$$$\\  $$$$|  $$$$$$\\$$$$$$  |  $$$$$$\\|  $$$$$$\\   |  $$$$$$$|  $$$$$$\\| $$$$$$\\$$$$\\" << endl;
    gotoxy(7,2);
    cout << "                   | $$$$$$$\\| $$    $$| $$  | $$| $$| $$  | $$      | $$\\$$ $$ $$| $$    $$ | $$ __ | $$   \\$$| $$  | $$   | $$      | $$  | $$| $$ | $$ | $$" << endl;
    gotoxy(8,2);
    cout << "                   | $$  | $$| $$$$$$$$| $$__/ $$| $$| $$__| $$      | $$ \\$$$| $$| $$$$$$$$ | $$|  \\| $$      | $$__/ $$ __| $$_____ | $$__/ $$| $$ | $$ | $$" << endl;
    gotoxy(9,2);
    cout << "                   | $$  | $$ \\$$     \\| $$    $$| $$ \\$$    $$      | $$  \\$ | $$ \\$$     \\  \\$$  $$| $$       \\$$    $$|  \\$$     \\ \\$$    $$| $$ | $$ | $$" << endl;
    gotoxy(10,2);
    cout << "                    \\$$   \\$$  \\$$$$$$$| $$$$$$$  \\$$  \\$$$$$$$       \\$$      \\$$  \\$$$$$$$   \\$$$$  \\$$        \\$$$$$$  \\$$ \\$$$$$$$  \\$$$$$$  \\$$  \\$$  \\$$" << endl;
    gotoxy(11,2);
    cout << "                                       | $$" << endl;
    gotoxy(12,2);
    cout << "                                       | $$" << endl;
    gotoxy(13,2);
    cout << "                                       \\$$" << endl;
    SetConsoleTextAttribute(h, 7);
}
// .................................................submenubformainmenu...............

void submenubeforemainmenu(string submenu)
{
    gotoxy(X - 3, Y - 17);
    SetConsoleTextAttribute(h, 'F');
    cout << ch1 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << submenu << "Menu" << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch1;
     SetConsoleTextAttribute(h, 7);
}
void printMaze()
{
   system("cls");
    char character = 219, character1 = 220;
    SetConsoleTextAttribute(h, 6);
    for (int i = 0; i < 171; i++)
    {
        cout << character1;
    }
    cout<<endl;
    for (int i = 0; i < 60; i++)
    {
        for (int j = 0; j < 171; j++)
        {
            if (j==0  ||  j == 170)
            {
                SetConsoleTextAttribute(h, 1);
                cout << character;
                SetConsoleTextAttribute(h, 6);
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 171; i++)
    {
        SetConsoleTextAttribute(h, 6);
        cout << character1;
        SetConsoleTextAttribute(h, 7);
    }
}
void printMenusBorder(int num)
{

    for (int i = 0; i < num; i++)
    {
        cout << ch2;
    }
}
void AdminHeader()
{
    printMaze();
    SetConsoleTextAttribute(h, 6);
    gotoxy(2,2);
    cout << "                                 ______         __                __                  _______   __                      __" << endl;
    gotoxy(3,2);
    cout << "                                /      \\       |  \\              |  \\                |       \\ |  \\                    |  \\" << endl;
    gotoxy(4,2);
    cout << "                               |  $$$$$$\\  ____| $$ ______ ____   \\$$ _______        | $$$$$$$\\| $$  ______    _______ | $$   __" << endl;
    gotoxy(5,2);
    cout << "                               | $$__| $$ /      $$|      \\    \\ |  \\|       \\       | $$__/ $$| $$ /      \\  /       \\| $$  /  \\" << endl;
    gotoxy(6,2);
    cout << "                               | $$    $$|  $$$$$$$| $$$$$$\\$$$$\\| $$| $$$$$$$\\      | $$    $$| $$|  $$$$$$\\|  $$$$$$$| $$_/  $$" << endl;
    gotoxy(7,2);
    cout << "                               | $$$$$$$$| $$  | $$| $$ | $$ | $$| $$| $$  | $$      | $$$$$$$\\| $$| $$  | $$| $$      | $$   $$" << endl;
    gotoxy(8,2);
    cout << "                               | $$  | $$| $$__| $$| $$ | $$ | $$| $$| $$  | $$      | $$__/ $$| $$| $$__/ $$| $$_____ | $$$$$$\\" << endl;
    gotoxy(9,2);
    cout << "                               | $$  | $$ \\$$    $$| $$ | $$ | $$| $$| $$  | $$      | $$    $$| $$ \\$$    $$ \\$$     \\| $$  \\$$\\" << endl;
    gotoxy(10,2);
    cout << "                                \\$$   \\$$  \\$$$$$$$ \\$$  \\$$  \\$$ \\$$ \\$$   \\$$       \\$$$$$$$  \\$$  \\$$$$$$   \\$$$$$$$ \\$$   \\$$" << endl;
    SetConsoleTextAttribute(h, 7);
}

//.......................................loginMenu  function.....................
char loginMenu()
{
    char option;
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(h, 'F');
    gotoxy(X, Y + 5);
    printMenusBorder(17);
    gotoxy(X + 1, Y + 5);
    cout << ch1 << "    1: Admin   " << ch1;
    gotoxy(X + 2, Y + 5);
    printMenusBorder(17);
    gotoxy(X + 3, Y + 5);
    cout << ch1 << "    2: Manager " << ch1;
    gotoxy(X + 4, Y + 5);
    printMenusBorder(17);
    gotoxy(X + 5, Y + 5);
    cout << ch1 << "    3: User    " << ch1;
    gotoxy(X + 6, Y + 5);
    printMenusBorder(17);
    gotoxy(X + 7, Y + 5);
    cout << ch1 << "    4: Exit    " << ch1;
    gotoxy(X + 8, Y + 5);
    printMenusBorder(17);
    gotoxy(X + 9, Y + 5);
    cout << ch1 << " your Option.. " << ch1;
    gotoxy(X + 10, Y + 5);
    printMenusBorder(17);
    gotoxy(X + 9, Y + 20);
    cin >> option;
    SetConsoleTextAttribute(h, 7);
    return option;
}
void adminworking()                         //***************>> ADMIN WORKING FUCTION << ***********
{
    char option = ' ';

    while (true)
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("admin ");
        option = adminMenu();
        if (option == '1')
        {
            system("cls");
            addManager();
            continue;
        }
        else if (option == '2')
        {
            system("cls");
            deleteManager();
            continue;
        }
        else if (option == '3')
        {
            system("cls");
            updateManager();
            continue;
        }
        else if (option == '4')
        {
            system("cls");
            viewAllManager();
            continue;
        }
        else if (option == '5')
        {
            system("cls");
            allBusesDetail();
            continue;
        }
        else if (option == '6')
        {
            break;
        }
        else
        {
            system("cls");
            AdminHeader();
            submenubeforemainmenu("Admin > ");
            gotoxy(21, 65);
            SetConsoleTextAttribute(h, 4);
            cout << "-----------------------------------------";
            gotoxy(22, 65);
            cout << "|ERROR! You Enter Wrong Option Try Again|";
            gotoxy(23, 65);
            cout << "-----------------------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(24, 65);
            system("pause");
            continue;
        }
    }
}
char adminMenu()                       // ******************* >> ADMIN MENU START << ************
{
    char option = ' ';
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(h, 'F');
    gotoxy(X, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 1, Y - 5);
    cout << ch1 << "      1. Add manager:            " << ch1 << endl;
    gotoxy(X + 2, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 3, Y - 5);
    cout << ch1 << "      2. Delete manager:         " << ch1 << endl;
    gotoxy(X + 4, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 5, Y - 5);
    cout << ch1 << "      3. Update manager :        " << ch1 << endl;
    gotoxy(X + 6, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 7, Y - 5);
    cout << ch1 << "      4. See all manager detail: " << ch1 << endl;
    gotoxy(X + 8, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 9, Y - 5);
    cout << ch1 << "      5. See all buses detail:   " << ch1 << endl;
    gotoxy(X + 10, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 11, Y - 5);
    cout << ch1 << "      6. Exit:                   " << ch1 << endl;
    gotoxy(X + 12, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 13, Y - 5);
    cout << ch1 << "       You option..              " << ch1 << endl;
    gotoxy(X + 14, Y - 5);
    printMenusBorder(35);
    gotoxy(X + 13, Y + 25);
    cin >> option;
    SetConsoleTextAttribute(h, 7);
    return option;
}
bool checkAdminPassword()           //  ************ >> CHECK ADMMIN PASSWORD IS VALID << ***********
{
    system("cls");
    AdminHeader();
    submenubeforemainmenu("Admin Login >>");
    cout << endl;
    string adminName, admin_name, adminPassword;
    bool result;
    gotoxy(18, 65);
    cout << "Enter admin name : ";
    cin.clear();
    cin.sync();
    getline(cin, admin_name);
    adminName = checkNameisValid(admin_name, 18, 65, "admin");
    gotoxy(19, 65);
    cout << "Enter admin password : ";
    cin >> adminPassword;
    result = checkAdminPasswordRequirement(adminName, adminPassword);
    if (result == 1)
    {
        return 1;
    }
    return 0;
}
bool inputDataForCheckManagerIsValid()      // ************ >> INPUT DATA FOR CHEING MANAGEGER NAME << *************
{
    string manager_name;
    gotoxy(16, 70);
    cout << "Enter your name : ";
    cin.clear();
    cin.sync();
    getline(cin, manager_name);
    name = checkNameisValid(manager_name, 16, 70, "manager");
    gotoxy(17, 70);
    cout << "Enter you password: ";
    cin >> password;
    return checkmanager(name, password);
}
char showErrorForAdmin()           //*********** >> SHOW ERROR! MASSAGE << ************
{
    system("cls");
    mainHeader();
    gotoxy(21, 65);
    SetConsoleTextAttribute(h, 4);
    cout << "---------------------------------------------";
    gotoxy(22, 65);
    cout << "|ERROR! You Provide Wrong Password try later|";
    gotoxy(23, 65);
    cout << "---------------------------------------------";
    SetConsoleTextAttribute(h, 7);
    gotoxy(24, 65);
    system("pause");
    system("cls");
    mainHeader();
    submenubeforemainmenu("Admin ");
    char ch;
    gotoxy(20, 65);
    cout << "Change password Y else any other key : ";
    cin >> ch;
    return ch;
}
bool checkAdminPasswordRequirement(string adminName, string adminPassword)
{
    if (adminName == adminNames && adminPassword == adminPasswords)
    {
        return 1;
    }
    return 0;
}
void changeAdminPassword()                 //********** >> ENTER VALUES FOR CAHNGE ADMIN << **********
{
    system("cls");
    mainHeader();
    submenubeforemainmenu("change Admin password > ");
    string specialName, specialColor, fruit;
    int num;
    gotoxy(17, 65);
    cout << "Enter you special Name : ";
    cin.clear();
    cin.sync();
    getline(cin, specialName);
    gotoxy(18, 65);
    cout << "Enter your special color : ";
    cin.clear();
    cin.sync();
    getline(cin, specialColor);
    gotoxy(19, 65);
    cout << "Enter you special fruit : ";
    cin.clear();
    cin.sync();
    getline(cin, fruit);
    gotoxy(20, 65);
    cout << "Etner you special number : ";
    cin >> num;
    checkRequirementsForChangeAdminPassword(specialName, specialColor, fruit, num);
}
void checkRequirementsForChangeAdminPassword(string specialName, string specialColor, string fruit, int num)
{
    system("cls");
    mainHeader();
    submenubeforemainmenu("change Admin password > ");
    string newAdminName, newAdminPassword;
    if (specialName == "Danish" && specialColor == "White" && fruit == "Apple" && num == 786)
    {
        string new_name;
        gotoxy(17, 65);
        cout << "Yes! You can change admin " << endl;
        gotoxy(18, 65);
        system("pause");
        gotoxy(19, 65);
        cout << "Enter new admin Name: ";
        cin.clear();
        cin.sync();
        getline(cin, new_name);
        newAdminName = checkNameisValid(new_name, 18, 65, "admin");
// *********************** >> ADMIN NEW PASSWORD << *****************************
        gotoxy(20, 65);
        cout << "Enter new Admin password : ";
        cin >> newAdminPassword;
        adminNames = newAdminName;
        adminPasswords = newAdminPassword;
       // storeAdminCredential( adminname,adminpassword);
        storeAdminCredential( adminNames,  adminPasswords);
    }
    else
    {
        gotoxy(21, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------";
        gotoxy(22, 65);
        cout << "|ERROR! You Provided Wrong Information|";
        gotoxy(23, 65);
        cout << "---------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(24, 65);
        system("pause");
    }
}
// ************************ >> ADD MANAGER FUCNTION << *****************
void addManager()
{

    system("cls");
    AdminHeader();
    submenubeforemainmenu("Admin > AddManager ");
    string name, password, managerEmails, managerPhoneNumbers, manager_name;
    gotoxy(18, 65);
    cout << "Enter Manager name : ";
    cin.clear();
    cin.sync();
    getline(cin, manager_name);
    name = checkNameisValid(manager_name, 18, 65, "manager");
    gotoxy(19, 65);
    cout << "Enter the manager Email  : ";
    cin.clear();
    cin.sync();
    getline(cin, managerEmails);
    managerPhoneNumbers = checkPhoneNumber(); // check the digits in phone number..
    gotoxy(18, 65);
    cout << "Enter the Password : ";
    cin >> password;
    addmanagerdetail(name, password, managerEmails, managerPhoneNumbers);
    storeManagerCredential(name, password, managerPhoneNumbers, managerEmails);
}
string checkPhoneNumber()  //********************* >> CHECK PHONE NUMBER IS VALID OR NOT
{
    string managerPhoneNumbers;
    while (true)
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("Add manager");
        gotoxy(17, 65);
        cout << "Enter the Manger phone number  : ";
        cin.clear();
        cin.sync();
        getline(cin, managerPhoneNumbers);
        int length = managerPhoneNumbers.length();

        int numberCount = 0;
        for (int idx = 0; idx < length; idx++)
        {
            if (managerPhoneNumbers[idx] >= 0)
            {
                numberCount++;
                if (numberCount == 11)
                {
                    return managerPhoneNumbers;
                }
            }
        }
        if (numberCount == 11)
        {
            break;
        }
        else
        {
            gotoxy(18, 60);
            cout << "Enter digit only and complete PhoneNumber :- " << endl;
            gotoxy(19, 60);
            system("pause");
            continue;
        }
    }
}


void addmanagerdetail(string name, string password, string managerEmails, string managerPhoneNumbers)
{
   
    if (checkmanager(name,password))
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("Admin > Add Manager ");
        gotoxy(21, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "-----------------------------------------------";
        gotoxy(22, 65);
        cout << "|SORRY! Managers IS Available Please try later|";
        gotoxy(23, 65);
        cout << "----------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(24, 65);
        system("pause");
    }
    else
    {
        addManagerToArray(name, password, managerEmails, managerPhoneNumbers);
    }
    system("cls");
}
void addManagerToArray(string name, string password, string managerEmails, string managerPhoneNumbers)
{
    managerName[managerCounts] = name;
    managerPassword[managerCounts] = password;
    managerEmail[managerCounts] = managerEmails;
    managerPhoneNumber[managerCounts] = managerPhoneNumbers;
    managerCounts++;
}

string checkNameisValid(string name, int x, int y, string header) // ********** >> CHECK NAME IS VALID << ************
{
    int length = name.length();

    int checkCount = 0, letterCount = 0;
    while (true)
    {
        if (checkCount == 1)
        {
            if (header == "manager")
            {
                printMaze();
                managerHeader();
                submenubeforemainmenu(" Manager > ");
            }
            else if (header == "admin")
            {
                printMaze();
                AdminHeader();
                submenubeforemainmenu(" Admin > ");
            }
            else if (header == "user")
            {
                printMaze();
                userHeader();
                submenubeforemainmenu(" User > ");
            }

            string name;
            gotoxy(x, y);
            cout << "Enter name ";
            cout << name;
            getline(cin, name);
            length = name.length();
        }
        letterCount = 0;
        for (int i = 0; i < length; i++)
        {
            if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i]) == ' ')
            {
                letterCount++;
            }
        }

        if (letterCount == length)
        {
            return name;
        }
        else
        {
            gotoxy(21, 65);
            SetConsoleTextAttribute(h, 4);
            cout << "---------------------------------------------";
            gotoxy(22, 65);
            cout << "|PLEASE!  Use  only  Alphabat  for  name    |";
            gotoxy(23, 65);
            cout << "---------------------------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(24, 65);
            system("pause");
            system("cls");
            checkCount = 1;
            continue;
        }
    }
}
void deleteManager()         //************** >> DELETE MANAGER FUCTION << ************
{
    if (managerCounts > 0)
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("Admin > view manager and Delete  ");
        string name, email, manager_name;
        viewAllManager();
        gotoxy(28, 65);
        cout << "Enter manager name : ";
        cin.clear();
        cin.sync();
        getline(cin, manager_name);
        name = checkNameisValid(manager_name, 28, 65, "manager");
        gotoxy(29, 65);
        cout << "Enter manger Email : ";
        cin.clear();
        cin.sync();
        getline(cin, email);
        deleteManagerdetail(name, email);
    }
    else
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("Admin > Delete Manager Detail ");
        gotoxy(28, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------------";
        gotoxy(29, 65);
        cout << "|SORRY! No Managers Available Name try later|";
        gotoxy(30, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(31, 65);
        system("pause");
    }
}
void deleteManagerdetail(string name, string email)
{
    int newidx = 0, j = 0, option = 0;
    for (int idx = 0; idx < managerCounts; idx++)
    {
        if (managerName[idx] == name && managerEmail[idx] == email)
        {
            newidx = idx;
            option = 1;
            break;
        }
    }
    if (option == 1)
    {
        deleteManagerDataAfterChecking(newidx);
    }
    else
    {
        gotoxy(28, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------------";
        gotoxy(29, 65);
        cout << "|SORRY! No Managers Available Name try later|";
        gotoxy(30, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(31, 65);
        system("pause");
    }
}
void deleteManagerDataAfterChecking(int newidx)
{
    int j ;
    for (j = newidx; j < managerCounts; j++)
    {
        managerName[j] = managerName[j + 1];
        managerPassword[j] = managerPassword[j + 1];
        managerEmail[j] = managerEmail[j + 1];
        managerPhoneNumber[j] = managerPhoneNumber[j + 1];
    }
    managerCounts--;
    deleteManagerCredential();
    gotoxy(28, 65);
    cout << "---------------------------------------------";
    gotoxy(29, 65);
    cout << "|Congrats! Manager Data Deleted Successfully|";
    gotoxy(30, 65);
    cout << "---------------------------------------------";
    gotoxy(31, 65);
    system("pause");
}
void updateManager()
{
    string name;
    bool result;
    if (managerCounts > 0)
    {
        string manager_name;
        system("cls");
        AdminHeader();
        submenubeforemainmenu(" Admin > View  Manager Detail and Update  ");
        viewAllManager();
        gotoxy(28, 65);
        cout << "Enter manager email : ";
        cin.clear();
        cin.sync();
        getline(cin, email);
        gotoxy(29, 65);
        cout << "Enter manager Name : ";
        cin.clear();
        cin.sync();
        getline(cin, manager_name);
        name = checkNameisValid(manager_name, 29, 65, "manager");
        result = checkDataforUpdateManagaData(name,email);
        if (result == 1)
        {
            gettingNewManagerData();
        }
        else
        {
            system("cls");
            AdminHeader();
            submenubeforemainmenu("Admin > View Manager Detail Update ");
            gotoxy(29, 65);
            SetConsoleTextAttribute(h, 4);
            cout << "---------------------------------------------";
            gotoxy(30, 65);
            cout << "|SORRY! No Managers Available Name try later|";
            gotoxy(31, 65);
            cout << "---------------------------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(32, 65);
            system("pause");
        }
    }
    else
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("Admin > Update Manager ");
        gotoxy(30, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------------";
        gotoxy(31, 65);
        cout << "|SORRY! No Managers Available Name try later|";
        gotoxy(32, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(33, 65);
        system("pause");
    }
}
void gettingNewManagerData()
{
    system("cls");
    AdminHeader();
    submenubeforemainmenu("Admin > Update Manager ");
    string newEmail, newname, newpassword, newPhoneNumbers, manager_name;
    gotoxy(17, 65);
    cout << "Enter new Manager  name:- ";
    cin.clear();
    cin.sync();
    getline(cin, manager_name);
    newname = checkNameisValid(manager_name, 17, 65, "manager");
    gotoxy(18, 65);
    cout << "Enter new Manager password :- ";
    cin.clear();
    cin.sync();
    getline(cin, newpassword);
    gotoxy(19, 65);
    cout << "Enter new manager Email :- ";
    cin.clear();
    cin.sync();
    getline(cin, newEmail);
    newPhoneNumbers = checknewPhoneNumber();

    updateManagerDetail(newname, newpassword, newEmail, newPhoneNumbers);
}
string checknewPhoneNumber()
{
    string managerPhoneNumbers;
    while (true)
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("Add manager");
        gotoxy(17, 65);
        cout << "Enter the Manger phone number :- ";
        cin.clear();
        cin.sync();
        getline(cin, managerPhoneNumbers);
        int numberCount = checkManagerPhoneNumberIsValid(managerPhoneNumbers);

        if (numberCount == 11)
        {
            return managerPhoneNumbers;
        }
        else
        {
            gotoxy(21, 65);
            SetConsoleTextAttribute(h, 4);
            cout << "-------------------------------------------";
            gotoxy(22, 65);
            cout << "|Please! Use only Digits for mobile number|";
            gotoxy(23, 65);
            cout << "-------------------------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(24, 65);
            system("pause");
            continue;
        }
    }
}
int checkManagerPhoneNumberIsValid(string managerPhoneNumbers) 
{
    int numberCount = 0;
    int length = managerPhoneNumbers.length();
    for (int idx = 0; idx < length; idx++)
    {
        if (managerPhoneNumbers[idx] >= 0)
        {
            numberCount++;
        }
    }
    return numberCount;
}
bool checkDataforUpdateManagaData(string name,string email)
{

    for (int j = 0; j < managerCounts; j++)
    {
        if (managerEmail[j] == email && managerName[j] == name)
        {
            return 1;
        }
    }
    return 0;
}

void updateManagerDetail(string newname, string newpassword, string newEmail, string newPhoneNumbers)
{
    int newidx = 0;
    newidx = checkManagerEmailIsValid();

    if (newidx != -1)
    {
        managerName[newidx] = newname;
        managerPassword[newidx] = newpassword;
        managerEmail[newidx] = newEmail;
        managerPhoneNumber[newidx] = newPhoneNumbers;
        SetConsoleTextAttribute(h, 2);
        gotoxy(18,65);
        cout << "---------------------------------------------";
        gotoxy(19, 65);
        cout << "|Yes!  Manager  Data  Update   Successfully |";
        gotoxy(20, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
    }
    else
    {
        system("cls");
        AdminHeader();
        gotoxy(18, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------------";
        gotoxy(19, 65);
        cout << "|SORRY! No Managers Available Name try later|";
        gotoxy(20, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
    }
}
int checkManagerEmailIsValid()
{
    for (int j = 0 ; j < managerCounts ; j++)
    {
        if (managerEmail[j] == email)
        {
            return j;
        }
    }
    return -1;
}
void viewAllManager()
{
    system("cls");
    AdminHeader();
    submenubeforemainmenu("Admin > View Manager Detail ");

    if (managerCounts > 0)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 13);
        // cout << "Manager Name "<< "\t\t"<< "Manager password\t\t"<< "Manager Email\t\t"<< "Phone Number  " << endl;
        gotoxy(17, 40);
        cout << "Manager Name ";
        gotoxy(17, 65);
        cout << "Manager Password ";
        gotoxy(17, 90);
        cout << "Manager Email ";
        gotoxy(17, 115);
        cout << "Phone Number ";

        SetConsoleTextAttribute(h, 11);
        // cout << endl;
        for (int j = 0; j < managerCounts; j++)
        {

            //   cout << managerName[j] << "\t\t" << managerPassword[j] << "\t\t" << managerEmail[j] << "\t\t" << managerPhoneNumber[j] << endl;
            gotoxy(18 + j, 40);
            cout << managerName[j];
            gotoxy(18 + j, 65);
            cout << managerPassword[j];
            gotoxy(18 + j, 90);
            cout << managerEmail[j];
            gotoxy(18 + j, 115);
            cout << managerPhoneNumber[j];
            cout << endl;
        }
        SetConsoleTextAttribute(h, 1);
        gotoxy(managerCounts + 18, 80);
        system("pause");
    }
    else
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("view Manager Detail ");
        gotoxy(18, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------------";
        gotoxy(19, 65);
        cout << "|SORRY! No Managers Available Name try later|";
        gotoxy(20, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
    }
}

void allBusesDetail()
{
    {
        system("cls");
        AdminHeader();
        submenubeforemainmenu("view all buses detail > ");
        viewAllbuses();
    }
    // system("pause");
}
// ############################################### >> MANAGER ALL WORKING FUNCTION <<######################

void managerHeader()
{
    printMaze();
    SetConsoleTextAttribute(h, 6);
    gotoxy(2,2);
    cout << "                    __       __                                                                    _______   __                      __" << endl;
    gotoxy(3,2);
    cout << "                   |  \\     /  \\                                                                  |       \\ | \\                    |  \\" << endl;
    gotoxy(4,2);
    cout << "                   | $$\\   /  $$  ______   _______    ______    ______    ______    ______        | $$$$$$$\\| $$  ______    _______ | $$   __" << endl;
    gotoxy(5,2);
    cout << "                   | $$$\\ /  $$$ |      \\ |       \\  |      \\  /      \\  /      \\  /      \\       | $$__/ $$| $$ /      \\  /       \\| $$  /  \\" << endl;
    gotoxy(6,2);
    cout << "                   | $$$$\\  $$$$  \\$$$$$$\\| $$$$$$$\\  \\$$$$$$\\|  $$$$$$\\|  $$$$$$\\|  $$$$$$\\      | $$    $$| $$|  $$$$$$\\|  $$$$$$$| $$_/  $$" << endl;
    gotoxy(7,2);
    cout << "                   | $$\\$$ $$ $$ /      $$| $$  | $$ /      $$| $$  | $$| $$    $$| $$   \\$$      | $$$$$$$\\| $$| $$  | $$| $$      | $$   $$" << endl;
    gotoxy(8,2);
    cout << "                   | $$ \\$$$| $$|  $$$$$$$| $$  | $$|  $$$$$$$| $$__| $$| $$$$$$$$| $$            | $$__/ $$| $$| $$__/ $$| $$_____ | $$$$$$\\" << endl;
    gotoxy(9,2);
    cout << "                   | $$  \\$ | $$ \\$$    $$| $$  | $$ \\$$    $$ \\$$    $$ \\$$     \\| $$            | $$    $$| $$ \\$$    $$ \\$$     \\| $$  \\$$\\" << endl;
    gotoxy(10,2);
    cout << "                    \\$$      \\$$  \\$$$$$$$ \\$$   \\$$  \\$$$$$$$ _\\$$$$$$$  \\$$$$$$$ \\$$             \\$$$$$$$  \\$$  \\$$$$$$   \\$$$$$$$ \\$$   \\$$" << endl;
    gotoxy(11,2);
    cout << "                                                              |  \\__| $$    " << endl;
    gotoxy(12,2);
    cout << "                                                               \\$$    $$    " << endl;
    gotoxy(13,2);
    cout << "                                                                \\$$$$$$     " << endl;
    SetConsoleTextAttribute(h, 7);
}
bool checkmanager(string name, string password)
{

    for (int i = 0; i < managerCounts; i++)
    {
        if (managerName[i] == name && managerPassword[i] == password)
        {
            return 1;
        }
    }
    return 0;
}
void managerWorking()
{
    char option = ' ';
    while (true)
    {
        system("cls");
        printMaze();
        managerHeader();
        submenubeforemainmenu("Manager ");
        option = managerMenu();
        if (option == '1')
        {
            system("cls");
            addBuses();
            continue;
        }
        else if (option == '2')
        {
            system("cls");
            deleteBus();
            continue;
        }
        else if (option == '3')
        {
            system("cls");
            updateBus();
            continue;
        }
        else if (option == '4')
        {
            system("cls");
            {
                system("cls");
                managerHeader();
                submenubeforemainmenu("view all buses detail > ");
                viewAllbuses();
            }
            continue;
        }

        else if (option == '5')
        {
            system("cls");
            addDriver();
            continue;
        }
        else if (option == '6')
        {
            system("cls");
            deleteDriver();
            continue;
        }
        else if (option == '7')
        {
            system("cls");
            updateDriver();
            continue;
        }
        else if (option == '8')
        {
            system("cls");
            viewallDriver();
            continue;
        }

        else if (option == '9')
        {
            viewSoldTicket();
        }
         else if (option == 'V' || option =='v')
        {
            viewAllCustomer();
        }
        else if (option == 'E' || option == 'e')
        {
            break;
        }
        else
        {
            system("cls");
            managerHeader();
            submenubeforemainmenu("Manager > ");
            gotoxy(17, 70);
            SetConsoleTextAttribute(h, 4);
            cout << "---------------------------";
            gotoxy(18, 70);
            cout << "|Please Enter valid Option| ";
            gotoxy(19, 70);
            cout << "---------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(20, 70);
            system("pause");
            continue;
        }
    }
}
char managerMenu()
{
    char option;
    SetConsoleTextAttribute(h, 'F');
    gotoxy(X + 1, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 2, Y - 7);
    cout << ch1 << "             1. Add Bus detail             " << ch1 << endl;
    gotoxy(X + 3, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 4, Y - 7);
    cout << ch1 << "             2. Delete Bus detail          " << ch1 << endl;
    gotoxy(X + 5, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 6, Y - 7);
    cout << ch1 << "             3. Update Bus detail          " << ch1 << endl;
    gotoxy(X + 7, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 8, Y - 7);
    cout << ch1 << "             4. See all Buses detail       " << ch1 << endl;
    gotoxy(X + 9, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 10, Y - 7);
    cout << ch1 << "             5. Add Driver detail:         " << ch1 << endl;
    gotoxy(X + 11, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 12, Y - 7);
    cout << ch1 << "             6. Delete driver detail:      " << ch1 << endl;
    gotoxy(X + 13, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 14, Y - 7);
    cout << ch1 << "             7. Update driver detail:      " << ch1 << endl;
    gotoxy(X + 15, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 16, Y - 7);
    cout << ch1 << "             8. view all drivers detail:   " << ch1 << endl;
    gotoxy(X + 17, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 18, Y - 7);
    cout << ch1 << "             9. View All Sold Tickets:     " << ch1 << endl;
    gotoxy(X + 19, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 20, Y - 7);
    cout << ch1 << "             V. View All Users             " << ch1 << endl;
    gotoxy(X + 21, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 22, Y - 7);
    cout << ch1 << "             E. Exit                       " << ch1 << endl;
    gotoxy(X + 23, Y - 7);
    printMenusBorder(45);
    gotoxy(X + 24 , Y - 7);
    cout<< ch1  << "             You option....                " << ch1 ;
    gotoxy(X + 25, Y - 7);
     printMenusBorder(45);
    gotoxy(X + 24, 96);
    cin >> option;
    SetConsoleTextAttribute(h, 7);
    return option;
}

void addBuses()
{
    system("cls");
    managerHeader();
    submenubeforemainmenu("Manager > addBuses detail ");
    string busnumber;
     int  result;
    gotoxy(17, 65);
    cout << "Enter New bus ID :-";
    cin.clear();
    cin.sync();
    getline(cin, busnumber);
    result = checkbus(busnumber);
    if (result == -1)
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > add Bus");
        gotoxy(18, 65);
        cout << "--------------------------";
        gotoxy(19, 65);
        cout << "|Yes! you can add new bus|" << endl;
        gotoxy(20, 65);
        cout << "--------------------------";
        gotoxy(21, 65);
        system("pause");
        system("cls");
        addBusDetail(busnumber);
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > add Bus ");
        gotoxy(16, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "-----------------------------";
        gotoxy(17, 65);
        cout << "|ERROR! Bus is already found|" << endl;
        gotoxy(18, 65);
        cout << "-----------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(19, 65);
        system("pause");
    }
}
void addBusDetail(string busId)
{
    string bus_name, bus_company, bus_source, bus_destination;
    int bus_fare, bus_seats,available_seats;
    system("cls");
    managerHeader();
    submenubeforemainmenu("Manager > addBuses detail ");
    gotoxy(17, 65);
    cout << "Enter Bus name:-";
    cin.clear();
    cin.sync();
    getline(cin, bus_name);
    bus_name = checkNameisValid(bus_name, 15, 65, "manager");
    gotoxy(18, 65);
    cout << "Enter Bus company:-";
    cin.clear();
    cin.sync();
    getline(cin, bus_company);
    gotoxy(19, 65);
    cout << "Enter the bus starting point:-";
    cin.clear();
    cin.sync();
    getline(cin, bus_source);
    gotoxy(20, 65);
    cout << "Enter the Bus Ending point:-";
    cin.clear();
    cin.sync();
    getline(cin, bus_destination);
    gotoxy(21, 65);
    cout << "Enter the fare:-";
    cin >> bus_fare;
    gotoxy(22, 65);
    cout << "Enter total Seats of the bus:-";
    cin >> bus_seats;
     available_seats = bus_seats;
    addBusDetailIntoArray(busId, bus_name, bus_company, bus_source, bus_destination, bus_fare, bus_seats,available_seats);
    storeBusCredential(busId, bus_name, bus_company, bus_source, bus_destination, bus_fare, bus_seats,available_seats);
}
void addBusDetailIntoArray(string busId, string bus_name, string bus_company, string bus_source, string bus_destination, int bus_fare, int bus_seats,int available_seats)
{
    busID[busCounts] = busId;
    busName[busCounts] = bus_name;
    busCompany[busCounts] = bus_company;
    busFrom[busCounts] = bus_source;
    busto[busCounts] = bus_destination;
    fare[busCounts] = bus_fare;
    totalSeats[busCounts] = bus_seats;
    availableSeats[busCounts] = available_seats ;
    busCounts++;
}
int checkbus(string busnumber)
{
    
    for (int j = 0; j < busCounts; j++)
    {
        if (busID[j] == busnumber)
        {
            return j;
        }
    }
    return -1;
}
void deleteBus()
{
    if (busCounts > 0)
    {
        
        system("cls");
        managerHeader();
        submenubeforemainmenu("manager > delete Bus ");
        viewAllbuses();
        string busnumber;
        gotoxy(25, 65);
        cout << "Enter Bus ID:-";
        cin.clear();
        cin.sync();
        getline(cin, busnumber);
        deleteBusdetail(busnumber);
        // countinue();
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > Delete Bus");
        gotoxy(16, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "------------------------";
        gotoxy(17, 65);
        cout << "|ERROR! No Record Found|";
        gotoxy(18, 65);
        cout << "------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(19, 65);
        system("pause");
    }
}
void deleteBusdetail(string busnumber)
{
    int newidx = 0, option = 0;
    for (int idx = 0; idx < busCounts; idx++)
    {
        if (busID[idx] == busnumber)
        {
            option = 1;
            newidx = idx;
            break;
        }
    }
    if (option == 1)
    {
        deleteBusDetailFromArray(newidx);
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > Delete Bus ");
        gotoxy(26, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "-------------------------";
        gotoxy(27, 65);
        cout << "|ERROR! Bus is not Found|";
        gotoxy(28, 65);
        cout << "-------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(30, 65);
        system("pause");
    }
}
void deleteBusDetailFromArray(int newidx)
{
    for (int j = newidx; j < busCounts; j++)
    {
        busID[j] = busID[j + 1];
        busCompany[j] = busCompany[j + 1];
        busName[j] = busName[j + 1];
        busFrom[j] = busFrom[j + 1];
        busto[j] = busto[j + 1];
        fare[j] = fare[j + 1];
        totalSeats[j] = totalSeats[j + 1];
        availableSeats[j] = availableSeats[j+1];
    }
    busCounts--;
    void deleteBusData();
    gotoxy(18, 65);
    cout << "-------------------------------------------";
    gotoxy(19, 65);
    cout << "|Successfully! Bus detail has been Deleted|";
    gotoxy(20, 65);
    cout << "-------------------------------------------";
    gotoxy(21, 65);
    system("pause");
}
void updateBus()
{
    if (busCounts > 0)
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > update bus detail ");
        viewAllbuses();
        string num;
        int newidx = 0;
        int output = 0;
        gotoxy(26, 65);
        cout << "Enter bus ID:- ";
        cin.clear();
        cin.sync();
        getline(cin, num);
        newidx = checkbus(num);
        if (newidx != -1)
        {
            char option = updatebusdetail();
            if (option == '1')
            {
                UpdateAllBusDetail(newidx);
            }
            else if (option == '2')
            {
                updateSpecificDataOfTheBus(newidx);
            }

            else
            {
                gotoxy(28, 65);
                SetConsoleTextAttribute(h, 4);
                cout << "---------------------------";
                gotoxy(29, 65);
                cout << "|Please Enter Valid Option|";
                gotoxy(30, 65);
                cout << "---------------------------";
                SetConsoleTextAttribute(h, 7);
                gotoxy(31, 65);
                system("pause");
            }
        }
        else
        {
            system("cls");
            managerHeader();
            submenubeforemainmenu("Manager > Delete Bus detail");
            gotoxy(17, 65);
            SetConsoleTextAttribute(h, 4);
            cout << "------------------------";
            gotoxy(18, 65);
            cout << "|ERROR! NO bus is found|";
            gotoxy(19, 65);
            cout << "------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(20, 65);
            system("pause");
        }
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > Delete Bus detail");
        gotoxy(17, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "------------------------";
        gotoxy(18, 65);
        cout << "|ERROR! NO bus is found|";
        gotoxy(19, 65);
        cout << "------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(20, 65);
        system("pause");
    }
}
char updatebusdetail()
{
    system("cls");
    managerHeader();
    submenubeforemainmenu("Manager > update Bus detail ");
    char option = ' ';
    gotoxy(17, 65);
    printMenusBorder(35);
    gotoxy(18, 65);
    cout << ch1 << "     1. Update All Bus Detail    " << ch1;
    gotoxy(19, 65);
    printMenusBorder(35);
    gotoxy(20, 65);
    cout << ch1 << "     2. Update any Detail        " << ch1;
    gotoxy(21, 65);
    printMenusBorder(35);
    gotoxy(22, 65);
    cout << ch1 << "            Your Option..        " << ch1;
    gotoxy(23,65);
    printMenusBorder(35);
    gotoxy(22,95);
    cin >> option;
    return option;
}
void updateSpecificDataOfTheBus(int newidx)
{
    system("cls");
    managerHeader();
    submenubeforemainmenu(" Update Bus Data ");
    string choise;
    gotoxy(19, 65);
    SetConsoleTextAttribute(h,2);
    cout << "Enter (BusName, BusID, BusFrom, Busto, fare, busCompany,)which you want to update : ";
    gotoxy(20, 65);
    cout << "Enter What you want to Update of the Bus: ";
    gotoxy(20, 120);
    SetConsoleTextAttribute(h,7);
    cin >> choise;
    updateBusDetailAccortingTospecialSearch(choise, newidx);
}
void updateBusDetailAccortingTospecialSearch(string choise, int newidx)
{
    if (choise == "BusName")
    {
        string bus_name, bus_Name;
        gotoxy(22, 65);
        cout << "Enter new BusName:- ";
        getline(cin, bus_name);
        bus_Name = checkNameisValid(bus_name, 22, 65, "user");
        busName[newidx] = bus_Name;
        updateBusData();
        showMassageForBus(" Name ");
    }
    else if (choise == "BusID")
    {
        gotoxy(22, 65);
        cout << "Enter new Bus Id ";
        cin >> busID[newidx];
        updateBusData();
        gotoxy(25, 65);
        cout << "-----------------------------------";
        gotoxy(26, 65);
        cout << "|Congrats! Bus ID has been Updated|";
        gotoxy(27, 65);
        cout << "-----------------------------------";
        gotoxy(28, 65);
        system("pause");
    }
    else if (choise == "BusFrom")
    {
        gotoxy(22, 65);
        cout << "Enter new Bus Source. ";
        cin >> busFrom[newidx];
        updateBusData();
        gotoxy(25, 65);
        cout << "--------------------------------------";
        gotoxy(26, 65);
        cout << "|Congrats! Bus Source has been Updated|";
        gotoxy(27, 65);
        cout << "--------------------------------------";
        gotoxy(28, 65);
        system("pause");
    }
    else if (choise == "Busto")
    {
        gotoxy(22, 65);
        cout << "Enter new BusName ";
        cin >> busto[newidx];
        updateBusData();
        gotoxy(25, 65);
        cout << "--------------------------------------------";
        gotoxy(26, 65);
        cout << "|Congrats! Bus Destination has been Updated|";
        gotoxy(27, 65);
        cout << "--------------------------------------------";
        gotoxy(28, 65);
        system("pause");
    }
    else if (choise == "BusCompany")
    {
        gotoxy(22, 65);
        cout << "Enter  new BusCompany ";
        cin >> busCompany[newidx];
        updateBusData();
        gotoxy(25, 65);
        cout << "----------------------------------------";
        gotoxy(26, 65);
        cout << "|Congrats! Bus Company has been Updated|";
        gotoxy(27, 65);
        cout << "----------------------------------------";
        gotoxy(28, 65);
        system("pause");
    }
    else if (choise == "fare")
    {
        gotoxy(22, 65);
        cout << "Enter  new Bus Fare ";
        cin >> fare[newidx];
        updateBusData();
        gotoxy(25, 65);
        cout << "-------------------------------------";
        gotoxy(26, 65);
        cout << "|Congrats! Bus Fare has been Updated|";
        gotoxy(27, 65);
        cout << "-------------------------------------";
        gotoxy(28, 65);
        system("pause");
    }
    else if (choise == "totalSeats")
    {
        gotoxy(22, 65);
        cout << "Enter  bus total Seats ";
        cin >> totalSeats[newidx];
        availableSeats[newidx] = totalSeats[newidx];
        updateBusData();
        updateBusData();
        gotoxy(25, 65);
        cout << "--------------------------------------";
        gotoxy(26, 65);
        cout << "|Congrats! Bus Seats has been Updated|";
        gotoxy(27, 65);
        cout << "--------------------------------------";
        gotoxy(28, 65);
        system("pause");
    }
    else
    {
        gotoxy(25, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "-------------------------------------";
        gotoxy(26, 65);
        cout << "|ERROR! Please Enter Valid Attribute|";
        gotoxy(27, 65);
        cout << "-------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(28, 65);
        system("pause");
        return;
    }
}
void showMassageForBus(string massage)
{
    gotoxy(25, 65);
    cout << "--------------------------------------------";
    gotoxy(26, 65);
    cout << "|Congrats! Bus " << massage << " has been Updated   |";
    gotoxy(27, 65);
    cout << "--------------------------------------------";
    gotoxy(28, 65);
    system("pause");
}
void UpdateAllBusDetail(int newidx)
{
    system("cls");
    managerHeader();
    submenubeforemainmenu("Update Bus > ");
    string bus_Name, busname;
    gotoxy(19, 65);
    cout << "Enter bus  New name :- : ";
    cin.clear();
    cin.sync();
    getline(cin, bus_Name);
    busname = checkNameisValid(bus_Name, 19, 65, "manager");
    busName[newidx] = busname;
    gotoxy(21, 65);
    cout << "Enter bus  New company :-: ";
    cin.clear();
    cin.sync();
    getline(cin, busCompany[newidx]);
    gotoxy(22, 65);
    cout << "Enter update bus New ID :_  ";
    cin >> busID[newidx];
    gotoxy(23, 65);
    cout << "Enter bus  starting point := ";
    cin.clear();
    cin.sync();
    getline(cin, busFrom[newidx]);
    gotoxy(24, 65);
    cout << "Enter bus ending point :- ";
    cin.clear();
    cin.sync();
    getline(cin, busto[newidx]);
    gotoxy(25, 65);
    cout << "Enter bus Fare :- :";
    cin >> fare[newidx];
    gotoxy(26, 65);
    cout << "Enter bus Seats :- ";
    cin >> totalSeats[newidx];
    totalSeats[newidx] = availableSeats[newidx];
    updateBusData();
    gotoxy(27, 65);
    cout << "---------------------------------------";
    gotoxy(28, 65);
    cout << "|Congrats! Bus Detail has been Updated|";
    gotoxy(29, 65);
    cout << "---------------------------------------";
    gotoxy(30, 65);
    system("pause");
}
void viewAllbuses()
{
    // .............................output buses detail in ascending order..................
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 13);
    cout << endl
         << endl
         << endl
         << endl;
    // cout << "BusID\t"<< "Bus Name\t"<< "Bus Company\t"<< "Starting \t"<< "Ending\t "<< "Fare" << endl;
    gotoxy(16, 10);
    cout << "Bus ID";
    gotoxy(16, 30);
    cout << "Bus Name";
    gotoxy(16, 50);
    cout << "Bus company";
    gotoxy(16, 70);
    cout << "Starting ";
    gotoxy(16, 90);
    cout << "Distination";
    gotoxy(16, 110);
    cout << "Fare";
    gotoxy(16, 130);
    cout << "Total Seats";
    gotoxy(16,150);
    cout<<"Available Seats";
    cout<<endl;
    cout << endl;
    for (int i = 0; i < busCounts; i++)
    {
        SetConsoleTextAttribute(h, 11);
        // cout << busID[i] << "\t" << busName[i] << "\t\t" << busCompany[i] << "\t\t" << busFrom[i] << "\t" << busto[i] << "\t" << fare[i] << endl;
        gotoxy(17 + i, 10);
        cout << busID[i];
        gotoxy(17 + i, 30);
        cout << busName[i];
        gotoxy(17 + i, 50);
        cout << busCompany[i];
        gotoxy(17 + i, 70);
        cout << busFrom[i];
        gotoxy(17 + i, 90);
        cout << busto[i];
        gotoxy(17 + i, 110);
        cout << fare[i];
        gotoxy(17 + i, 130);
        cout << totalSeats[i];
        gotoxy(17 + i,150 );
        cout<< availableSeats[i];
        cout << endl;
    }
    cout << endl;
    gotoxy(busCounts + 19, 70);
    system("pause");
}
void addDriver()
{
    system("cls");
    managerHeader();
    submenubeforemainmenu("Manager > add Driver detail ");
    string licensenum;
    bool result = 0;
    gotoxy(15, 65);
    cout << "Enter deiver license number :- ";
    cin.clear();
    cin.sync();
    getline(cin, licensenum);
    result = checklicense(licensenum);
    varificationAndAddDriver(result, licensenum);
}
void varificationAndAddDriver(int result, string licensenum)
{
    if (result == 0)
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > add Driver detail ");
        gotoxy(19, 65);
        cout << "--------------------------------------";
        gotoxy(20, 65);
        cout << "|Congrats! You have access to add Bus|";
        gotoxy(21, 65);
        cout << "--------------------------------------";
        gotoxy(22, 65);
        system("pause");
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > Add Driver detail ");
        addDriverDetail(licensenum);
        driverCounts++;
        //  drivercount = 1
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > Add Driver Detail ");
        gotoxy(18, 65);
        cout << "-----------------------------------";
        gotoxy(19, 65);
        cout << "|ERORR! Liscense is Already Exist |";
        gotoxy(20, 65);
        cout << "-----------------------------------";
        gotoxy(21, 65);
        system("pause");
        system("cls");
    }
}
bool checklicense(string licensenum)
{
    for (int j = 0; j < driverCounts; j++)
    {
        if (driverLicense[j] == licensenum)
        {
            return 1;
        }
    }
    return 0;
}
void addDriverDetail(string licensenum)
{
    string drivername, driverId, driverlicense, driver_Name, driver_name;
    gotoxy(17, 65);
    cout << "Enter driver Name :- ";
    cin.clear();
    cin.sync();
    getline(cin, driver_name);
    driver_Name = checkNameisValid(driver_name, 17, 65, "manager");
    driverName[driverCounts] = driver_Name;
    gotoxy(18, 65);
    cout << "Enter driver ID  :- ";
    cin >> driverID[driverCounts];
    driverLicense[driverCounts] = licensenum;
    drivername = driverID[driverCounts];
    driverId = driverID[driverCounts];
    driverlicense = licensenum;
    storeDriverCredential(drivername, driverId, driverlicense);
    gotoxy(21, 65);
    cout << "-------------------------------------";
    gotoxy(22, 65);
    cout << "|Congrats! Driver added Suscessfully|";
    gotoxy(23, 65);
    cout << "-------------------------------------";
    gotoxy(24, 65);
    system("pause");
}
void deleteDriver()
{
    if (driverCounts > 0)
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("manager > delete driver ");
        string driverlicense = " ";
        gotoxy(17, 65);
        cout << "Enter driver License :- ";
        cin >> driverlicense;
        deleteDriverDetail(driverlicense);
    }
    else
    {
        showMassageDriverNotExist();
    }
}
void deleteDriverDetail(string driverlicense)
{
    int newidx = 0, option = 0;
    newidx = checkAndDeleteDriver(driverlicense);
    if (newidx != -1)
    {
        deleteDriverdetailAfterChacking(newidx);
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > delete Driver ");
        showMassageDriverNotExist();
    }
}
int checkAndDeleteDriver(string driverlicense)
{
    for (int idx = 0; idx < driverCounts; idx++)
    {
        if (driverLicense[idx] == driverlicense)
        {
            gotoxy(20, 65);
            cout << "----------------------------------";
            gotoxy(21, 65);
            cout << "|Congrats! Driver Detail Deleted |";
            gotoxy(22, 65);
            cout << "----------------------------------";
            gotoxy(23, 65);
            system("pause");
            return idx;
        }
    }
    return -1;
}
void deleteDriverdetailAfterChacking(int newidx)
{
    for (int j = newidx; j < driverCounts; j++)
    {
        driverID[j] = driverID[j + 1];
        driverName[j] = driverName[j + 1];
        driverLicense[j] = driverLicense[j + 1];
    }
    driverCounts--;
    deleteDriverData();
}
void showMassageDriverNotExist()
{
    gotoxy(20, 65);
    SetConsoleTextAttribute(h, 4);
    cout << "-------------------------------";
    gotoxy(21, 65);
    cout << "|ERORR! No Driver Detail Exist|";
    gotoxy(22, 65);
    cout << "-------------------------------";
    SetConsoleTextAttribute(h, 7);
    gotoxy(23, 65);
    system("pause");
}
void updateDriver()
{
    if (driverCounts > 0)
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > update driver detail ");
        int newidx = 0;
        string num;
        gotoxy(17, 65);
        cout << "Enter driver ID  :- ";
        cin >> num;
        newidx = checkDriverIDIsValid(num);
        checkDriverDetailISUpdate(newidx);
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > update Driver data ");
        showMassageDriverNotExist();
    }
}
int checkDriverIDIsValid(string num)
{
    for (int j = 0; j < driverCounts; j++)
    {
        if (driverID[j] == num)
        {
            return j;
        }
    }
    return -1;
}
void checkDriverDetailISUpdate(int newidx)
{
    if (newidx != -1)
    {

        updatedDriverData(newidx);
        gotoxy(22, 65);
        cout << "--------------------------------";
        gotoxy(23, 65);
        cout << "|Congrats! Driver Detail Updated|";
        gotoxy(24, 65);
        cout << "--------------------------------";
        gotoxy(26, 65);
        system("pause");
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("Manager > Update Driver Detail ");
        showMassageDriverNotExist();
    }
}
void updatedDriverData(int newidx)
{
    string driver_name, driver_Name;
    gotoxy(18, 65);
    cout << "Enter new driver name :- ";
    cin.clear();
    cin.sync();
    getline(cin, driver_name);
    driver_Name = checkNameisValid(driver_name, 17, 67, "manager");
    driverName[newidx] = driver_Name;
    gotoxy(19, 65);
    cout << "Enter Driver licence :- ";
    cin.clear();
    cin.sync();
    getline(cin, driverLicense[newidx]);
    gotoxy(20, 65);
    cout << "Enter driver New ID :- ";
    cin >> driverID[newidx];
    updateDriverData();
}
void viewallDriver()
{
    system("cls");
    managerHeader();
    submenubeforemainmenu("Manager >  view all Driver detail ");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 13);
    // cout << "Driver ID\t"<< "Driver Name\t"<< "Driver License\t" << endl;
    gotoxy(17, 60);
    cout << "Driver ID";
    gotoxy(17, 80);
    cout << "Driver Name";
    gotoxy(17, 100);
    cout << "Driver License";
    cout << endl;
    for (int i = 0; i < driverCounts; i++)
    {
        SetConsoleTextAttribute(h, 11);
        // cout << driverID[i] << "\t" << driverName[i] << "\t\t" << driverLicense[i] << endl;
        gotoxy(18 + i, 60);
        cout << driverID[i];
        gotoxy(18 + i, 80);
        cout << driverName[i];
        gotoxy(18 + i, 100);
        cout << driverLicense[i];
        cout << endl;
    }
    gotoxy(driverCounts + 20, 80);
    system("pause");
}
void viewAllCustomer()
{
    if(usersCount > 0)
    {
    system("cls");
    managerHeader();
    submenubeforemainmenu("Manager >  view all Users detail ");
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 13);
    // cout << "Driver ID\t"<< "Driver Name\t"<< "Driver License\t" << endl;
    gotoxy(17, 50);
    cout<<"NO";
    gotoxy(17, 60);
    cout << "User Name";
    gotoxy(17, 100);
    cout << "User password";
    cout << endl;
    for (int i = 0; i < usersCount; i++)
    {
        SetConsoleTextAttribute(h, 11);
        // cout << driverID[i] << "\t" << driverName[i] << "\t\t" << driverLicense[i] << endl;
        gotoxy(19 + i, 50);
        cout<<i+1;
        gotoxy(19 + i, 60);
        cout << users[i];
        gotoxy(19 + i, 100);
        cout << passwords[i];
        cout << endl;
    }
    gotoxy(usersCount + 21, 80);
    system("pause");
    }
    else
    {
        system("cls");
        managerHeader();
        submenubeforemainmenu("view Users Detail ");
        gotoxy(18, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------------";
        gotoxy(19, 65);
        cout << "|SORRY! No  User  Available  try  later     |";
        gotoxy(20, 65);
        cout << "---------------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
    }
}

// ############################################## >> CUSTOMER WORKING FUNCTION << ##########################

void userHeader()
{
    printMaze();
    SetConsoleTextAttribute(h, 6);
    gotoxy(2,2);
    cout << "                           ______                         __                                                        _______   __                      __" << endl;
    gotoxy(3,2);
    cout << "                          /      \\                       |  \\                                                      |       \\ |  \\                    |  \\" << endl;
    gotoxy(4,2);
    cout << "                         |  $$$$$$\\ __    __   _______  _| $$_     ______   ______ ____    ______    ______        | $$$$$$$\\| $$  ______    _______ | $$   __" << endl;
    gotoxy(5,2);
    cout << "                         | $$   \\$$|  \\  |  \\ /       \\|   $$ \\   /      \\ |      \\    \\  /      \\  /      \\       | $$__/ $$| $$ /      \\  /       \\| $$  /  \\" << endl;
    gotoxy(6,2);
    cout << "                         | $$      | $$  | $$|  $$$$$$$ \\$$$$$$  |  $$$$$$\\| $$$$$$\\$$$$\\|  $$$$$$\\|  $$$$$$\\      | $$    $$| $$|  $$$$$$\\|  $$$$$$$| $$_/  $$" << endl;
    gotoxy(7,2);
    cout << "                         | $$   __ | $$  | $$ \\$$    \\   | $$ __ | $$  | $$| $$ | $$ | $$| $$    $$| $$   \\$$      | $$$$$$$\\| $$| $$  | $$| $$      | $$   $$" << endl;
    gotoxy(8,2);
    cout << "                         | $$__/  \\| $$__/ $$ _\\$$$$$$\\  | $$|  \\| $$__/ $$| $$ | $$ | $$| $$$$$$$$| $$            | $$__/ $$| $$| $$__/ $$| $$_____ | $$$$$$\\" << endl;
    gotoxy(9,2);
    cout << "                          \\$$    $$ \\$$    $$|       $$   \\$$  $$ \\$$    $$| $$ | $$ | $$ \\$$     \\| $$            | $$    $$| $$ \\$$    $$ \\$$     \\| $$  \\$$\\" << endl;
    gotoxy(10,2);
    cout << "                           \\$$$$$$   \\$$$$$$  \\$$$$$$$     \\$$$$   \\$$$$$$  \\$$  \\$$  \\$$  \\$$$$$$$ \\$$             \\$$$$$$$  \\$$  \\$$$$$$   \\$$$$$$$ \\$$   \\$$" << endl;
    SetConsoleTextAttribute(h, 7);
}
char loginmenu()
{
    char option;
    gotoxy(X, Y - 2);
    SetConsoleTextAttribute(h, 'F');
    printMenusBorder(40);
    gotoxy(X + 1, Y - 2);
    cout << ch1 << "   1. SignIn with your Credentials    " << ch1 << endl;
    gotoxy(X + 2, Y - 2);
    printMenusBorder(40);
    gotoxy(X + 3, Y - 2);
    cout << ch1 << "   2. SignUp to get your Credentials  " << ch1 << endl;
    gotoxy(X + 4, Y - 2);
    printMenusBorder(40);
    gotoxy(X + 5, Y - 2);
    cout << ch1 << "   3. Exit                            " << ch1 << endl;
    gotoxy(X + 6, Y - 2);
    printMenusBorder(40);
    gotoxy(X + 7, Y - 2);
    cout << ch1 << "      Your Option ...                 " << ch1 << endl;
    gotoxy(X + 8, Y - 2);
    printMenusBorder(40);
    gotoxy(X + 7, Y - 2 + 30);
    cin >> option;
    SetConsoleTextAttribute(h, 7);
    return option;
}
void takeSignInInput()
{
    string name_user;
    gotoxy(17, 67);
    cout << "Enter Your name :- ";
    cin.clear();
    cin.sync();
    getline(cin, name_user);
    name = checkNameisValid(name_user, 17, 67, "user");
    gotoxy(18, 67);
    cout << "Enter Your Password (without space) :- ";
    cin >> password;
}
void takeSignUpInput()
{
    string name_user;
    gotoxy(17, 67);
    cout << "Enter Your name :- ";
    cin.clear();
    cin.sync();
    getline(cin, name_user);
    name = checkNameisValid(name_user, 17, 67, "user");
    gotoxy(18, 67);
    cout << "Enter Your Password (without space) :- ";
    cin.clear();
    cin.sync();
    getline(cin, password);
}
void userWorking()
{
    char loginOption = ' ';
    int num = 0;
    system("cls");
    userHeader();
    submenubeforemainmenu("Customer Login >> ");

    while (true)
    {
        system("cls");
        userHeader();
        submenubeforemainmenu("Customer Login >> ");
        loginOption = loginmenu();
        if (loginOption == '1')
        {
            system("cls");
            bool identity;
            userHeader();
            submenubeforemainmenu("Customer SignIn >>");
            takeSignInInput();
            identity = checkUserForSignIn();
            //...................................user working if have account............

            if (identity)
            {
                char option = ' ';

                while (option != '5')
                {
                    system("cls");
                    userHeader();
                    submenubeforemainmenu("Customer >> ");
                    option = userMenu();
                    if (option == '1')
                    {
                        system("cls");
                        {
                            system("cls");
                            userHeader();
                            submenubeforemainmenu("view all buses detail > ");
                            viewAllbuses();
                        }
                        continue;
                    }
                    else if (option == '2')
                    {
                        system("cls");
                        buyticket();
                        continue;
                    }
                    else if (option == '3')
                    {
                        system("cls");
                        cancleticket();
                        continue;
                    }
                    else if (option == '4')
                    {
                        system("cls");
                        generateInVoice();
                        continue;
                    }
                }
            }
            else
            {
                gotoxy(21, 65);
                SetConsoleTextAttribute(h, 4);
                cout << "---------------------------------------------";
                gotoxy(22, 65);
                cout << "|SORRY! No Acount Available Please try later|";
                gotoxy(23, 65);
                cout << "---------------------------------------------";
                SetConsoleTextAttribute(h, 7);
                gotoxy(24, 65);
                system("pause");
                continue;
            }
        }

        else if (loginOption == '2')
        {
            system("cls");
            mainHeader();
            submenubeforemainmenu("SignUp");
            takeSignUpInput();
            bool identity = checkUserExist();
            if (!identity)
            {
                addUserToArray(name, password);
                gotoxy(22, 67);
                cout << "-----------------------------";
                gotoxy(23, 67);
                cout << "|Congrats! Acount is Created|";
                gotoxy(24, 67);
                cout << "-----------------------------";
                gotoxy(26, 67);
                system("pause");
            }
            else
            {
                gotoxy(22, 67);
                SetConsoleTextAttribute(h, 4);
                cout << "-----------------------------------";
                gotoxy(23, 67);
                cout << "|ERORR! User Name is already Exist|";
                gotoxy(24, 67);
                cout << "-----------------------------------";
                SetConsoleTextAttribute(h, 7);
                gotoxy(25, 67);
                system("pause");
            }
        }
        else if (loginOption == '3')
        {
            break;
        }
        else
        {
            system("cls");
            mainHeader();
            submenubeforemainmenu("User login ");
            gotoxy(22, 67);
            SetConsoleTextAttribute(h, 4);
            cout << "----------------------------------";
            gotoxy(23, 67);
            cout << "|ERORR! Please Enter Valid Option|";
            gotoxy(24, 67);
            cout << "----------------------------------";
            SetConsoleTextAttribute(h, 7);
            gotoxy(26, 68);
            system("pause");
            system("cls");
        }
    }
}
void addUserToArray(string name, string password)
{
    users[usersCount] = name;
    passwords[usersCount] = password;
    usersCount++;
    storeUsercredential(name, password);
}
bool checkUserForSignIn()
{
    for (int j = 0; j < usersCount; j++)
    {
        if (users[j] == name && passwords[j] == password)
        {
            return 1;
        }
    }
    return 0;
}
bool checkUserExist()
{
    for (int j = 0; j < usersCount; j++)
    {
        if (users[j] == name && passwords[j] == password)
        {
            return true;
        }
    }
    return false;
}
char userMenu()
{
    char option;
    gotoxy(X, Y - 5);
    SetConsoleTextAttribute(h, 'F');
    printMenusBorder(40);
    gotoxy(X + 1, Y - 5);
    cout << ch1 << "       1. See Detail of  buses :      " << ch1 << endl;
    gotoxy(X + 2, Y - 5);
    printMenusBorder(40);
    gotoxy(X + 3, Y - 5);
    cout << ch1 << "       2. Buy ticket  :               " << ch1 << endl;
    gotoxy(X + 4, Y - 5);
    printMenusBorder(40);
    gotoxy(X + 5, Y - 5);
    cout << ch1 << "       3. cancle ticket:              " << ch1 << endl;
    gotoxy(X + 6, Y - 5);
    printMenusBorder(40);
    gotoxy(X + 7, Y - 5);
    cout << ch1 << "       4. Generate voice:             " << ch1 << endl;
    gotoxy(X + 8, Y - 5);
    printMenusBorder(40);
    gotoxy(X + 9, Y - 5);
    cout << ch1 << "       5. Exit    :                   " << ch1 << endl;
    gotoxy(X + 10, Y - 5);
    printMenusBorder(40);
    gotoxy(X + 11, Y - 5);
    cout << ch1 << "       You option..                   " << ch1 << endl;
    gotoxy(X + 12, Y - 5);
    printMenusBorder(40);
    gotoxy(X + 11, Y - 5 + 20);
    cin >> option;
    SetConsoleTextAttribute(h, 2);
    return option;
}
bool getBusID(string busId)
{
    for (int i = 0; i < busCounts; i++)
    {
        if (busID[i] == busId)
        {
            return true;
        }
    }
    return false;
}
void buyticket()
{
    system("cls");
    userHeader();
    submenubeforemainmenu("User by ticket > ");
    string cityFrom, cityto, busID;
    gotoxy(17, 65);
    cout << "Enter your starting city :- ";
    cin.clear();
    cin.sync();
    getline(cin, cityFrom);
    gotoxy(18, 65);
    cout << "where you want to go :- ";
    cin.clear();
    cin.sync();
    getline(cin, cityto);
    //..................................check required buses function........................
    displayRequiredBuses(cityFrom, cityto);
    gotoxy(25, 65);
    cout << "Enter Bus ID You Want To Select :- ";
    cin.clear();
    cin.sync();
    getline(cin, busID);

    if (getBusID(busID))
    {
        inputDataForbuyingTicket(cityFrom, cityto, busID);
    }
    else
    {
        system("cls");
        mainHeader();
        submenubeforemainmenu("User > Buy Ticket ");
        gotoxy(27, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "-------------------------------";
        gotoxy(28, 65);
        cout << "|ERORR! You Enter Wrong Bus ID|";
        gotoxy(29, 65);
        cout << "-------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(30, 65);
        system("pause");
        system("cls");
    }
}
void inputDataForbuyingTicket(string cityFrom, string cityto, string busID)
{
    char ch;
    gotoxy(26, 65);
    cout << "Enter Y for buy and N :- ";
    cin >> ch;
    if (ch == 'Y')
    {
        ticketBuying(cityFrom, cityto, busID);
    }
    else
    {
        userHeader();
        submenubeforemainmenu("User > Buy tikcet ");
        gotoxy(28, 65);
        cout << "-------------------------------------";
        gotoxy(29, 65);
        cout << "|Thank! For Visiting Our Application|";
        gotoxy(23, 65);
        cout << "-------------------------------------";
        gotoxy(30, 65);
        system("pause");
    }
}
void displayRequiredBuses(string cityFrom, string cityto)
{
    system("cls");
    userHeader();
    submenubeforemainmenu("Required buses ");
    gotoxy(15, 65);
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 07);
    // cout << "Bus Id"<< "busName\t"<< "Bus company\t"<< "From\t"<< "To\t" << endl;
    gotoxy(17, 40);
    cout << "Bus ID ";
    gotoxy(17, 60);
    cout << "Bus Name ";
    gotoxy(17, 80);
    cout << "Bus Company";
    gotoxy(17, 100);
    cout << "Bus Source ";
    gotoxy(17, 120);
    cout << "Bus Detination";
    gotoxy(17, 140);
    cout << "Available Seats";
    // cout<<endl;
    SetConsoleTextAttribute(h, 5);
    for (int j = 0; j < busCounts; j++)
    {
        if (busFrom[j] == cityFrom && busto[j] == cityto)
        {
            gotoxy(18 + j, 40);
            cout << busID[j];
            gotoxy(18 + j, 60);
            cout << busName[j];
            gotoxy(18 + j, 80);
            cout << busCompany[j];
            gotoxy(18 + j, 100);
            cout << busFrom[j];
            gotoxy(18 + j, 120);
            cout << busto[j];
            gotoxy(18 + j, 140);
            cout << availableSeats[j];
        }
    }
    cout << endl;
    gotoxy(busCounts + 19, 70);
    system("pause");
    SetConsoleTextAttribute(h, 14);
}
void ticketBuying(string cityFrom, string cityto, string busId)
{
    system("cls");
    userHeader();
    submenubeforemainmenu("Buying ticket");
    string buyename, buyeremail, buyer_Name;
    int ticketes;

    gotoxy(15, 65);
    cout << "Enter passenger Name : ";
    cin.clear();
    cin.sync();
    getline(cin, buyer_Name);
    buyename = checkNameisValid(buyer_Name, 15, 65, "user");
    gotoxy(16, 65);
    cout << "Enter Your Email : ";
    cin.clear();
    cin.sync();
    getline(cin, buyeremail);
    int busInfoIdx = getBusInformationIdx(busId, busID);
  
    if (availableSeats[busInfoIdx] > 0)
    {
        availableSeats[busInfoIdx] -= 1;
        int seatNO = totalSeats[busInfoIdx] - availableSeats[busInfoIdx];
        gotoxy(18, 67);
        SetConsoleTextAttribute(h, 2);
        cout << "-----------------------------------";
        gotoxy(19, 67);
        cout << "|Congrats! Ticket Buy Successfully|";
        gotoxy(20, 67);
        cout << "-----------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
        addAllBusesToFile();
        addTicketsToArray(buyename, buyeremail, busId, seatNO);
    }
    else
    {
        gotoxy(18, 67);
        SetConsoleTextAttribute(h, 4);
        cout << "-----------------------------------";
        gotoxy(19, 67);
        cout << "|Sorry! Seats are full try another|";
        gotoxy(20, 67);
        cout << "-----------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
    }
    return;
}

void addAllBusesToFile()
{
    fstream file;
    file.open("busCredential.txt", ios::out);
    for(int i =0; i<busCounts; i++)
    {
      file << busID[i] << "," << busName[i] << "," << busCompany[i] << "," << busFrom[i] << "," << busto[i] << "," << fare[i] << "," << totalSeats[i] <<","<<availableSeats[i] << endl;
    }
    file.close();
}
int getBusInformationIdx(string name, string arr[]) // ****** >> FINDING BUS ID FOR GIVING BUS NUMBER << ******
{
    for (int i = 0; i < busCounts; i++)
    {
        if (arr[i] == name)
        {
            return i;
        }
    }
    return -1;
}
void addTicketsToArray(string buyename, string buyeremail, string busID, int seat_No)
{
    buyerName[buyerCount] = buyename;
    buyerEmail[buyerCount] = buyeremail;
    seatNo[buyerCount] = seat_No;
    userbusID[buyerCount] = busID;
    int user_Fare = checkUserFare(busID);
    userFare[buyerCount] = user_Fare;
    storeSoldTicketCredential(buyename, buyeremail,user_Fare, busID, seat_No);
    buyerCount++;
}
int getPrice(string bus_ID)
{
    for (int i = 0; i < busCounts; i++)
    {
        if (busID[i] == bus_ID)
        {
            return i;
        }
    }
    return -1;
}
void generateInVoice()
{
    system("cls");
    userHeader();
    submenubeforemainmenu("User > generateInVoice ");
    string customer_email;
    int newidx;
    bool option = 0;
    gotoxy(15, 65);
    cout << "Enter ticket buyer email : ";
    cin.clear();
    cin.sync();
    getline(cin, customer_email);
    newidx = checkUserForGenerateInVoice(customer_email);
    if (newidx != -1)
    {
        dispalyTicket(newidx);
    }
    else
    {
        system("cls");
        userHeader();
        submenubeforemainmenu("User > GenerateInVoice ");
        gotoxy(18, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------";
        gotoxy(19, 65);
        cout << "|ERORR! You Enter Wrong Name try again|";
        gotoxy(20, 65);
        cout << "---------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
    }
}
int checkUserForGenerateInVoice(string customer_email) // *********** >> CHECK BUYER IS 
{
    for (int idx = 0; idx < buyerCount; idx++)
    {
        if (buyerEmail[idx] == customer_email)
        {
            return idx;
        }
    }
    return -1;
}
void dispalyTicket(int newidx)    // **************** >> VIEW TICKET << *************
{
    system("cls");
    userHeader();
    submenubeforemainmenu("User > Generate Ticket");
    int Xvalue = 15, Yvalue = 60;
    SetConsoleTextAttribute(h,2);
    gotoxy(Xvalue + 2, Yvalue);
    cout << "BuyerName";
    gotoxy(Xvalue + 2, Yvalue + 20);
    cout << "BusID";
    gotoxy(Xvalue + 2, Yvalue + 40);
    cout << "Price";
    gotoxy(Xvalue + 2, Yvalue + 60);
    cout << "SeatNo";
    SetConsoleTextAttribute(h,7);
    for (int i = 0; i < buyerCount; i++)
    {
        if (buyerEmail[i] == buyerEmail[newidx])
        {
            gotoxy(Xvalue + 3, Yvalue);
            cout << buyerName[i];
            gotoxy(Xvalue + 3, Yvalue + 20);
            cout << userbusID[i];
            gotoxy(Xvalue + 3, Yvalue + 40);
            int idx = getBusInformationIdx(userbusID[i], busID);
            cout << fare[idx];
            gotoxy(Xvalue + 3, Yvalue + 60);
            cout << seatNo[i];
            Xvalue++;
        }
    }
    cout << endl
         << endl;
    gotoxy(Xvalue + 4, Yvalue + 20);
    system("pause");
}
void cancleticket()       //  ******  >> CANCLE TICKET IF MASSAGE << ******
{
    system("cls");
    userHeader();
    submenubeforemainmenu("Cancle ticket > ");
    string name;
    int ticketnum;
    bool output = 0;
    int newidx = 0;
    newidx = inputDataForCanleTicket();

    if (newidx != -1)
    {
        system("cls");
        userHeader();
        submenubeforemainmenu("Cancle ticket > ");
        deletepassenger(newidx);
        gotoxy(17, 65);
        cout << "-----------------------------------";
        gotoxy(18, 65);
        cout << "|Hmmm! Your Ticket Has Been Cancel|";
        gotoxy(19, 65);
        cout << "-----------------------------------";
        gotoxy(20, 65);
        system("pause");
    }
    else
    {
        system("cls");
        userHeader();
        submenubeforemainmenu("Cancle ticket > ");
        gotoxy(18, 65);
        SetConsoleTextAttribute(h, 4);
        cout << "---------------------------------------";
        gotoxy(19, 65);
        cout << "|ERORR! You Enter Wrong data try again|";
        gotoxy(20, 65);
        cout << "---------------------------------------";
        SetConsoleTextAttribute(h, 7);
        gotoxy(21, 65);
        system("pause");
    }
}
int checkTicketIsValid(string name, string email)   // ******* >> CHECK TICKET IS VALID OR NOT *******
{
    for (int j = 0; j < buyerCount; j++)
    {
        if (buyerEmail[j] == email && buyerName[j] == name)
        {
            return j;
        }
    }
    return -1;
}
int inputDataForCanleTicket()                //******* >> TAKE DATA FOR CANCLE TICKET << ******
{
    string name, email, user_Name;
    gotoxy(17, 65);
    cout << "Enter buyer Name :- ";
    cin.clear();
    cin.sync();
    getline(cin, user_Name);
    name = checkNameisValid(user_Name, 18, 65, "admin");
    gotoxy(18, 65);
    cout << "Enter Buyer Email :-";
    cin >> email;
    return checkTicketIsValid(name, email);
}
void deletepassenger(int newidx)      // ******** >> DELETE PASSENGER DATA AFTER CANCLE TICKET <<******
{
    for (int j = newidx; j < usersCount; j++)
    {
        buyerName[j] = buyerName[j + 1];
        buyerEmail[j] = buyerEmail[j + 1];
        seatNo[j] = seatNo[j + 1];
        userbusID[j] = userbusID[j + 1];
    }
    usersCount--;
    deleteSoldTicket();
}
void viewSoldTicket()                   // ********* >> SEE THE SOLD TICKET << *********
{
    system("cls");
    managerHeader();
    submenubeforemainmenu("view sold ticket ");
    SetConsoleTextAttribute(h,2);
    gotoxy(15, 40);
    cout << "Buyer Name";
    gotoxy(15, 60);
    cout << "buyer Email";
    gotoxy(15, 80);
    cout << "Fare";
    gotoxy(15, 100);
    cout << "User Bus ID";
    gotoxy(15, 120);
    cout << "SeatNo" << endl;
    SetConsoleTextAttribute(h,7);
    for (int i = 0; i < buyerCount; i++)
    {
        gotoxy(16 + i, 40);
        cout << buyerName[i];
        gotoxy(16 + i, 60);
        cout << buyerEmail[i];
        gotoxy(16 + i, 80);
        cout << userFare[i];
        gotoxy(16 + i, 100);
        cout << userbusID[i];
        gotoxy(16 + i, 120);
        cout << seatNo[i];
        cout << endl;
    }

    gotoxy(usersCount + 19, 70);
    system("pause");
}

// ############################################## >> File Handling Function << #############################

//......................................... >> FILE HANDLING FOR MANAGER << ...........................
string parseData(string line, int count)
{
    string item = "";
    int length = line.length();
    int commacount = 1;
    for (int idx = 0; idx < length; idx++)
    {
        if (line[idx] == ',')
        {
            commacount++;
        }
        else if (count == commacount)
        {
            item = item + line[idx];
        }
    }
    return item;
}
bool loadManagerCredential()   // ******************** >> LOAD MANAGER DATA FROM FILES << **********
{
    string line;
    ifstream file;
    file.open("managerCredential.txt", ios::in);
    if (!file.bad())
    {
        while (!file.eof())
        {
            getline(file, line);
            managerName[managerCounts] = parseData(line, 1);
            managerPassword[managerCounts] = parseData(line, 2);
            managerPhoneNumber[managerCounts] = parseData(line, 3);
            managerEmail[managerCounts] = parseData(line, 4);
            managerCounts++;
        }
        file.close();
        return true;
    }
    return false;
}
// ************************** >> STORE MANAGER DATA ITNO FILE << *******************
void storeManagerCredential(string managerName, string managerpassword, string phoneNo, string email)
{
    fstream file;
    file.open("managerCredential.txt", ios::app);
    file << managerName << "," << managerpassword << "," << phoneNo << "," << email << endl;
    file.close();
}
void deleteManagerCredential()   // ************** >> DELETE MANAGER DATA FROM FILE << **********
{
    fstream file;
    file.open("managerCredential.txt", ios::out);
    for (int i = 0; i < managerCounts; i++)
    {
        file << managerName[i] << "," << managerPassword[i] << "," << managerPhoneNumber[i] << "," << managerEmail[i] << endl;
    }
    file.close();
}
void updatemanagerData()           // ************** >> UPDATE MANAGER DATA INTO FILE << **********
{
    fstream file;
    file.open("managerCredential.txt", ios::out);
    for (int i = 0; i < managerCounts; i++)
    {
        file << managerName[i] << "," << managerPassword[i] << "," << managerPhoneNumber[i] << "," << managerEmail[i] << endl;
    }
    file.close();
}
//..................................... >> FILE HANDLING FOR BUS << .................................
bool loadBusData()             //************>> TAKE DATA FROM << *************
{
    string line;
    ifstream file;
    file.open("busCredential.txt", ios::in);
    if (!file.bad())
    {
        while (!file.eof())
        {
            getline(file, line);
            busID[busCounts] = parseData(line, 1);
            busName[busCounts] = parseData(line, 2);
            busCompany[busCounts] = parseData(line, 3);
            busFrom[busCounts] = parseData(line, 4);
            busto[busCounts] = parseData(line, 5);
            fare[busCounts] = stoi(parseData(line, 6));
            totalSeats[busCounts] = stoi(parseData(line, 7));
            availableSeats[busCounts] = stoi(parseData(line, 8));
            busCounts++;
        }
        file.close();
        return true;
    }
    return false;
}
void storeBusCredential(string busId, string busName, string busCompany, string busFrom, string busto, int busFare, int totalSeats,int available_Seats)
{
    fstream file;
    file.open("busCredential.txt", ios::app);
    file << busId << "," << busName << "," << busCompany << "," << busFrom << "," << busto << "," << busFare << "," << totalSeats <<","<<available_Seats << endl;
    file.close();
}
void deleteBusData()    //***********>> DELETE BUS DATA FROM FILE << ************
{
    fstream file;
    file.open("busCredential.txt", ios::out);
    for (int i = 0; i < busCounts; i++)
    {
        file << busID[i] << "," << busName[i] << "," << busCompany[i] << "," << busFrom[i] << "," << busto[i] << "," << fare[i] << "," << totalSeats[i] <<","<<availableSeats[i] <<  endl;
    }
    file.close();
}
void updateBusData()       //  ******** >> UPDATE BUS DATA INTO FILE **********
{
    fstream file;
    file.open("busCredential.txt", ios::out);
    for (int i = 0; i < busCounts; i++)
    {
        file << busID[i] << "," << busName[i] << "," << busCompany[i] << "," << busFrom[i] << "," << busto[i] << "," << fare[i] << "," << totalSeats[i] <<","<< availableSeats[i]<<  endl;
    }
    file.close();
}
//.................................... >> FILE HANDLING FOR USER << .................................
bool loadUserData()      //******************** >> LOAD USER DATA FORM FILE << **************
{
    string line;
    ifstream file;
    file.open("usersCredential.txt", ios::in);
    if (!file.bad())
    {
        while (!file.eof())
        {
            getline(file, line);
            users[usersCount] = parseData(line, 1);
            passwords[usersCount] = parseData(line, 2);
            usersCount++;
        }
        file.close();
        return true;
    }
    return false;
}
void storeUsercredential(string name, string password)   //*************>> STORE USER DATA INTO FILE << ***********
{
    fstream file;
    file.open("usersCredential.txt", ios::app);
    file << name << "," << password << endl;
    file.close();
}
//................................... >> FILE HANDLING FOR DRIVER << ..................................
bool loadDriverData()              // *********** >> LOAD DRIVER DATA FROM FILE << ************
{
    string line;
    ifstream file;
    file.open("driverCredential.txt", ios::in);
    if (!file.bad())
    {
        while (!file.eof())
        {
            getline(file, line);
            driverName[driverCounts] = parseData(line, 1);
            driverID[driverCounts] = parseData(line, 2);
            driverLicense[driverCounts] = parseData(line, 3);
            driverCounts++;
        }
        file.close();
        return true;
    }
    return false;
}
void updateDriverData()        // ***************** >> UPDATE DRIVER DATA INTO FILE << ***********
{
    fstream file;
    file.open("driverCredential.txt", ios::out);
    for (int i = 0; i < driverCounts; i++)
    {
        file << driverName[i] << "," << driverID[i] << "," << driverLicense[i] << endl;
    }
    file.close();
}
void storeDriverCredential(string drivername, string driverId, string driverlicense)
{
    fstream file;
    file.open("driverCredential.txt", ios::app);
    file << drivername << "," << driverId << "," << driverlicense << endl;
    file.close();
}
void deleteDriverData()         // *************** >> DELETE FOR FILE  << ********* 
{
    fstream file;
    file.open("driverCredential.txt", ios::out);
    for (int i = 0; i < driverCounts; i++)
    {
        file << driverName[i] << "," << driverID[i] << "," << driverLicense[i] << endl;
    }
    file.close();
}
// ................................. >> FILE HANDLING FOR ADMIN << ........................
bool loadAdminPassword()       // ************ >> LOAD ADMIN PASSWORD << ***********
{
    string line;
    ifstream file;
    file.open("AdminCredential.txt", ios::in);
    if (!file.bad())
    {
        while (!file.eof())
        {
            getline(file, line);
            adminNames = parseData(line, 1);
            adminPasswords = parseData(line, 2);
        }
        file.close();
        return true;
    }
    return false;
}
void storeAdminCredential(string adminname, string adminpassword)
{
    fstream file;
    file.open("adminCredential.txt", ios::out);
    file << adminname << "," << adminpassword << endl;
    file.close();
}
void upDateAdminCredential(string adminname, string adminpassword)
{
    fstream file;
    file.open("adminCredential.txt", ios::app);
    file << adminname << "," << adminpassword << endl;
    file.close();   
}

// ................................ >> FILE HADNING FOR TICKETS << ..........................
bool loadSoldTicket()    // *********************** >> LOAD SOLD TICKET DATA << ***********
{
    string line;
    ifstream file;
    file.open("soldTicketCredential.txt", ios::in);
    if (!file.bad())
    {
        while (!file.eof())
        {
            getline(file, line);
            buyerName[buyerCount] = parseData(line, 1);
            buyerEmail[buyerCount] = parseData(line, 2);
            userFare[buyerCount] = stoi(parseData(line,3));
            userbusID[buyerCount] = parseData(line, 4);
            seatNo[buyerCount] = stoi(parseData(line, 5));
            buyerCount++;
        }
        file.close();
        return true;
    }
    return false;
}
//************************************ >> DELETE SOLD TIKCET DATA FROM FILE << **************
void storeSoldTicketCredential(string buyer_name, string buyer_email,int user_Fare, string userbusID, int seatNO)
{
    fstream file;
    file.open("SoldTicketCredential.txt", ios::app);
    file << buyer_name << "," << buyer_email << ","<<user_Fare <<"," << userbusID << "," << seatNO << endl;
    file.close();
}
void deleteSoldTicket()      //******** >> DELETING DATA OF SOLD TICKET << ***********
{
    fstream file;
    file.open("soldTicketCredential.txt", ios::out);
    for (int i = 0; i < buyerCount; i++)
    {
        file << buyerName[i] << "," << buyerEmail[i] << "," <<userFare[i]<< userbusID[i] << "," << seatNo[i] << endl;
    }
    file.close();
}
int checkUserFare(string bus_ID)     // ******** >> FINDING FARE FOR USER ACCORDING TO REQUIRED BUS <<**********
{
    int location=0;
    for(int i=0 ; i < buyerCount ; i++)
    {
        if(bus_ID == busID[i])
        {
            location = i;
        }
    }
    return fare[location];
}

// ############################################ >> SPECIAL FUCTION << ##################################
void clearScreen()
{
    system("pause");
    system("cls");
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = y;
    coordinates.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
