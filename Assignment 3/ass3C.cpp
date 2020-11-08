#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
#include "hashtable.h"
#include "heapsort.h"

using namespace std;

string lowerit(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]<91 and s[i]>64)
            s[i]+=32;
    }
    return s;
}

int main(int argc, char *argv[])
{
    cout<<"What would you like to run?"<<endl;
    cout<<"0: Terminate Program (exit)"<<endl;
    cout<<"1: Task 1 & 2: Index quicksort using median of 3"<<endl;
    cout<<"2: Task 3: Kth value finder(ass3B)"<<endl;
    cout<<"3: Task 4: Pride and Prejudice Heapsort with hashtable (ass3C)"<<endl;
    int c;
    cin>>c;
    if(c==0)
    {
        exit(1);
    }
    else if(c==1)
    {
        //call ass3A
    }
    else if(c==2)
    {
        //call ass3B
    }
    else if(c==3)
    {
        ifstream file;
        ofstream myfile;
        file.open("Pride and Prejudice.txt");
        myfile.open("book.txt");
        if(!file.is_open()) return 1;
        string line, holder, word;
        int i=0,j=0,sentences=0,commas=0,words=0,quotationmarks=0,exclamationpoints=0,chapters=0, punc,quote,space,underbar,dash;
        while(getline(file, line))
        {
            i++;
            if(i>30&&i<13061)
            {
                if(line.length()==1)
                {}
                else
                    //cout<<line<<endl;
                holder=line.substr(0,line.length()-1);
                while(holder.length()!=0)
                {
                    while(holder.length()!=0 and holder[0]!=' ')
                    {
                        if(holder[0]!='-' and holder[0]!='_' and holder[0]!='"' and holder[0]!=',' and holder[0]!=';' and holder[0]!='\'')
                        {

                            if((holder[0]=='.' and word!="Mr" and word!="Mrs" and word!="M" and word!="St") or ( holder[0]=='?') or (holder[0]=='!'))
                            {   
                                if(holder[1]=='"')
                                    if((holder[3]<91 and holder[3]>64) or holder[3]==44)
                                    {
                                        sentences++;
                                        myfile<<lowerit(word)<<endl;
                                        word="";
                                        holder=holder.substr(1,holder.length());
                                         break;
                                    }
                                sentences++;
                                myfile<<lowerit(word)<<endl;
                                word="";
                                holder=holder.substr(1,holder.length());
                                break;
                            }
                            else
                            {
                                word+=holder[0];
                            }
                        holder=holder.substr(1,holder.length());  
                        }
                        else 
                        {
                                if(word.length()!=0)
                                    myfile<<lowerit(word)<<" ";
                                word="";
                                break;
                        }
                    }
                    if(word.length()!=0)
                       myfile<<lowerit(word)<<" ";
                    word="";
                    if(holder.length()!=0)
                        holder=holder.substr(1,holder.length());
                }
                
            }
        }
        cout<<sentences<<endl;
    }
    return 0;
}