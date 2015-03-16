#include<iostream>
using namespace std;

int main()
{

int a,i,c;


cout<<"Please enter the first number: ";
cin>>a;

cout<<a<<"  ";

for(i=1;a!=1;i++)
{
c=a%2;

if (c==0){
a=a/2;
cout<<a<<"  ";
}
else if (c==1) {
a=3*a+1;
cout<<a<<"  ";
}

}

cout<<"  "<<endl;

return 0;
}
