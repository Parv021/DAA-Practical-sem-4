
#include <iostream>

using namespace std;

int main()
{
  int arr[10];
  int count = 0;
  cout<<"\n Enter 10 elements to sort"<<endl;
  for (int i = 0; i < 10; i++) {
    cin>>arr[i];
  }

  for(int i = 0; i < 10; i++)
  {
    int key = arr[i];
    int j = i-1;
    count++;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1] = arr[j];
      j=j-1;
      count++;
    }
    arr[j+1] = key;

  }
  cout<<"Sorted array:"<<endl;
  for (int i = 0; i < 10; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<" \n Total Number of Comparisons: "<<count;
  return 0;
}

