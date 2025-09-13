#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i, sorted = 1;
    for(i = 1; i < 5; i++) {
        if(arr[i] < arr[i - 1]) {
            sorted = 0;
            break;
        }
    }
    if(sorted) {
        printf("it is sorted");
    } else {
        printf("not sorted");
    }
    return 0;
}
