#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int arr3[],int size1,int size2)
{
    int index1=0;
    int index2=0;
    int index3=0;
    while(index1<size1 && index2<size2)
    {
        if(arr1[index1]<arr2[index2])
        {
            arr3[index3]=arr1[index1];
            index3++;
            index1++;
        }
        else{
            arr3[index3]=arr2[index2];
            index3++;
            index2++;
        }
    }
    while(index1<size1)
    {
        arr3[index3]=arr1[index1];
        index3++;
        index1++;
    }
    while(index2<size2)
    {
        arr3[index3]=arr2[index2];
        index3++;
        index2++;
    }
}
int main()
{
    int size1,size2;
    int size3;
    cout<<"Enter the size of the first array "<<endl;
    cin>>size1;
    cout<<"Enter the size of the second array"<<endl;
    cin>>size2;
    size3=size1+size2;
    int arr1[size1],arr2[size2],arr3[size3];
    cout<<"Let's fill the first array"<<endl;
    for(int x=0;x<size1;x++)
    {
        cin>>arr1[x];
    }
    cout<<"Let's fill the second array"<<endl;
    for(int y=0;y<size2;y++)
    {
        cin>>arr2[y];
    }
    merge(arr1,arr2,arr3,size1,size2);

    cout<<"The sorted array is : "<<endl;
    for(int z=0;z<size3;z++)
    {
        cout<<arr3[z]<<endl;
    }

}