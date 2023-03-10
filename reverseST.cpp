#include<iostream>
using namespace std;
void ReverseString(char name[] ,  int n){
    int st = 0;
    int end = n-1;
    int temp =0;
    for(int i =st;i<=end/2;i++){
        temp = name[i];
        name[i]= name[end];
        name[end]=temp;
        end--;
    }
        cout<<" reverse of given string is "<<name;
    
}
int main()
{
    int n;
    cout<<" enter the size of string"<<endl;
    cin>>n;
    char name[20];
    cout<<"enter name in the string"<<endl;
    cin>>name;
    ReverseString(name,n);
    return 0;
}