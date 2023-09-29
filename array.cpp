PRINTING A REVERSE ARRAY WITH WHILE LOOP 
#include <iostream>
using namespace std ; 

void reverse(int arr[], int size ){
  int left=0;
  int right = size-1;

  while (left<=right ){
    swap(arr[left], arr[right]);
    left ++;
    right --;
  }
//priting the array 
  for (int i =0; i < size ;i++)
    {
      cout<< arr[i] << " " ;
    }  
}

int main() {
  int arr[]= {10,20,30,40,50,60};
  int size =6;
  reverse(arr, size );

}



PRINTING A REVERSE ARRAY WITH FOR LOOP 
#include <iostream>
using namespace std ; 

void reverse(int arr[], int size ){
  // int left=0;
  // int right = size-1;

for (int left = 0,right =size-1 ; left<=right ; left++,right--){
  swap(arr[left], arr[right]);  
}
//priting the array 
  for (int i =0; i < size ;i++)
    {
      cout<< arr[i] << " " ;
    } 
}

int main() {
  int arr[]= {10,20,30,40,50,60};
  int size =6;
  reverse(arr, size );
}



#include <iostream>
using namespace std ; 
//EXTREME PRINT IN AN ARRAY 
void extreme(int arr[] , int size ){
  int left =0;
  int right =size-1;
  while (left <=right ){
    if (left== right){
      cout<<arr[left]<<endl ;
    }
    else {
      cout<<arr[left]<<endl;
      cout<<arr[right]<<endl; 
    }
    left++;
    right--;
  }
}
int main() {
  int arr[7]= {10,20,30,40,50,60,70};
  int size = 7;
  extreme(arr,size ); 

}