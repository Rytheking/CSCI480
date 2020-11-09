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
    HashNode(K key, V value)
    {
        this->value =value;
        this->key=key;
    }
};

template<typename K, typename V>
class HashMap
{
    HashNode<K,V> **arr;
    int capacity;
    int size;
    HashNode<K,V> *dummy;

    public:
    HashMap()
    {
        capacity=150000;
        size=0;
        arr=new HashNode<K,V>*[capacity];
        for(int i=0; i<capacity;i++)
        {
            arr[i]=NULL;
        }
        dummy=new HashNode<K,V>(-1,-1);
    }
    int hashCode(K key)
    {
        return key %capacity;
    }

    void insertNode(K key, V value)
    {
        HashNode<K,V> *temp = new HashNode<K,V>(key,value);
        int hashIndex=hashCode(key);
        while(arr[hashIndex]!=NULL and arr[hashIndex]->key != key and arr[hashIndex]->key != -10)
        {
            hashIndex++;
            hashIndex %=capacity;
        }
        if(arr[hashIndex] == NULL || arr[hashIndex]->key == -1) 
            size++; 
        arr[hashIndex] = temp; 
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
            if(arr[i] != NULL && arr[i]->key != -1) 
                cout << "key = " << arr[i]->key  
                     <<"  value = "<< arr[i]->value << endl; 
        } 
    } 
};


#endif