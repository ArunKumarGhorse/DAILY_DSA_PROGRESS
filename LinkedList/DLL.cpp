#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void Add_at_start(struct node **q, int num)
{
    struct node *ptr = new node;

    ptr->data = num;
    ptr->next = *q;
    *q = ptr;
}

void Add_at_End(struct node **q, int num)
{
    struct node *ptr = new node;
    ptr->data = num;
    ptr->next = NULL;

    if (*q == NULL)
    {
        *q = ptr;
        return;
    }

    struct node *ftr = *q;

    while (ftr->next != NULL)
    {
        ftr = ftr->next;
    }

    ftr->next = ptr;
}

void Display(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Add_at_posi(struct node **q, int n, int pos)
{
    struct node *ptr = new node;
    ptr->data = n;

    if (pos == 1)
    {
        ptr->next = *q;
        *q = ptr;
        return;
    }

    struct node *ftr = *q;

    for (int i = 1; i < pos - 1 && ftr != NULL; i++)
    {
        ftr = ftr->next;
    }

    if (ftr == NULL)
    {
        cout << "Invalid Position" << endl;
        delete ptr;
        return;
    }

    ptr->next = ftr->next;
    ftr->next = ptr;
}
// Delete at Beginning
void Delete_At_Beg(struct node **q)
{
    struct node *ptr;
    if (*q == NULL)
    {
        cout << "No Node Available to Delete";
        exit(0);
    }
    else
    {
        ptr = *q;
        *q = ptr->next;
        free(0);
    }
}
// Delete at end;
void Delete_At_End(struct node **q)
{
    struct node *ptr = new node;
    ptr = *q;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node *del = new node;
    del = ptr->next;
    ptr->next = NULL;
    free(del);
}
int main()
{
    struct node *start = NULL;
    // insert at start
    Add_at_start(&start, 6);
    Add_at_start(&start, 7);
    Add_at_start(&start, 8);
    Add_at_start(&start, 9);
    Add_at_start(&start, 10);

    // Insert at End
    Add_at_End(&start, 11);
    Add_at_End(&start, 12);
    Add_at_End(&start, 13);
    Add_at_End(&start, 14);
    Display(start);
    cout << "\n";

    // Insert At Given Position
    int pos = 4;
    int n = 1000;
    Add_at_posi(&start, n, pos);
    Display(start);

    // Delete ar Start
    cout << "\n";
    Delete_At_Beg(&start);
    Display(start);

    // Delete at End
    cout << "\n";
    Delete_At_End(&start);
    Display(start);

    return 0;
}