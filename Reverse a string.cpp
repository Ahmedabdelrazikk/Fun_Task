#include <iostream>
#include<cmath>
using namespace std;

string rev(string str)
{
    string help = str;

    for(int i = 0; i<str.size(); i++)
    {
        help[i] = str[str.size()-1-i];
    }

    return help;
}

int main() {

string str;
cin >> str;

cout<<rev(str);

	return 0;
}
