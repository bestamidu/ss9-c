#include<stdio.h>

int main() {
    int arr[100], n;
    int currentLength = 0, addindex, value;

    printf("nhap n ");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("nhap n khong hop le ");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("nhap gia tri cho %d ", i);
        scanf("%d", &arr[i]);
    }

    currentLength = n;

    printf("nhap vi tri ban muon them ");
    scanf("%d", &addindex);

    if (addindex < 0 || addindex > currentLength) {
        printf("vi tri khong hop le!\n");
        return 1;
    }

    printf("nhap gia tri ban muon them ");
    scanf("%d", &value);

    for (int i = currentLength; i > addindex; i--) {
        arr[i] = arr[i - 1];
    }
    arr[addindex] = value;
    currentLength++;

    printf("Mang sau khi them la: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

    
