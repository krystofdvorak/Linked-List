#include <iostream>
#include "linkedlist.h"

using namespace std;

template <typename T>

T input(void)
{
    T i;
    cin >> i;
    if(!cin)
    {
        return -1;
    }
    else return i;
}

int main(int argc, char** argv)
{
    LinkedList seznam;
    char c;
    char h;
    int i;
    int k;

    for(int i = 1; i < 11; i++)
    {
        seznam.Insert(i,i);
    }

do{
    system("cls");
    cout << " Your list : " << endl;
    seznam.PrintNodes();

    cout << endl << " Do you want to modify your list? [y/n] ";
    c = input<char>();
   
    if(c == 'n' || c == 'N') return 0;
    if(c != 'y' && c != 'Y')
    {
        cout << " [Error] ";
        return 0;
    }
    
    cout << endl <<  " How do you want to modify your list? " << endl;
    cout << " 1. Insert " << endl << " 2. Delete node " << endl << " 3. Modify node " << endl << " 4. Print list " << endl;
    cout << "Enter number :   ";
    i = input<int>();
    if(i == 1)
    {
        cout << endl << " What data do you want to insert? (int)  ";
        i = input<int>();

        if(i == -1)
        {
             cout << endl << " [Error] ";
             return 0;
        }
        cout << endl << " Which position should you data be in ? ";
        k = input<int>();

        if( k == -1)
        {
            cout << endl << " [Error] ";
            return 0;
        }
            
        seznam.Insert(i,k);

    }
    else if(i == 2)
    {

        cout << endl << " Which position does the node you want to delete have?  ";
        k = input<int>();
        
        if( k == -1)
        {
            cout << endl << " [Error] ";
            return 0;
        }
            
        seznam.Delete(k);

    }
    else if(i== 3)
    {
        cout << endl << " Which position does the node you want to modify have?  ";
        k = input<int>();

        if( k == -1)
        {
            cout << endl << " [Error] ";
            return 0;
        }
        cout << endl << " Which data do you want to be in this node?  ";
        i = input<int>();
        
        if( i == -1)
        {
            cout << endl << " [Error] ";
            return 0;
        }
            
        seznam.Modify(i,k);
                   
    }
    else if(i == 4)
    {
        seznam.PrintNodes();    
    }
    else
    {
        cout << endl << " [Error] ";
        return 0;
    }

    cout << "Do you want to continue? [y/n] ";
    h = input<char>();
    if(h != 'n' && h != 'N' && h != 'y' && h != 'Y')
    {
        cout << endl << " [Error] ";
        return 0; 
    }

 }while(c != 'n' || c != 'n');


    

    return 1;
}