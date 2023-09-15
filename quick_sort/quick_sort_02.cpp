#include <vector>
namespace quick_sort_02{
    void swap(int& i, int& j) {
        int temp = i;
        i = j;
        j = temp;
    }
    /**
     * Partioning/Ordering the array based on current array
     * &arr : reference to the actual array
     * left : left pivot
     * right : right pivot 
     * pivot : value to compare
     * i : the number that is smaller than <pivot> and farest to the left
     * j : the searching for a value smaller than <pivot> to swap
    */
    int partition( std::vector<int> &arr , int left , int right) {
        int i , j , pivot; 
        i = left - 1;
        pivot = arr[right];
        for ( j = left ; j <= right - 1 ; j ++){
            if ( arr[j] <  pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[right]);
        return i + 1; // position of cur pivot
    };

    void quick_sort(std::vector<int> &arr , int left , int right){
        if (left < right){
            int pivot = partition( arr , left , right);
            quick_sort( arr , left , pivot - 1);
            quick_sort( arr , pivot + 1  , right);
        }
    };
}
