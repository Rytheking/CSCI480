#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
#include "vectorf.h"
#include "hashtable.h"
#include "heaprf.h"

using namespace std;

string lowerit(string s)
{
    for(unsigned i=0; i<s.length(); i++)
    {
        if(s[i]<91 and s[i]>64)
            s[i]+=32;
    }
    return s;
}
struct wordCount{
    string word;
    int count;
};
int main(int argc, char *argv[])
{
        ifstream file;
        ofstream myfile;
        vectoRF<string> words;
        HashMap<int, wordCount> map;
        file.open("Pride and Prejudice.txt");
        myfile.open("book.txt");
        if(!file.is_open()) return 1;
        string line, holder, word, hold;
        int i=0,sentences=0;
        while(getline(file, line))
        {
            i++;
            if(i>30&&i<13061)
            {
                holder=line.substr(0,line.length()-1);
                while(holder.length()!=0)
                {
                    while(holder.length()!=0 and holder[0]!=' ')
                    {
                        if(holder[0]!='-' and holder[0]!='_' and holder[0]!='"' and holder[0]!=',' and holder[0]!=';')
                        {

                            if((holder[0]=='.' and word!="Mr" and word!="Mrs" and word!="M" and word!="St") or ( holder[0]=='?') or (holder[0]=='!'))
                            {   
                                if(holder[1]=='"'){
                                    if((holder[3]<91 and holder[3]>64) or holder[3]==44)
                                    {
                                        sentences++;
                                        myfile<<lowerit(word)<<endl;
                                        hold=lowerit(word);
                                        word="";
                                        holder=holder.substr(1,holder.length());
                                        break;
                                    }
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
                                {
                                    myfile<<lowerit(word)<<" ";
                                } 
                                word="";
                                break;
                        }
                    }
                    if(word.length()!=0)
                    {
                        myfile<<lowerit(word)<<" ";
                    }
                    word="";
                    if(holder.length()!=0)
                        holder=holder.substr(1,holder.length());
                }
                
            }
        }
        cout<<"Sentences: "<<sentences<<endl;
    
    return 0;
}