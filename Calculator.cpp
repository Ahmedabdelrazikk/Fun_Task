#include <iostream>

using namespace std;



int op()
{
    cout<<"THE MENUE \n";
    cout<< "1) To add 2 numbers\n";
    cout<< "2) To subtract 2 numbers\n";
    cout<< "3) To Multiply 2 numbers\n";
    cout<< "4) To divide 2 numbers\n";
    cout<< "5) End the program\n\n";
}
//----------------------------------------
int read(int &a, int &b)
{
    int num;
    cout<<"Enter number from 1 to 5 :";
    cin>>num;
    if(num!=5)
      {


    while(!(num>=1 && num<=5))
    {
        cout<<"Error, choose number from 1 to 5 : ";
        cin>>num;
    }

    cout<<"Enter two numbers : ";
    cin>>a>>b;
      }
    return num;
}
//----------------------------------------
void sum(int a, int b)
{
    cout<<"Sum = "<<a+b;
}
//----------------------------------------
void sub(int a, int b)
{
    cout<<"Subtraction = "<<a-b;
}
//----------------------------------------
void mul(int a, int b)
{
    cout<<"Multiply = "<<a*b;
}
//----------------------------------------
void div1(int a, int b)
{
    if(b==0)
        cout<<"Error, dividing by zero.";
    else
        cout<<"Division = "<<a/b;
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
int main() {

    op();

    int a, b, c;

    c = read(a, b);

    if(c==1)
        sum(a,b);
    else if(c==2)
        sub(a,b);
    else if(c==3)
        mul(a,b);
    else if(c==4)
        div1(a,b);


	return 0;
}
