#include<iostream.h>
#include<stdio.h>
#include<conio.h>


class bank{
    char name [100],add[100],y;
    int balance;
    public:
           void open_account();
           void deposition_money();
           void withdraw_money();
           void display_account();
};

void bank :: open_account{
     cout << "Enter your full name :: \n)";
     cin.ignore();  
     cin.getline(name, 100);
     cout << "Enter your addrass :: \n)";
     cin.ignore();  
     cin.getline(add, 100);
     cout << "What type of account zou want to open saving (s) or currunt (c) ";
     cin >> y;  
     cout << "Enter amount for desposite :: ";
     cin >> balance; 
     cout << "your account is created \n)";
}

void bank :: deposition_money(){
     int a;
     cout << "Enter amount for desposite :: ";
     cin >> a;
     balance+=a;
     cout << "Total amount you desposite ::  \t ";
}

void bank :: display_account(){
     cout << "Your full name ::  \t " << name;
     cout << "Your addresss ::  \t " << add;
     cout << "Type of account that you open ::  \t " << y;
     cout << "Amount you desposite ::  \t " << balance;
     void bank :: deposition_money(){
          float amount;
          cout << "\n Withdraw :: ";
          cout << "Enter amount to withdraw ::  ";
          cin >> amount;
          balance=balance-amount;
          cout << "Now total amount is left ::  " << balance;
    }
}

int main(){
    int ch,x;
    do{
       cout << "1) Open account \n)";
       cout << "2) Deposition money \n)";
       cout << "3) Withdraw money \n)";
       cout << "4) Display account \n)";
       cout << "5) Exit \n)";
       cout << "Select the option from above \n)";
       cin >> ch;
       switch (expression)
        {
              case 1:"1) Open account \n)";
              obj.open_account();
              break;
              case 2:"2) Deposition money \n)";
              obj.desposition_money();
              break;
              case 3:"3) Withdraw money \n)";
              obj.withdraw_money();
              break;
              if (ch==5)
                 {
                        exit(1); 
              case 4:"4) Display account \n)";
              obj.display_account();
              break;
              case 5:
        }
         default:
                cout << "This is not exist try again \n";
        }
         cout << "\n Do you want to select next option then press :: y \n";
         cout << "If you want to exit then press :: N ";
         x=getch();
         if (x=='n'||x=='N')
            {
             exit(0);
        }while (x=='y'||x=='Y');
    }
     getch();
     return 0;
}
