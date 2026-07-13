#include <iostream>
using namespace std;

void PrintHeader()
{
    cout << "\n\n\n\t\t\tMultiPlication Table From 1 To 10 \n" << endl;
    cout << "\t"; 
    for (int i = 1;i <= 10;i++)
    {
        cout <<i<<"\t";
    }
    cout << "\n-----------------------------------------------------------------------------------\n";
}
string PrintSpace(int i)
{
    if (i < 10)
    {
        return"    |";
    }
    else
    {
        return"   |";
    }
    
}
void PrintMultiplicationTable()
{
    PrintHeader(); 

    for (int i = 1; i <= 10;i++)
    {
        cout << " " << i << PrintSpace(i) << "\t";

        for (int j = 1; j <= 10;j++)
        {
            cout << i * j << "\t";
        }
        cout << endl; 
        
    }
    
}
int main()
{
    PrintMultiplicationTable();
}

