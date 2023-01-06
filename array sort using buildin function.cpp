#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    cout<< "enter a string\n";
    getline(cin,s);
    cout<< "enter number of elements of an array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elemnets of an  array\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    int minn = arr[min_element(arr,arr+n)-arr];
    cout<<minn<<endl;
    int maxx= arr[max_element(arr,arr+n)-arr];
    cout<<maxx<<endl;
    sort(arr,arr+n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
        cout<<endl;
    sort(arr, arr + n, greater<int>());
     for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
        cout<<endl;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
