// hotel management 
// have information about room , foood items 
// what are the food ordered by the customer 
// how many rooms are alloted to them 
// sales and remaning food stocks
// total day collection


#include<iostream>
using namespace std;

int main(){

    // Part 1 -> decleare the variables and inilaise them 
    // Part 2 -> enter the quantity of item that have in the hotel
    //Part 3 -> list of items or menu of items that we have in our hotel

    int quantity ;
    int choice ;
    //quantity
    int Qrooms = 0,Qpasta = 0,Qburger = 0,Qnoodles = 0,Qshake = 0,Qicecream = 0 ;
    // food item sold
    int Srooms = 0,Spasta = 0,Sburger = 0,Snoodles = 0,Sshake = 0,Siceceram = 0;
    //total price of item
    int Total_rooms = 0,Total_pasta = 0,Total_burger = 0,Total_noodles = 0,Total_shake = 0,Total_icecream = 0;

    cout << "\n\t Quantity of items we have ";
    cout<<"\n Room avaliable" <<endl;
    cin>>Qrooms;

    cout<<"\n Quantity of pasta" <<endl;
    cin>>Qpasta;

    cout<<"\n Quantity of burger" <<endl;
    cin>>Qburger;

    cout<<"\n Quantity of noodles" <<endl;
    cin>>Qnoodles;

    cout<<"\n Quantity of shake" <<endl;
    cin>>Qshake;

    cout<<"\n Quantity of icecream" <<endl;
    cin>>Qicecream;

    m:
    cout <<"\n\n\n\t\t Please select from the menu options" <<endl;
    cout<<"\n\n1) Rooms";
    cout<<"\n2) pasta";
    cout<<"\n3) burger";
    cout<<"\n4) noodles";
    cout<<"\n5) shake";
    cout<<"\n6) icecream";
    cout<<"\n7) Information of sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;

    switch(choice){
        case 1: 
            cout<<"\n\n Enter the number of Rooms you want: ";
            cin>>quantity;
            if(Qrooms-Srooms >= quantity){
                Srooms = Srooms + quantity;
                Total_rooms = Total_rooms + (quantity*1200);
                cout<<"\n\n\t\t" <<quantity<<" Rooms have been allocated to you !";
            }
            else{
                cout<<"\n\t Only " << Qrooms-Srooms <<" Rooms remaining in hotel \n SORRY ";
            }

            break;
        
        case 2: 
            cout<<"\n\n Enter the qunatity of pasta you want: ";
            cin>>quantity;
            if(Qpasta-Spasta >= quantity){
                Qpasta = Qpasta + quantity;
                Total_pasta = Total_pasta + (quantity*250);
                cout<<"\n\n\t\t" <<quantity<<" pasta have ordered !";
            }
            else{
                cout<<"\n\t Only " << Qpasta-Spasta <<" pasta is remaining \n SORRY ";
            }
            
            break;

        case 3: 
            cout<<"\n\n Enter the qunatity of noodles you want: ";
            cin>>quantity;
            if(Qnoodles-Snoodles >= quantity){
                Qnoodles = Qnoodles + quantity;
                Total_noodles = Total_noodles + (quantity*150);
                cout<<"\n\n\t\t" <<quantity<<" noodles have ordered !";
            }
            else{
                cout<<"\n\t Only " << Qnoodles-Qnoodles <<" noodles is remaining \n SORRY ";
            }
            
            break;
        
        case 4: 
            cout<<"\n\n Enter the qunatity of burger you want: ";
            cin>>quantity;
            if(Qburger-Sburger >= quantity){
                Qburger = Qburger + quantity;
                Total_burger = Total_burger + (quantity*50);
                cout<<"\n\n\t\t" <<quantity<<" burger have ordered !";
            }
            else{
                cout<<"\n\t Only " << Qnoodles-Qnoodles <<" burger is remaining \n SORRY ";
            }
            
            break;
        
        case 5: 
            cout<<"\n\n Enter the qunatity of shake you want: ";
            cin>>quantity;
            if(Qshake-Sshake >= quantity){
                Qshake = Qshake + quantity;
                Total_shake = Total_shake + (quantity*70);
                cout<<"\n\n\t\t" <<quantity<<" shake have ordered !";
            }
            else{
                cout<<"\n\t Only " << Qnoodles-Qnoodles <<" shake is remaining \n SORRY ";
            }
            
            break;
        
        case 6: 
            cout<<"\n\n Enter the qunatity of icecream you want: ";
            cin>>quantity;
            if(Qicecream-Siceceram >= quantity){
                Qicecream = Qicecream + quantity;
                Total_icecream = Total_icecream + (quantity*250);
                cout<<"\n\n\t\t" <<quantity<<" icecream have ordered !";
            }
            else{
                cout<<"\n\t Only " << Qnoodles-Qnoodles <<" icecream is remaining \n SORRY ";
            }
            
            break;

        case 7:
            cout<<"\n\t\tDetails of sales and collection";
            cout<<"\n\n Number of rooms we had : "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent : "<< Srooms;
            cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

            cout<<"\n\n Number of pasta we had : "<<Qpasta;
            cout<<"\n\n Number of pasta we gave for rent : "<< Spasta;
            cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
            cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;

            cout<<"\n\n Number of burger we had : "<<Qburger;
            cout<<"\n\n Number of burger we gave for rent : "<< Sburger;
            cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
            cout<<"\n\n Total burger collection for the day : "<<Total_burger;

            cout<<"\n\n Number of noodles we had : "<<Qnoodles;
            cout<<"\n\n Number of noodles we gave for rent : "<< Snoodles;
            cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
            cout<<"\n\n Total noodles collection for the day : "<<Total_noodles;

            cout<<"\n\n Number of shakes we had : "<<Qshake;
            cout<<"\n\n Number of shakes we gave for rent : "<< Sshake;
            cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
            cout<<"\n\n Total shakes collection for the day : "<<Total_shake;

            cout<<"\n\n Number of icecream we had : "<<Qicecream;
            cout<<"\n\n Number of icecream we gave for rent : "<< Siceceram;
            cout<<"\n\n Remaining icecream : "<<Qicecream-Siceceram;
            cout<<"\n\n Total icecream collection for the day : "<<Total_icecream;

            cout<<"\n\n\t\t Total collection for the day : "<<Total_rooms+Total_burger+Total_noodles+Total_pasta+Total_shake+Total_icecream;
            break;

        case 8:
            exit(0);

        default:
            cout<<"\n please enter the Right choice mentioned above !";
    }

    goto m;
}



