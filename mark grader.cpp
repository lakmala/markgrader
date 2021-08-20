#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0;
    cout<<"Enter Marks of the Subject : ";
    for(i=0; i<1; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    cout<<"\nGrade = ";
    if(sum>=75 && sum<=100)
        cout<<"A";
    else if(sum>=65 && sum<75)
        cout<<"B";
    else if(sum>=50 && sum<65)
        cout<<"C";
    else if(sum>=35 && sum<50)
        cout<<"S";
    else if(sum>=0 && sum<35)
        cout<<"F";
    else
        cout<<"There cannot be such a mark!!!";
    cout<<endl;
    
    return 0;
}
