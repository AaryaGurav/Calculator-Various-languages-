#include<iostream>
using namespace std;

int add(int a,int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
    int choice=0;
    int a=0, b=0;
    cout<<"Pick an option:\n 1. ADD \n 2. SUBTRACT\n 3. MULTIPLY\n 4. DIVIDE\n 5. QUIT\n Your Choice:";
    cin>>choice;
    cout<<"\n Enter the two Nos.";
    cin>>a>>b;
    
    switch(choice)
    {
        case 1: cout<<"The Addition is:"<<add(a,b);
        break;
        case 2: cout<<"The Subtraction is:"<<subtract(a,b);
        break;
        case 3: cout<<"The Multiplication is:"<<multiply(a,b);
        break;
        case 4: cout<<"The Division is:"<<divide(a,b);
        break;
        case 5: exit(0);
        break;
    }
}

int add(int a, int b)
{
    return(a+b);
}
int subtract(int a, int b)
{
    return(a-b);
}
int multiply(int a, int b)
{
    return(a*b);
}
int divide(int a, int b)
{
    return(a/b);
}
