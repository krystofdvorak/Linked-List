#include <iostream>
#include "linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
    nodescount = 0;
}

LinkedList::~LinkedList()
{
    int8_t i = nodescount;
    node* temp = head;

    while(temp -> next)
    {
        node* ptr = temp;
        temp = temp -> next;
        delete(ptr);
    }

        
}

int LinkedList::Insert(int userdata, int position)
{
    
    if(position-1 > nodescount || position < 1) 
    {
        cout << " [Error : incorrect position ] " << endl;
        return 0;
    }
    node* ptr = new node();
    ptr -> next = nullptr;
    ptr -> data = userdata;

    if(head == nullptr) 
    {
        head = ptr;
        nodescount++;
        return 1;
    }
    if(position == 1)
    {
        ptr -> next = head;
        head = ptr;
        nodescount++;
        return 1;
    }
    else
    {
        node* temp = head;
        for(int i = 0; i < position-2; i++)
        {
            temp = temp -> next;
        }
            
            if(position > nodescount)
            {
                temp -> next = ptr;
                nodescount++;
                return 1;
            }

        ptr -> next = temp -> next;
        temp -> next = ptr;
    }
    
    nodescount++;

    return 1;
}

int LinkedList::Delete(int position)
{   
    if(position > nodescount || position < 1) 
    {
        cout << " [Error : incorrect position ] " << endl;
        return 0;
    }
    
    node* temp = head;

    if(position == 1)
    {
        head = temp -> next;
        nodescount--;
        delete(temp);
        return 1;
    }
    

    for(int i = 0; i < position - 2; i++)
    {
        temp = temp -> next;
    }

    if(position == nodescount)
    {
        temp -> next = nullptr;
        delete(temp -> next);
        nodescount--;
        return 1;   
    }

    node* temp2 = temp -> next;
    temp -> next = temp2 -> next;

    delete(temp2);
    nodescount--;

    return 1;
}

int LinkedList::PrintNodes()
{
    node* temp = head;
    int i = 0;
    while(temp != nullptr)
    {
        i++;
        cout << temp -> data << endl;
        temp = temp -> next;
    }   

    return 1;
}

int LinkedList::Modify(int userdata, int position)
{
    node* temp = head;
    for(int i = 0; i < position-1; i++)
    {
        temp = temp -> next;
    }

    temp -> data = userdata;

    return 1;
}