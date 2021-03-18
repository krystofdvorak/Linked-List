#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__



class LinkedList
{
    private:
        struct node
            {
                int data;
             node* next;
            };
          

    public:
        
        int nodescount;
        node* head;  
        LinkedList();
        ~LinkedList();
        int Insert(int userdata, int position);
        int Delete(int position);
        int Modify(int userdata, int position);
        int PrintNodes();
};





#endif //__LIST_LIBRARY_H__