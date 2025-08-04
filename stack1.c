#include<stdio.h>
#include<conio.h>

void push(int[],int*,int*);  //done
int peek(int[],int*); //done
int pop(int[],int*); //done


void main()
{
    int arr[100],size,ch,pnum,ponum;
    int top=-1;
    char choice;
    printf("Enter the size of the stack");
    scanf("%d",&size);
    
    do
    {
        printf("------STACK------");
        printf("\n1.Push\n2.Peek\n3.Pop\n4.Is Empty\n5.Is Full\nEnter Choice : ");
        scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                push(arr,&size,&top);
                break;

                case 2:
                pnum=peek(arr,&top);
                printf("%d",pnum);
                break;

                case 3:
                ponum=pop(arr,&top);
                printf("Pop element is : %d",ponum);
                break;


                default:
                printf("Enter a valid choice :)");

            }
    printf("\nto contine press y\n");
    choice=getch();
    } while (choice=='y');

}

void push(int arr[],int* size,int* top) //done
{
    int num;
    if(*top==*size-1)
    {
    printf("\nOver Flow");
    }
    else
    {
    printf("\nEnter element to push:");
    scanf("%d",&num);
    *top=*top+1;
    arr[*top]=num;
    printf("\nPush sucessfull");
    }

}

int peek(int arr[],int* top) //done
{
    if(*top==-1)
    {
    printf("\nStack Underflow");
    return 0;
    }
    else
    {
    printf("\nPEEK : ");
    return(arr[*top]);
       
    }
}


int pop(int arr[],int* top) //done
{
    int ele;
    if(*top==-1)
    {
    printf("\nStack Underflow");
    return 0;
    }
    else
    {
    ele=arr[*top];
    (*top)--;
    return ele;
    }

}