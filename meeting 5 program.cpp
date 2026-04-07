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

//Grade file 2

#include <iostream>
using namespace std;

int main()
{
    float mathGrade, englishGrade, average;
    string status;

    cout << "Enter Math Grade: ";
    cin >> mathGrade;

    cout << "Enter English Grade: ";
    cin >> englishGrade;

    average = (mathGrade + englishGrade) / 2;

    if ((average > 60) || (mathGrade >= 70))
    {
        status = "Pass";
    }
    else
    {
        status = "Fail";
    }

    cout << "\n===== Result =====" << endl;
    cout << "Average = " << average << endl;
    cout << "Status  = " << status << endl;
} 

//Grade file 3

#include <iostream>
using namespace std;

int main()
{
    float mathGrade, englishGrade, average;
    string status;

    cout << "Enter Math Grade: ";
    cin >> mathGrade;

    cout << "Enter English Grade: ";
    cin >> englishGrade;

    average = (mathGrade + englishGrade) / 2;

    if ((average > 60) && (mathGrade >= 70))
    {
        status = "Pass";
    }
    else
    {
        status = "Fail";
    }

    cout << "\n===== Result =====" << endl;
    cout << "Average = " << average << endl;
    cout << "Status  = " << status << endl;
}

//UniversityMajorSelectionSystem

#include <iostream>
using namespace std;

int MajorCode;
string MajorNAme, quotastatus;

void input() {

    cout << " ===== UNIVERSITY MAJOR REGISTRANTION ====== " << endl;

    cout << " 1. information tecnology " << endl;
    cout << " 2. Electrical Engineering " << endl;
    cout << " 3. information system " << endl;
    cout << " ______________________________________________\n";

    cout << " Enter Major Code (1-3):"; 
    cin >> MajorCode;
}

int main()
{
    input();
}
