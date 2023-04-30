#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    int i=1;
    while(input != "*")
    {
        if(input == "Hajj")
        {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        }
        else if (input == "Umrah")
        {
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        }
        i++;
        cin>>input;
    }
    return 0;
}