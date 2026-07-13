#include <iostream>
#include <string>
using namespace std;

enum enPrimeOrNotPrime { Prime = 1, NotPrim = 2 };

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
enPrimeOrNotPrime CheckNumber( int & Number )
{
    
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
        {
            return enPrimeOrNotPrime::NotPrim;
        }
    }
    return enPrimeOrNotPrime::Prime;
}
void PrintPrimeNumber(int Number)
{
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;

    for (int i = 1; i <=  Number;i++)
    {
        if (CheckNumber(i) == enPrimeOrNotPrime::Prime)
        {
            cout << i << endl; 
        }
    }
}
int main()
{
    PrintPrimeNumber(ReadPositiveNumber("Enter a Positive Number")); 
}

