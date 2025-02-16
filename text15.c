#include <stdio.h>

void bubble_sort(int array[], int n) {
    int i, j;
    _Bool flag = 0;

    for (i = 0; i < n - 1; ++i) {
        flag = 0;
        for (j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                // 浜ゆ崲鍏冪礌
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if (!flag)
            break; // 濡傛灉娌℃湁鍙戠敓浜ゆ崲锛屾彁鍓嶇粓锟�?
    }
}

int main() {
    int arr[] = {6, 3, 4, 1, 2, 5};
    int n = sizeof(arr) / sizeof(int);

    bubble_sort(arr, n);

    printf("重新排序后: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
