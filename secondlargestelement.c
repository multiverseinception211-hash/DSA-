#include <stdio.h>

int main() {
    int arr[10] = {4, 5, 6, 7, 8, 9, 27, 9, 45, 12};
    int large = arr[0];
    int second_large = -1;
    int i;
    
    for(i = 1; i < 10; i++) {
        if(arr[i] > large) {
            second_large = large;
            large = arr[i];
        } else if(arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }

    printf("%d", second_large);
    return 0;
}
