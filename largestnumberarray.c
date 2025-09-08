#include <stdio.h>

int main() {
    int arr[7] = {0, 1, 9, 10, 4, 5, 6};
    int large = arr[0];
    int i;
    for(i = 0; i < 7; i++) {
        if(arr[i] > large)
            large = arr[i];
    }
    printf("%d", large);
    return 0;
}
