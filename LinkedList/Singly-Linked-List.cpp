#include<iostream>
#include<list>
using namespace std;
// Node Structure
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Array to LL
node* creatll(int arr[],int index,int size)
{
    if(index==size)
    {
        return NULL;
    }

    node *temp;
    temp = new node(arr[index]);
    temp ->next = creatll(arr,index+1,size);
    return temp;
};

// Print LL
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};

//Delete From Front -> DLT HEAD
node* dlt_head(node* head)
{
    node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
// Delete from  back -> Delete Tail
node * dle_tail(node *head)
{
    if(head==NULL || head->next==NULL) return NULL;
    node*temp=head;
    while(temp->next->next !=NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}
 // Delete K th Node 
 node* RemoveK(node *head, int k)
 {
    if(head==NULL) return NULL;
    if(k==1)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    node *temp = head;
    node *prev = NULL;
    int   cnt  = 0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
};

 // Delete K th Element
  node* RemoveEl(node *head, int el)
 {
    if(head==NULL) return NULL;
    node*temp=head;
    if(temp->data==el)
    {
        node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    node *prev = NULL;
    while(temp!=NULL)
    {
        if(temp->data==el)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
};
// New Head insertion in Linked list
node *Ins_Head(node *head)
{
    node *temp = new node(0);
    temp->next=head;
    return temp;
};
// New tail insertion in Linked List
node *Ins_tail(node *head)
{
   node *temp =head;
   while(temp->next!=NULL)
   {
    temp = temp->next;
   }
   node *tail = new node(6);
   temp->next = tail;
   tail->next = NULL;
   return head;
};

// Insertion at K th position 
node *ins_k(node*head,int k,int el)
{
    if(head==NULL) 
    {
        node *temp = new node(el);
        return temp;
    }
    if(k==1) 
    {
        node *temp = new node(el);
        return temp;
    }
    int cnt = 0;
    node *temp = head;
    while(cnt!=k-1)
    {
        cnt++;
        temp = temp->next;
    }
    node *x = new node(el);
    x->next=temp->next;
    temp->next= x;

    return head;
};

int main()
{
    int arr[]={1,2,3,4,5};
    node *head=NULL;
    head = creatll(arr,0,5);
    // head=dle_tail(head);
    // head = dlt_head(head);
    // head = RemoveK(head,5);
    // head = RemoveEl(head,4);
    // head = Ins_Head(head);
    // head = Ins_tail(head);
    // head=ins_k(head,5,33);
    print(head);
    return 0;
}