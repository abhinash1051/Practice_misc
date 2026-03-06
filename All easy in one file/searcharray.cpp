#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)

{
    for(int i;i<size;i++)
    {
        if(arr[i] == key)
        
        {
            return 1;
        }

    }
    return 0;
}

int main()
    {
        int arr[10] = {1,2,4,5,8,9,0,-9,6,-1};
          
        int key;
        cout<<"enter a key"<<endl;
        cin>>key;

        bool found  = search(arr,10 ,key);

        if(found)
        {
            cout<<"element is present "<<endl;

        }
        else{
            cout<<"element is not presenst"<<endl;
        }
        return 0;

    }
