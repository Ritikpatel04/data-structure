

#include <iostream>

using namespace std;

int Linear_search(int arr[],int key,int n){
    
   for(int i=0;i<n;i++){
       // check if current index matchs with key  
       if(arr[i]==key)
       return i;
   }
   //out of the loop
   return -1;
}
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter element of array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"enter searching element"<<endl;
    cin>>key;
  int index=Linear_search(arr,key,n);
  
   if(index!=-1)
   cout<<key<<" find at index "<<index<<endl;
   else
   cout<<key<<" is not found ";
  
    return 0;
}
