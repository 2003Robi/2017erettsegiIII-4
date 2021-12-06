#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int v[100],i=0,n,k,max=0,a,b;
    while(in>>v[i])
        i++;
    n=i;
    i=0;
    while(i<n)
    {
        while(v[i]%2!=0)
            i++;
        a=i;
        while(v[i]%2==0)
            i++;
        b=i-1;
        if(b-a+1>max)
        {
            max=b-a+1;
            k=1;

        }
        else
            if(b-a+1==max)
            k++;
    }
    cout<<k;
    in.close();
    return 0;
}
