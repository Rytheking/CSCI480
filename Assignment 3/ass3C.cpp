#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
#include "hashtable.h"
#include "heapsort.h"

using namespace std;


string cleanword(string word){
    if(word)
    return word;
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
                int space=line.find(' ');
                word=line.substr(0,space);
                quote=word.find('"');
                if(quote!=-1)
                    word=word.substr(word.find)
                punc=word.find('.');
                if(punc!=-1){
                    sentences++;
                    if(word=="Mr." or word=="Mrs." or word=="St." or word=="M.")
                    {
                        sentences--;
                    }
                    else
                    {
                            myfile<<word<<endl;
                    }
                    
                }
                else if(punc==-1){
                    punc=word.find('!');
                    if(punc!=-1){
                        sentences++;
                        myfile<<word<<endl;
                    }
                }
                else if(punc==-1){
                    punc=word.find('?');
                    if(punc!=-1){
                        sentences++;
                        myfile<<word<<endl;
                    }
                }
            }
            
        }
        cout<<sentences<<endl;
    }
    return 0;
}