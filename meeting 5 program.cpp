#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    int x;

    //print For Loop 5 Times using for

    for (int i = 0; i <= 4; i++)
    {
        cout << "Teknologi Informasi UMY" << endl;
    }
    cout << endl;

//to get a random sequence of numbers different
srand(time(0));


//loop with while 
cout << "While Loop" << endl;

x = 1 + rand() % 10;
while (x <= 5)
{

    cout << "Random Number = " << x << endl;
    x = rand() % 10;

}
cout << "Last Random Number while = " << x << endl << endl;

    cout << "Repitition  Do ...While" << endl;
    x = 1 + rand() % 10;


    do
    {
        cout << "Random Number =" << x << endl;
        x = rand() % 10;
    } while (x <= 5);

    cout << "The Last Random Number do-while = " << x << endl << endl;


}

//Gread file 
   int main()
{
    
    float MAthGrade,EngilishGrade, Avrage;

    string status;

    cout << "Ether Math Value "; cin >> MAthGrade;

    cout << " Ether Engilsh Grade "; cin >> EngilishGrade;

    Avrage = (MAthGrade + EngilishGrade) / 2;

    if (!(Avrage) < 60) {

        status = " pass \n ";
    }
    else {

        status = " faild \n";
    }

     cout << " staus =" << status << " and the Avrage = " << Avrage << endl;
}

//Grade file
#include <iostream>
using namespace std;

int main()
{
    float MAthGrade, EngilishGrade, Avrage;

    cout << "Enter Math Grade: ";
    cin >> MAthGrade;

    cout << "Enter English Grade: ";
    cin >> EngilishGrade;

    Avrage = (MAthGrade + EngilishGrade) / 2;

    cout << "Average = " << Avrage << endl;
}
