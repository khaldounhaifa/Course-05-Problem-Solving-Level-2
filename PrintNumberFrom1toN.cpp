#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Massege) 
{
    int Number = 0;
    do
    {
        cout << Massege << endl;
        cin >> Number; 


    } while (Number <= 0);
    return Number; 
}

bool CheckNumberisPerfect(int Number)
{
    int Sum = 0;
    
    for (int i = 1; i < Number;i++)
    {
        if (Number % i == 0)
        {
            Sum += i; 
        }
    }
    return Number == Sum; 
}
void PrintResult(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (CheckNumberisPerfect(i))
        {
            cout << i << " Is Perfect Number.\n";
        }
    }
    
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a Positive Number"));
}

