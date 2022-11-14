#include<iostream>
using namespace std;

bool isRecMember(const int a[], int n, int key)
{
    // base case 
    // value not present in the array
    if(n<=0)
        return false;
    
    // if the last element is equal to key, return true
    if(a[n-1] == key)
        return true;
    
    // recursively call for rest of the array
    return isRecMember(a, n-1, key);
}

int main()
{
    // initialize array
    int values[5] = {5, 7, 3, 6, 2};
    
    // initialize values to search for
    int v1 = 2, v2 = 1, v3 = 5;
    
    // check for v1
    if(isRecMember(values, 5, v1))
        cout<<"The value "<<v1<<" is present in the array\n";
    else
        cout<<"The value "<<v1<<" is not present in the array\n";
        
    // check for v2
    if(isRecMember(values, 5, v2))
        cout<<"The value "<<v2<<" is present in the array\n";
    else
        cout<<"The value "<<v2<<" is not present in the array\n";
       
    // check for v3 
    if(isRecMember(values, 5, v3))
        cout<<"The value "<<v3<<" is present in the array\n";
    else
        cout<<"The value "<<v3<<" is not present in the array\n";
    
    return 0;
}