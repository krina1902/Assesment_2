#include<iostream>
#include <ctime>
using namespace std;
class Bank {
 
    // Private variables used inside class
private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long tot = 0;
 
    // Public variables
public:
    // Function to set the person's data
    void setvalue()
    {
        cout << "Enter name\n";
        cin.ignore();
 
        // To use space in string
        getline(cin, name);
 
        cout << "Enter Account number\n";
        cin >> accnumber;
        cout << "Enter Account type\n";
        cin >> type;
        cout << "Enter Balance\n";
        cin >> tot;
    }
 
    // Function to display the required data
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Account No:" << accnumber << endl;
        cout << "Account type:" << type << endl;
        cout << "Balance:" << tot << endl;
    }
 
    // Function to deposit the amount in ATM
    void deposit()
    {
        cout << "\nEnter amount to be Deposited\n";
        cin >> amount;
    }
 
    // Function to show the balance amount
    void showbal()
    {
        tot = tot + amount;
        cout << "\nTotal balance is: " << tot;
    }
 
    // Function to withdraw the amount in ATM
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        avai_balance = tot - a;
        cout << "Available Balance is" << avai_balance;
    }
};
int main()
{
    cout<<"WELCOME TO ATM"<<endl;
     time_t now = time(0);
     char* date_time = ctime(&now);

   cout << "The current date and time is: " << date_time << endl;
   int choic,pin,select;
   cout << "*******************************\n";
cout << " 1 - press 1 and then press enter to access your account via pin number\n";
cout << " 2 - press 0 and press enter to get help\n";
cin >> choic;

switch (choic)
{
case 1:
cout << " enter your acc pin acess number!\n";
cin>>pin;
break;
case 2:
cout << "***********ATM ACCOUNT STATUS************\n";
cout<<"you must have the currect pin nu8mber to access this account. See your bank represantative for assistance during bank opening hours Thanks for,your choice today!! ";
break;
}
if (pin==12345){
    Bank b;
 
    int choice;
 
    // Infinite while loop to choose
    // options everytime
    while (1) {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> choice;
 
        // Choices to select from
        switch (choice) {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
    }
}
else{
    cout<<"************* THANK YOU *******************\n";
    cout<<"You made your attempt which failed!!!! No more attempts allowed!! sorry!!!";
}
}