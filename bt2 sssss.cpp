#include <stdio.h>

int main() {
    const int max_Size = 100;
    int arr[max_Size], choice;
    int size = 0;

    do {
        printf("\nMenu\n");
        printf("1. Nhap so phan tu n va gia tri\n");
        printf("2. In ra cac gia tri\n");
        printf("3. In gia tri chan va tinh tong\n");
        printf("4. In gia tri max va min\n");
        printf("5. In ra cac so nguyen to va tinh tong\n");
        printf("6. Nhap 1 so va thong ke mang co bao nhieu so\n");
        printf("7. Them 1 so vao vi tri\n");
        printf("8. Thoat\n");
        printf("\nLua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu n: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Nhap gia tri cho phan tu %d: ", i);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if (size == 0) {
                    printf("Mang chua duoc khoi tao!\n");
                    break;
                }
                for (int i = 0; i < size; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Mang chua duoc khoi tao!\n");
                    break;
                }
                int sum = 0;
                printf("Cac so chan: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac so chan: %d\n", sum);
                break;

            case 4 :
                if (size == 0) {
                    printf("Mang chua duoc khoi tao!\n");
                    break;
                }
                int max = arr[0];
                int min = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Gia tri nho nhat: %d\n", min);
                printf("Gia tri lon nhat: %d\n", max);
                break;
            case 7 : if (size == 0) {
                    printf("Mang chua duoc khoi tao!\n");
                    break;
                }
                int value, position;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them: ");
                scanf("%d", &position);
                if (position < 0 || position > size) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                for (int i = size; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = value;
                size++;
                break;


            case 8:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}