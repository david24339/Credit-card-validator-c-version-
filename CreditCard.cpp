#include <iostream>
#include <string.h>
#include <string>

using namespace std;


bool checkCard(string number);
void cardIssuer(string number);

int main()
{
string cardNumber;

cout<<"--------------------------------------------------------------------------------------------------\n"
    <<" Welcome to the credit card checker(Note that this program does not store any input information)\n"
    <<"--------------------------------------------------------------------------------------------------"<<endl<<"\n";

    cout<<"Please input your credit card number(e.g 1234567893456789):";
    cin>>cardNumber;

    ///
    for (int j=0; j< cardNumber.length();j++)
    {
        if ( !isdigit(cardNumber[j]))
        {
            cout<<"You probably type a character that is not a number. TRY AGAIN\n\n";
            exit(1);
        }
    }
    ///

    bool result=checkCard(cardNumber);

    if (result){
        cout<<" The card number you have entered is valid\n";
        //call the cardIssuer function determine whether it is VISA ,Masterclass ,American Express or Discover Card. 
        cardIssuer(cardNumber);
    }
    else
        cout<<" The card number you have entered is NOT valid!! PLEASE TRY AGAIN\n";

}

bool checkCard(string number)
{
    string multiply2="";
    int conter = 0;

    while (conter < number.length())
    {
        int a = static_cast<int>(number[conter])-48;
        multiply2=multiply2 + to_string(a*2);
        conter += 2;
    }

    int new1=0;

//
    for (int i=0; i< multiply2.length();i++ )
    {
        char var=multiply2[i];
        int num=static_cast<int>(var)-48;
        new1 = new1 + num;
    }

    int new2 = 0;
    int conter2 = 1;

    while (conter2 < number.length())
    {
        char b=number[conter2];
        int num=static_cast<int>(b)-48;
        new2 = new2 +num;
        conter2 += 2;
    }

    string sum= to_string(new1+new2);
    if (sum[sum.length()-1] == '0')
        return true;
    else
        return false;

}
void cardIssuer(string number)
{

    //if the card number start with 34 or 37, then it is American Express.
    if (number.substr(0,2) == "34" || number.substr(0,2) == "37")
        cout<<"THIS IS AN AMERICAN EXPRESS";

    //if the card number start with 4, then it is VISA.
    else if (number[0] == '4')
        cout<<" THIS IS A VISA CARD";

    //if the card number start with 5, then it is Mastercard.
    else if (number[0] == '5')
        cout<< "THIS IS  A MASTERCARDS ";

    //if the card number start with 6, then it is Discover Card.
    else if (number[0] == '6')
        cout<<" THIS IS A DISCOVER CARD ";
}
