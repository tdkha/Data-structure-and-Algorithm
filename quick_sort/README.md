# Quick Sort Algorithm
-   Follow the divide and conquer strategy
-   Usually express as recursive
-   Partitioning is the core of the algorithm ( focus ) 
-   The algorithm divides the array into 2 sub-arrays at each level of recusion where all smaller values will be to the left of the <pivot> and larger values will be placed to the right (unordered)
-   The algorithm can be optimized by wisely choosing the pivot. For example if the pivot is either the largest or smallest value in the array, the values inside 2 sub-arrays will be heavily unbalanced

## Time Complexity : nlog(n)
n           :       finding the correct position for the <pivot>
log(n)      :       partitioning or diving the array into sub_arrays

## Implementation

The implementations are different in <partition> function only

### Implemenation 1

#### Explanation of partitioning:

Pick the pivot as the first element on the left

Vaiables :
-   i           :       starting from the left, finding the first match value that is larger than the pivot
-   j           :       starting from the right, finding the first match value that is larger than the pivot
-   pivot       :       the stable value used for comparison

In each recursive call, do the partition by moving <i> and <j> pivots in order to swap all larger values to the right and all smaller values to the left before swapping the element at <left> (<pivot>) position by the value at <i> position

Reminder: The last <swap> function before ending the function <partion> has the parameters as <arr> , <left> , <i> => swap(arr , left , <i>). The value must be <i> because it holds larger value instead of <right> when the base case is met ( left ). Remember that variable <i> is responsible for seaching for larger value as mentioned above.

#### Pseudocode:

Not provided

### Implemenation 2

#### Explanation of partitioning:

Pick the pivot as the first element on the right

Vaiables :
-   i           :       starting from (left - 1) , holding the value that is farest and smaller than the pivot, never surpassing <j>
-   j           :       starting from the left, finding the first match value that is smaller than the pivot 
-   pivot       :       the stable value used for comparison


When j is found ( arr[j] < pivot) 
    =>  elements j has loop through values that are larger than <pivot> (otherwise, j has been found)
    =>  swap the arr[j] with arr[i+1] 
    =>  **i+1** becasuse i is the farest and smaller value than <pivot> => the value next to it must be larger than <pivot> which was looped theough by <j>
    =>  After the loop termination, swap the <pivot> with the value at positions where <left> and <right> collide 