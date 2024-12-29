#include <iostream>

using namespace std;

void change(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << char(int(c) + 1);
    }
    else
    {
        cout << c;
    }
}
int main()

{
    string s="Hello world";

    int n=s.length();

    for(int i=0;i<n;i++){
        
    }
}