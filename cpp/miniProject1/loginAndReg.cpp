// login
//registration
//forgot password
//exit

#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void Login();
void Register();
void Forgot();


int main(){

    int c;
    cout<<"\t\t____________________________________\n\n\n";
    cout<<"\t\t          welcome to login page      \n\n\n";
    cout<<"\t\t_____________   Menu   ______________\n\n\n";
    cout<<"\t\t                                     \n\n\n";

    cout<<"\t| Press 1 for LOGIN              |"<<endl;
    cout<<"\t| Press 2 for REGISTER           |"<<endl;
    cout<<"\t| Press 3 for FORGOT             |"<<endl;
    cout<<"\t| Press 4 for EXIT               |"<<endl;

    cout<<"\n\t\t\t Please Enter your choice : ";
    cin>>c;
    cout<<endl;

    switch(c){
        case 1:
            Login();
            break;

        case 2:
            Register();
            break;

        case 3:
            Forgot();
            break;

        case 4:
            cout<<"\t\t\t Thankyou ! \n\n";
            break;

        default:
            system("cls");
            cout<<"\t\t\t Please Enter the Right Option ! \n"<<endl;
            main();
    }


}

void Login(){

    int count;
    string userID,password,ID,pass;
    system("cls");

    cout<<"\t\t\tPlease Enter the userName and Password :"<<endl;

    cout<<"\t\t\t USERNAME ";
    cin>>userID;

    cout<<"\t\t\t PASSWORD ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>ID>>pass){
        if(ID==userID && pass == password){
            count = 1;
            system("cls");
        }
    }
    input.close();

    if(count == 1){
        cout<<userID<<"\n your LOGIN is successful \n Thanks for Loginng in ! \n";
        main();
    }

    else{
        cout<<"\n LOGIN ERROR \n Please check your userName !" <<endl;
        main();
    }

}

void Register(){
    string ruserID,rPassword,rID,rPass;
    system("cls");

    cout<<"\t\t\t Enter the userName : ";
    cin>>ruserID;

    cout<<"\t\t\t Enter the password : ";
    cin>>rPassword;

    ofstream f1("records.txt",ios::app);

    f1<<ruserID<<' '<<rPassword;
    
    system("cls");

    cout<<"\n\t\t\t Registration is successfull ! \n";

}

void Forgot(){
    int option;
    system("cls");

    cout<<"\t\t\t Have you forget your password ? No Worries \n";
    cout<<"Press 1 to search your id by username "<<endl;
    cout<<"Press 2 to go back to main menu "<<endl;

    cout<<"\t\t\t Enter your choice :";

    switch(option){
        case 1 :
        {
            int count = 0;
            string suserID,sID,sPass;
            cout << "\n\t\t Enter the userName which you remember :";
            cin>>suserID;

            ifstream f2("records.txt");
            while(f2>>sID>>sPass){
                if(sID==suserID){
                    count = 1;
                }
            }

            if(count == 1){
                cout<<"\n\nYour account is found !\n";
                cout<<"\n\nYour password is :"<<sPass;
            }

            else{
                cout<<"\n\n SORRY Your account is not found !\n ";
            }

            break;
        }

        case 2 :
        {
            main();
        }

        default:
            cout<<"\t\t\t WRONG CHOICE ! PLEASE TRY AGAIN " <<endl;
            Forgot();
    }
}