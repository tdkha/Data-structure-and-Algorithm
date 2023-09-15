# Quick Sort Algorithm

Quick Sort is a highly efficient sorting algorithm that follows the divide and conquer strategy. It is usually expressed as a recursive process, with partitioning being the core operation.

## Key Characteristics

- Follows the divide and conquer strategy.
- Expressible as a recursive algorithm.
- Core operation is partitioning.

## Algorithm Overview

The Quick Sort algorithm works by dividing the array into two sub-arrays at each level of recursion. All values smaller than the pivot are placed to the left, and larger values to the right (unordered).

### Pivot Selection

One of the critical aspects of Quick Sort is the selection of the pivot. If the pivot is either the largest or smallest value in the array, it can lead to heavily unbalanced sub-arrays.

## Time Complexity

- Finding the correct position for the pivot: `O(n)`
- Partitioning or dividing the array into sub-arrays: `O(log(n))`
- Overall time complexity: `O(n*log(n))`

## Implementations

There are different ways to implement the partition function. Below are two common approaches:

### Implementation 1

#### Explanation of Partitioning

Pick the pivot as the first element on the left.

##### Variables

- `i`: Starting from the left, finding the first match value that is larger than the pivot.
- `j`: Starting from the right, finding the first match value that is larger than the pivot.
- `pivot`: The stable value used for comparison.

In each recursive call, do the partition by moving `i` and `j` pointers in order to swap all larger values to the right and all smaller values to the left before swapping the element at `left` (pivot) position by the value at `i` position.

#### Pseudocode

*Not provided.*

### Implementation 2

#### Explanation of Partitioning

Pick the pivot as the first element on the right.

##### Variables

- `i`: Starting from `(left - 1)`, holding the value that is farthest and smaller than the pivot, never surpassing `j`.
- `j`: Starting from the left, finding the first match value that is smaller than the pivot.
- `pivot`: The stable value used for comparison.

When `j` is found (arr[j] < pivot):
- Elements `j` have looped through values that are larger than the pivot (otherwise, `j` has been found).
- Swap `arr[j]` with `arr[i+1]`.
  - `i+1` because `i` is the farthest and smaller value than the pivot. The value next to it must be larger than the pivot, which was looped through by `j`.
- After the loop termination, swap the pivot with the value at the position where `left` and `right` collide.



