#include <iostream>
#include<cstring>
#include "SavingBankAccount.h"
#include "Client.h"
#include "BankAccount.h"
using namespace std;

int main()
{
                string type;

        int choise = 0;
    cout <<("welcome to fci banking application")<<endl;
    SavingBankAccount  SAVINGBANKACCOUNT1(1500);
    BankAccount  ACCOUNTS;
    Client client1;
    //        cout<<"please enter size of bank"<<endl;
//        int SIZE;
//        cin>>SIZE;
    ACCOUNTS.setsize(4);
    while (choise != 4)
    {
        cout <<("1-create a new account")<<endl;
        cout <<("2-List Clients and accounts")<<endl;
        cout <<("3-Withdraw money")<<endl;
        cout << ("4-deposit money")<<endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            if (choise == 1)
            {
                cout <<("Welcome to our bank, Now you have two options for your account: basic bank account or saving bank account. if you need basic Account please enter 1 and if you need saving Account enter 2");
                cin >> choise;
                if (choise == 1)
                {
                    cout <<("Now you have a basic account so, Please enter your NAME,ADDRESS,PHONE in order")<<endl;
                    string name;
                    cin >> name;
                    client1.setname(name);
                    string address;
                    cin >> address;
                    client1.setaddress(address);
                    long  phonenumber;
                    cin >> phonenumber ;
                    client1.setphonenumber(phonenumber);
                    ACCOUNTS.setclient(client1);
                    cout<<"enter starting balance "<<endl;
                    double StartingBalance;
                    cin>>StartingBalance;
                    ACCOUNTS.setbalance(StartingBalance,counter);
                    ACCOUNTS.setaccountId();
                    cout <<"Welcome to our bank and the Id of your basic Account is :"<<counter-1<< "your starting balance is:"<<ACCOUNTS.getbalance(counter-1)<<endl;
                }
                else
                {
                    cout <<("Now you have a saving account so, Please enter your NAME,ADDRESS,PHONE in order")<<endl;
                    string name;
                    cin >> name;
                    client1.setname(name);
                    string address;
                    cin >> address;
                    client1.setaddress(address);
                    long  phonenumber;
                    cin >> phonenumber ;
                    client1.setphonenumber(phonenumber);
                    SAVINGBANKACCOUNT1.setclient(client1);
                    SAVINGBANKACCOUNT1.setaccountId();
                    cout <<"Welcome to our bank and the Id of your basic Account is :"<<counter-1<< "your starting balance is:"<<SAVINGBANKACCOUNT1.getbalance(counter-1)<<endl;
                }
            }
            break;

        case 2:
            ACCOUNTS.display();
            break;

        case 3:
            double amount;
            cout <<("if you need to withdraw please enter account Id")<<endl;
            int id;
            cin>>id;
            cout <<"enter account type"<<endl;
            cin>>type;
            cout << "enter the amount to withdraw"<<endl;
            cin >> amount;
            if (type=="BASE")
            {
                if(amount <=ACCOUNTS.getbalance(id))
                {
                    ACCOUNTS.withdraw(amount,id);
                    cout << "your new balance is" << ACCOUNTS.getbalance(id);
                    cout << "thank you";
                }
                else
                {
                    cout<<"Sorry. This is more than what you can withdraw."<<endl;
                }
            }
            else
            {
                if(amount <=SAVINGBANKACCOUNT1.getbalance(id))
                 {

                  SAVINGBANKACCOUNT1.withdraw(amount,id);
                cout << "your new balance is" << SAVINGBANKACCOUNT1.getbalance(id);
                cout << "thank you";
            }
            else
            {
                cout<<"Sorry. This is more than what you can withdraw."<<endl;
            }}
            break;
        case 4:
             double Amount;
            cout <<("if you need to depoist please enter account Id")<<endl;
            int Id;
            cin>>Id;
            cout <<("enter account type")<<endl;
            string Type;
            cin>>Type;
            cout << "enter the amount to deposit"<<endl;
            cin >> Amount;
              if (type=="BASE")
            {
                 ACCOUNTS.deposit(Amount,Id);
            cout << "your new balance is" <<ACCOUNTS.getbalance(Id)<<endl;

            }
            else
            {
            SAVINGBANKACCOUNT1.deposit(Amount,Id);
            cout << "your new balance is" <<SAVINGBANKACCOUNT1.getbalance(Id)<<endl;
            }


        }
    }
}
