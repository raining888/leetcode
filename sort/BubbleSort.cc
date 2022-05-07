#include <iostream>

// 冒泡排序
// 时间复杂度O(n^2)
// 空间复杂度O(1)
// 稳定性：可以达到稳定

#define N 1000

int arr[N];

// 交换arr的i和j位置上的值
void swap(int arr[], int i, int j)
{
  if (i == j)
  {
    return;
  }
  arr[i] = arr[i] ^ arr[j];
  arr[j] = arr[i] ^ arr[j];
  arr[i] = arr[i] ^ arr[j];
}

void bubbleSort(int arr[]) {
  if (arr == nullptr || N < 2)
  {
    return;
  }
  // 0 ~ N-1
  // 0 ~ N-2
  // 0 ~ N-3
  for (int e = N - 1; e > 0; e--)
  { // 0 ~ e
    for (int i = 0; i < e; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swap(arr, i, i + 1);
      }
    }
  }
}
