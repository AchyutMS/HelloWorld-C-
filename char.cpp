#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream f1,f2;
    f1.open("upper.txt",ios::app);
    f2.open("Lower.txt",ios::app);
    char c,ch;
    do
    {
        cin>>ch;
        if (isupper(ch))
        f1<<ch;
        else (islower(ch))
        f2<<ch;
        cin>>c;
    }while(c=='Y'||c=='y');
    f1.close();
    f2.close();
    return 0;
}