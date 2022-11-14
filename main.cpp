#include<iostream>
using namespace std;

bool isRecMember(const int a[], int n, int key)
{
    if(n<=0)
        return false;
    
    if(a[n-1] == key)
        return true;
    
    return isRecMember(a, n-1, key);
}

int main()
{
    int values[5] = {5, 7, 3, 6, 2};
    
    int v1 = 2, v2 = 1, v3 = 5;
    
    if(isRecMember(values, 5, v1))
        cout<<"The value "<<v1<<" is present in the array\n";
    else
        cout<<"The value "<<v1<<" is not present in the array\n";
        
    if(isRecMember(values, 5, v2))
        cout<<"The value "<<v2<<" is present in the array\n";
    else
        cout<<"The value "<<v2<<" is not present in the array\n";
       
    if(isRecMember(values, 5, v3))
        cout<<"The value "<<v3<<" is present in the array\n";
    else
        cout<<"The value "<<v3<<" is not present in the array\n";
    
    return 0;
}