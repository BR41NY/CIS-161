#include <iostream>
#include <string>
using namespace std;

void Method1();
void Method2();
void Method3();

int main ()
{    
    string Pause;
    const int SIZE = 6;
    string Names[SIZE] =  { "Name1", "Name2", "Name3", "Name4", "Name5", "Name6" };
        
    for (int index = 0; index < SIZE ; index++)
    {          
       cout << Names[index] << endl;
    }

    cout << "In Main " << endl << endl;
    Method1();
    cout << "In Main " << endl << endl;
    Method2();
    cout << "In Main " << endl << endl;
    Method3();

    cout << "Press a key to exit" << endl;
    cin >> Pause;

    return 0;

}

void Method1()
{ 
    cout << ("Break Point in Method1") << endl;
}

void Method2()
{
    cout << ("Break Point in Method2") << endl;
}

void Method3()
{
    cout << ("Break Point in Method3") << endl;
}
