#include <iostream>

using namespace std;

bool is_prime(int x)
{
    for(int i = 2; i<x; i++)
    {
        if(x==2)
            return true;

        if(x%i==0)
            return false;

    }
    return true;
}

int nth_prime(int n)
{
    int cnt = 0, i = 2;

    while (cnt<n)
    {
        if(is_prime(i))
           cnt++;
        i++;
    }

    return --i;

}
int main() {

int n;
cin>>n;

cout<<nth_prime(n);


	return 0;
}
