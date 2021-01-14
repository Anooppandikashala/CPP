#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// a structure that store the name and mark of a student
struct Student
{    
    char name[100];
    int mark;
};


// a single node that stores a Data (struct) and a link to next node
struct node
{
    struct  Student student;
    struct node* next;   
    
};

struct node* root = NULL;

//function that create a node and return its address
struct node* createNode()
{
    struct node* temp =malloc(sizeof(struct node));
    return temp;
}

// a function that insert a value into the linked list
void insert(struct Student student)
{
    
    if(root == NULL)// root equal to NULL means ,no linked list is created
    {
        printf("\nAt first time : ");
        printf("\n%s",student.name);
        printf("\n%d\n",student.mark);
        root = createNode();
        // root->student.name = student.name;
        // root->student.mark = student.mark;
        root->student = student;
        root->next = NULL; 
    }
    else // root not equal to NULL means ,already a linked list is there
    {
        struct node* temp = root;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        struct node* nextNode = createNode(); 
        nextNode->student = student;
        nextNode->next = NULL;
        temp->next = nextNode;

    }    
}

void print(struct node* temp)
{
    while(temp != NULL)
    {
        printf("\nStudent name : %s",temp->student.name);
        printf("\nStudent mark : %d",temp->student.mark);
        temp = temp->next;
    }
}

int search(char name[])
{
    struct node* temp = root;
    while(temp != NULL)
    {
        if(!strcmp(temp->student.name,name))
        {
            return 1; // it find out the required element from Linked list
        }
        temp = temp->next;
    }
    return 0; // if the search reaches the end of the linked list it return 0
}

int isEmpty()
{
    if (root == NULL)
    {
        return 1;
    }
    return 0;
}

void main()
{
    
    while(1 )
    {
        printf("\n****************************************\n");
        printf("***************MENU*********************\n");
        printf("\t\t1 . insert \n");
        printf("\t\t2 . delete \n");
        printf("\t\t3 . is Empty \n");
        printf("\t\t4 . print \n");
        printf("\t\t5 . Search \n");
        printf("****************************************");
        int key =0;
        scanf("%d",&key);

        switch (key)
        {
        case 1 :
        {
            struct Student s;
            printf("\nEnter the name :");
            scanf("%s",s.name);
            printf("\nEnter the mark :");
            scanf("%d",&s.mark);

            insert(s);
            break;
        }
        case 2 :
        {
            char name[100];
            printf("\nEnter the name you want to delete:");
            scanf("%s",name);
            
            
            break;
        }
        case 3 :
        {
            int result = isEmpty();
            printf("\nIs Empty : %d ",result);
            break;
        }
        case 4:
            print(root);
            break;

        case 5:
        {
            char name[100];
            printf("\nEnter the name you want to search:");
            scanf("%s",name);
            int x= search(name);
            printf("%d",x);
            break;           
        
        }
            
        default:
            break;
        }
 

    }
}

