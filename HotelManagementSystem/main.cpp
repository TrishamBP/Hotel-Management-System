#include <iostream>

using namespace std;

int main()
{
    int quant, choice;
    /* Quantity of food items and rooms available*/
    int Qrooms=0,Qpasta=0,Qburger=0, Qnoodles=0,Qshake=0,Qchicken=0;
    /* Quantity of food items and rooms sold*/
    int Srooms=0,Spasta=0,Sburger=0, Snoodles=0,Sshake=0,Schicken=0;
    /* Total price of food items and rooms */
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

    cout<<"\n\t Quantity of items in hotel";
    cout<<"\n Rooms available";
    cin>> Qrooms;
    cout<<"\n pasta available";
    cin>> Qpasta;
    cout<<"\n burger available";
    cin>> Qburger;
    cout<<"\n noodles available";
    cin>> Qnoodles;
    cout<<"\n shake available";
    cin>> Qshake;
    cout<<"\n chicken available";
    cin>> Qchicken;

    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n 1 Rooms";
    cout<<"\n 2 Pasta  ";
    cout<<"\n 3 Burger";
    cout<<"\n 4 Noodles";
    cout<<"\n 5 Shake";
    cout<<"\n 6 Chicken";
    cout<<"\n 7 Total collection for the day";
    cout<<"\n 8 Exit";

    cout<<"\n\n Please enter your choice";
    cin>>choice;

    switch(choice){
    case 1:
        cout<<"\n\n Enter the number of rooms you want";
        cin>>quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms+=quant;
            Total_rooms+=quant*1200;
            cout<<"\n\n\t\t "<< quant<<"rooms have been allotted to you";

        }
        else{
            cout<<"\n\t Only"<<Qrooms-Srooms<<"are available";
            break;
        }

    case 2:
        cout<<"\n\n Enter the quantity of pasta you want";
        cin>>quant;
        if(Qpasta-Spasta>=quant)
        {
            Spasta+=quant;
            Total_pasta+=(quant)*450;
            cout<<"\n\n\t\t "<< quant<<"pasta ordered";

        }
        else{
            cout<<"\n\t Only"<<Qpasta-Spasta<<"are available";
            break;
        }

    case 3:
        cout<<"\n\n Enter the quantity of burger you want";
        cin>>quant;
        if(Qburger-Sburger>=quant)
        {
            Sburger+=quant;
            Total_burger+=(quant)*450;
            cout<<"\n\n\t\t "<< quant<<"burger ordered";

        }
        else{
            cout<<"\n\t Only"<<Qburger-Sburger<<"are available";
            break;
        }
    case 4:
        cout<<"\n\n Enter the quantity of noodles you want";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant)
        {
            Snoodles+=quant;
            Total_noodles+=(quant)*450;
            cout<<"\n\n\t\t "<< quant<<"noodles ordered";

        }
        else{
            cout<<"\n\t Only"<<Qnoodles-Snoodles<<"are available";
            break;
        }

    case 5:
        cout<<"\n\n Enter the quantity of shakes you want";
        cin>>quant;
        if(Qshake-Sshake>=quant)
        {
            Sshake+=quant;
            Total_shake+=(quant)*450;
            cout<<"\n\n\t\t "<< quant<<"shake ordered";

        }
        else{
            cout<<"\n\t Only"<<Qnoodles-Snoodles<<"are available";
            break;
        }

    case 6:
        cout<<"\n\n Enter the quantity of chcicken you want";
        cin>>quant;
        if(Qchicken-Schicken>=quant)
        {
            Schicken+=quant;
            Total_chicken=(Total_chicken+quant)*450;
            cout<<"\n\n\t\t "<< quant<<"chicken ordered";

        }
        else{
            cout<<"\n\t Only"<<Qchicken-Schicken<<"are available";
            break;
        }

    case 7:
        cout<<"Details of sales and collection";
        cout<<"\n\n Number of rooms we had"<<Qrooms;
        cout<<"\n\n Number of rooms sold"<<Srooms;
        cout<<"Number of remaining rooms"<<Qrooms-Srooms;
        cout<<"Number of rooms sold"<<Total_rooms;

        cout<<"Details of sales and collection";
        cout<<"\n\n Number of pasta we had"<<Qpasta;
        cout<<"\n\n Number of pasta sold"<<Spasta;
        cout<<"Number of remaining pasta"<<Qpasta-Spasta;
        cout<<"Number of pasta sold"<<Total_pasta;

        cout<<"Details of sales and collection";
        cout<<"\n\n Number of burger we had"<<Qburger;
        cout<<"\n\n Number of burger sold"<<Sburger;
        cout<<"Number of remaining burger"<<Qburger-Sburger;
        cout<<"Number of burger sold"<<Total_burger;

        cout<<"Details of sales and collection";
        cout<<"\n\n Number of noodles we had"<<Qnoodles;
        cout<<"\n\n Number of noodles sold"<<Snoodles;
        cout<<"Number of remaining noodles"<<Qnoodles-Snoodles;
        cout<<"Number of noodles sold"<<Total_noodles;

        cout<<"Details of sales and collection";
        cout<<"\n\n Number of shake we had"<<Qshake;
        cout<<"\n\n Number of shake sold"<<Sshake;
        cout<<"Number of remaining shake"<<Qshake-Sshake;
        cout<<"Number of shake sold"<<Total_shake;

        cout<<"Details of sales and collection";
        cout<<"\n\n Number of chicken we had"<<Qchicken;
        cout<<"\n\n Number of rooms sold"<<Srooms;
        cout<<"Number of remaining rooms"<<Qrooms-Srooms;
        cout<<"Number of rooms sold"<<Total_rooms;

        case 8:
        exit(0);

    default:
        cout<<"\n Please select the numbers mentioned above'";





    }









}
