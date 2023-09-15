#include <iostream>

using namespace std;

int binary_search(int (&arr)[] , int N , int target){
    cout << "---------------------" << endl;
    int L , R , mid;
    L = 0;
    R = N - 1;
    while (L <= R) {
      mid = L + (R-L)/2;
      if ( arr[mid] == target ){
        cout << "Found value: "<< arr[mid] << " at index "<< mid <<endl; 
        return arr[mid];
      }

      if( arr[mid] > target){
        cout << "Left"<<endl; 
        R = mid - 1;
      }else{
        cout << "Right"<<endl;    
        L = mid + 1;
      }
    }
    return -1;
}

int main()
{
  //-----------------------------------------------------
  // Initialization
  //-----------------------------------------------------
  int arr[] = {7, 10, 23 , 35, 41 , 42 , 57, 89 , 94, 97};
  unsigned int length = sizeof(arr) / sizeof(arr[0]);
  //-----------------------------------------------------
  // Printing values of an array
  //-----------------------------------------------------
  cout << "--------Array--------" << endl;
  for (auto i =0; i < length ;i++){
    cout << arr[i] << " "; 
  }
  cout << endl <<"--------Index--------" << endl;
  for (auto i =0; i < length ;i++){
    cout << i << " "; 
  }
  cout <<endl;
  cout << "---------------------" << endl;
  cout <<"Middle point's index calculation: L + (R-L)/2"<<endl;
  //-----------------------------------------------------
  // Binary seacrh
  //-----------------------------------------------------
  int target = 89;
  int searched = binary_search(arr , length , target);
  cout << "---------------------" << endl;
  cout << "Target number to be found: " << target << endl;
  cout << "Length of sorted array: " << length << endl;
  cout << "--------------------" << endl;
  cout << "Result: " << searched << endl;
  cout << "---------------------" << endl;
}