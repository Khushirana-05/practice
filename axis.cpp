#include<iostream>
using namespace std;
int main()
{
    int x,y,n;
    cout<<"enter x-axis: ";
    cin>>x;
    cout<<"enter y-axis: ";
    cin>>y;
    if((x==0)&&(y!=0))
    {
        cout<<"point lies on y-axis ";
    }
    else if((x!=0)&&(y==0))
    {
        cout<<"point lies on x-axis ";
    }
    else if((x==0)&&(y==0))
    {
        cout<<"point lies on origin ";
    }
    else
    {
        cout<<"point lies on x and y axis ";
    }
    return 0;
}