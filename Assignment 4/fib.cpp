#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

int topDown(int n, int * F)
{
    if(n==0 or n==1)
    {
        return n;
    }
    else
    {
        
        F[n]=topDown(n-1,F)+topDown(n-2,F);
    }
    return F[n];
    
}
int fib_Recurse(int n)
{
    if(n==0 or n==1)
    {
        
        return n;
    }
    else
    {
        return fib_Recurse(n-1)+fib_Recurse(n-2);
    }
    
}

int main(int argc, char* argv[])
{
    int n;
    cout<<"What fibonacci number would you like (negative to break)"<<endl;
    cin>>n;
    while(n>0)
    {
        cout<<"Bottom up:\t";
        int a=0,b=1,c=0,goal=0;
        auto start=high_resolution_clock::now();
        while(c+a<=n)
        {
            c=a+b;
            a=b;
            b=c;
            goal++;
        }
        auto stop=high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(stop - start);
        cout<<duration.count()<<" nanoseconds"<<endl;
        cout<<"Recurse:\t";
        start=high_resolution_clock::now();
        fib_Recurse(goal+1);
        stop=high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(stop - start);
        cout<<duration.count()<<" nanoseconds"<<endl;
        int F[goal+1]={6};
        F[0]=0,F[1]=1;
        cout<<"Top down:\t";
        start=high_resolution_clock::now();
        topDown(goal+1,F);
        stop=high_resolution_clock::now();
        duration = duration_cast<nanoseconds>(stop - start);
        cout<<duration.count()<<" nanoseconds"<<endl;
        cout<<"What fibonacci number would you like (negative to break)"<<endl;
        cin>>n;
    }
        
    
    
    return 0;
}
