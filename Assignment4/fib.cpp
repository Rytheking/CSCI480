#include <iostream>
#include <string>

using namespace std;

unsigned long long int topDown(int n, unsigned long long int * F)
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

long long int fib_Recurse(int n)
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
    int n, menuOp;
    cout<<"What fibonacci method would you like? \n 1: Recursive \n 2: Nonrecursive Top Down\n 3: Nonrecursive Bottomup"<<endl;
    cin>>menuOp;
    if(menuOp==1)
    {
        do{
            cout<<"What fibonacci number would you like"<<endl;
            cin>>n;
            if(n==0) break;
            cout<<fib_Recurse(n)<<endl;
        }while(1);
        
    }
    else if(menuOp==2)
    {
        do{
            cout<<"What fibonacci number would you like"<<endl;
            cin>>n;
            if(n==0) break;
            unsigned long long int F[n]={6};
            F[0]=0,F[1]=1;
            cout<<topDown(n,F)<<endl;
            //free(F);
        }while(1);
        //free(F);
    }
    else if(menuOp==3)
    {
        
        do{
            unsigned long long int a=0,b=1,c;
            cout<<"What fibonacci number would you like (negative to breakout)"<<endl;
            cin>>n;
            if(n<0) break;
            for(int i=2;i<=n;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }
            cout<<b<<endl;
        }while(1);
        
    }
    
    
    return 0;
}
