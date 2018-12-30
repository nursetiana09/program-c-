#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout << "mencari bentuk zat beku atau tidak " <<endl ;
    int a;
    cout<<"masukan drajat benda = "<<endl;
    cin>>a;
if  (a<0)
    cout<<"suhu = "<<a<<" (makas zat beku) "<<endl;
    else if (a>100)
    cout<<"suhu = "<<a<<" (maka zat gas) "<<endl;
    else
    cout<<"suhu = "<<a<<" (maka zat cair) "<<endl;
    getch ();
}
