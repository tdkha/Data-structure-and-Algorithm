#include <iostream>
#include <vector>

namespace quick_sort_01 {
    void swap(std::vector<int> &arr, int i, int j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    int partition(std::vector<int> &arr, int left, int right) {
        int i = left, j = right;
        while (i < j) {
            while (i < j && arr[j] >= arr[left])
                j--; 
            while (i < j && arr[i] <= arr[left])
                i++;          
            swap(arr, i, j); 
        }
        swap(arr, i, left); 
        return i;            
    }

    void quick_sort(std::vector<int> &arr, int left, int right) {
        if (left >= right)
            return;
        int pivot = partition(arr, left, right);
        quick_sort(arr, left, pivot - 1);
        quick_sort(arr, pivot + 1, right);
    }
}
