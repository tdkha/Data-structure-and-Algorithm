#include <iostream>
#include <vector>

#include "quick_sort_01.cpp"
#include "quick_sort_02.cpp"

void print(std::vector<int> &arr){
    for (int i = 0 ; i < arr.size() ; i ++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main (){
    std::vector<int> arr = {2 , 4 , 1 , 0 , 3 , 5};
    int left = 0;
    int right = arr.size() - 1;
    quick_sort_01::quick_sort(arr , left , right);
    //quick_sort_02::quick_sort(arr , left , right);
    print(arr);
    return 0;
}