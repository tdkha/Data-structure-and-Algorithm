#include <iostream>

using namespace std;


int binary_search(int (&arr)[] , int N , int target){
    int L , R , mid;
    L = 0;
    R = N - 1;
    while (L <= R) {
      mid = L + (R-L)/2;
      if ( arr[mid] == target ){
        return arr[mid];
      }
      if( arr[mid] > target){
        R = mid - 1;
      }else{
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