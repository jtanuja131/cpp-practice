#include <iostream>
using namespace std;
int main()
{
int a=10;
int b=40;
cout<<"before the swaping="<<"a="<<a<<"b="<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"after the swaping="<<"a="<<a<<"b="<<b<<endl;
    return 0;
}