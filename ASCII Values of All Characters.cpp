#include<iostream>
using namespace std;
int main()
{
    char ch;
    int i;
    cout<<"Character\tASCII Value\n";
    for(i=0; i<255; i++)
    {
        ch = i;
        cout<<ch<<"\t\t"<<i<<"\n";
    }
    cout<<"\n";
    return 0;
}
