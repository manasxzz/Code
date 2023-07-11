#include <iostream>
using namespace std;

int main() 
{
    int sp, i=1;
    while(i<=4)
    {
        int j=1;
        sp=4-i;
        while(sp!=0)
        {
            cout<<" ";
            sp--;
        }
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    return 0;
}
