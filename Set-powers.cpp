#include <iostream>

using namespace std;


void sett (int arr [], int len, int num)
{
    int helper = 1;

    for(int i = 0; i<len; i++)
    {
        if(i==0)
            arr[0]=1;
        else
        {
            helper=helper*num;
            arr[i]= helper;
        }
    }


}

int main() {

    cout<<"Enter length and number : ";

    int len, num;
    cin>>len>>num;

   int arr[len]={};

   sett(arr, len, num);

   for(int i = 0; i<len; i++)
   {
       cout <<arr[i]<<" ";
   }
	return 0;
}
