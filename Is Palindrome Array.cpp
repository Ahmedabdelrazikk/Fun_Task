#include <iostream>

using namespace std;


void check (int arr [], int n)
{
    bool check = true;
    for(int i = 0; i<(n/2); i++)
    {
        if(!(arr[i]==arr[n-1-i]))
        {
            check = false;
            break;
        }
    }

    if(check)
            cout<<"The array is Palindrome.";
        else
            cout<<"The array is not Palindrome.";
}

int main() {

    cout<<"Enter number of array elements : ";

    int n;
    cin>>n;

   int arr[n]={};

   for(int i = 0; i<n; i++)
   {
       cin >>arr[i];
   }

   check(arr, n);

	return 0;
}
