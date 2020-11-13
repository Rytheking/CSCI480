#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

template<typename K, typename V>

class HashNode
{
    public:
        V value;
        K key;
        HashNode * next;
    HashNode(K key, V value)
    {
        this->value =value;
        this->key=key;
    }
    HashNode<K,V> getNext()
    {
        return this->next;
    }
    V getValue()
    {
        return this->value;
    }
    K getKey()
    {
        return this->key;
    }
    void setValue(V value)
    {
        this->value=value;
    }
    void setNext(HashNode<K,V>* next)
    {
        this->next=next;
    }
};

template<typename K, typename V>
class HashMap
{
    HashNode<K,V> **arr;
    double thresh=.80;
    int maxSize;
    int capacity;
    int size;
    HashNode<K,V> *dummy;

    public:

    void resize()
    {
        int oldTableSize = capacity;
        capacity*=2;
        maxSize= (int) (capacity * thresh);
        HashNode<K,V> **oldArr=arr;
        arr=new HashNode<K,V>*[capacity];
        for(int i=0; i<capacity; i++)
        {
            arr[i]=NULL;
        }
        size=0;
        for (int hash = 0; hash < oldTableSize; hash++)
        {
                  if (oldArr[hash] != NULL) {
                        HashNode<K,V> *oldEntry;
                        HashNode<K,V> *entry = oldArr[hash];
                        while (entry != NULL) {
                             insertNode(entry->getKey(), entry->getValue());
                             oldEntry = entry;
                             entry = entry->next;
                             delete oldEntry;
                        }
                  }
        }
        delete[] oldArr;
    }
    HashMap()
    {
        capacity=5;
        size=0;
        maxSize=thresh*capacity;
        arr=new HashNode<K,V>*[capacity];
        for(int i=0; i<capacity;i++)
        {
            arr[i]=NULL;
        }
        //dummy=new HashNode<K,V> (-1,-1);
    }
    void setThreshold(float threshold) {

            this->threshold = threshold;

            maxSize = (int) (capacity * threshold);
      }
    int hashCode(K key)
    {
        int hashVal=0, len=key.length();
        for(int i=0; i<len;i++)
            hashVal+= key[i];
        return hashVal;
    }

    void insertNode(K key, V value)
    {
        HashNode<K,V> *temp = new HashNode<K,V>(key,value);
        int hashIndex=hashCode(key);
        cout<<hashIndex<<endl;
        if(arr[hashIndex] == NULL)
        {
            arr[hashIndex]=new HashNode<K,V>(key, value);
            size++;
        } 
        else
        {
            HashNode<K,V> *entry = arr[hashIndex];
            while(entry->next!=NULL)
                entry=entry->next;
            if(entry->getKey() == key)
                entry->setValue(value);
            else
            {
                    entry->setNext(temp);
                    size++;
            }
            
        }
        if(size>=maxSize)
            resize();
    }
    //Function to search the value for a given key 
    V get(int key) 
    { 
        // Apply hash function to find index for given key 
        int hashIndex = hashCode(key); 
        int counter=0; 
        //finding the node with given key    
        while(arr[hashIndex] != NULL) 
        {    int counter =0; 
             if(counter++>capacity)  //to avoid infinite loop 
                return NULL;         
            //if node found return its value 
            if(arr[hashIndex]->key == key) 
                return arr[hashIndex]->value; 
            hashIndex++; 
            hashIndex %= capacity; 
        } 
          
        //If not found return null 
        return NULL; 
    } 
      
    //Return current size  
    int sizeofMap() 
    { 
        return size; 
    } 
      
    //Return true if size is 0 
    bool isEmpty() 
    { 
        return size == 0; 
    } 
      
    //Function to display the stored key value pairs 
    void display() 
    { 
        for(int i=0 ; i<capacity ; i++) 
        { 
            if(arr[i] != NULL) 
                cout << "key = " << arr[i]->key  
                     <<"  value = "<< arr[i]->value << endl; 
        } 
    } 
};


#endif