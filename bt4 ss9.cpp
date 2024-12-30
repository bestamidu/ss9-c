      
#include <stdio.h>
const int MAX_SIZE = 100;

int size = 0; // số lượng phần tử thực tế mà nó đang lưu trữ
int main(void) {
    int array[MAX_SIZE];
    int sum;
    // xây menu
    while(1){
        printf("============MENU================\n");
        printf("1. Nhap phan tu cho mang.\n");
        printf("2. HIen thi mang.\n");
        printf("3. Dem so luong cac so hoan hao.\n");
        printf("4. Tim gia tri lon thu 2 trong mang.\n");
        printf("5. Them moi gia tri vao mang.\n");
        printf("4. Cap nhat gia tri phan tu.\n");
        printf("6. Xoa phan tu.\n");
        printf("7. Sap xep mang theo thu tu tang dan(InsertionSort).\n");
        printf("8. Tim kiem phan tu(Binary search).\n");
        printf("9. Sap xep mang so chan dung truoc so le dung sau.\n");
        printf("10. Dao nguoc thu tu cua cac phan tu.\n");
        printf("================================\n");
        int choice;
        printf("Moi ban nhap chuc nang : ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
             
                int n;
                printf("Moi ban nhap so luong phan tu cho mang: ");
                scanf("%d",&n);
                if(n<=0 || n> MAX_SIZE){
                    printf("n ko hop le, vui long nhap tu 1 - %d \n", MAX_SIZE);
                    break;
                }
                for (int i = 0; i < n; ++i) {
                    printf("Nhap array[%d] = ",i);
                    scanf("%d",array+i);
                }
                size = n;
                break;
            case 2:
   
                if(size == 0){
                    printf("Mang chua co phan tu nao\n");
                } else{
                    printf("Danh sach cac phan tu trong mang la : \n");
                    for (int i = 0; i < size; ++i) {
                        printf("arr[%d] = %d ",i, array[i]);
                        if (i < n - 1)  
                        printf(", ");
                    }
                }
                printf("\n");
                break;
                
            case 3: 
					for (int i = 1; i <= n / 2; ++i) {
		        if (n % i == 0) {
		            sum += i;
		        }
		    }
		
		    if (sum == n) {
		        printf("%d la so hoan hao.\n", n);
		    } else {
		        printf("%d khong phai la so hoan hao.\n", n);
		    }    
            case 5:

               int addIndex, newValue;
                printf("Moi ban nhap gia tri can them");
                scanf("%d",&newValue);
                printf("Moi ban nhap vi tri can them");
                scanf("%d",&addIndex);
                if(addIndex <0){
                    addIndex = 0;
                }else if(addIndex > size){
                    addIndex = size;
                }
         
                for(int i = size; i> addIndex; i--){
                    array[i] = array[i-1];
                }
                array[addIndex] = newValue ;
                size++;
                printf("Them thanh cong\n");
                break;
          case 4:
              int editIndex, updateValue;
                sua gia tri tai vi trí index
                printf("Moi ban nhap vi tri can sua");
                scanf("%d",&editIndex);
                if(editIndex <0 ||editIndex >= size ){
                    printf("Vi tri ko hop le \n");
                    break;
                }
                printf("Moi ban nhap gia tri moi (gia tri cu la %d)", array[editIndex]);
                scanf("%d",&updateValue);
                array[editIndex] = updateValue;
                printf("Cap nhat thanh cong\n");
               break;
            case 6:
              
                int editIndex, updateValue;
                int deleteIndex;
                 sua gia tri tai vi trí index
                printf("Moi ban nhap vi tri can xoa");
                scanf("%d",&deleteIndex);
                if(editIndex <0 ||editIndex >= size ){
                    printf("Vi tri ko hop le \n");
                    break;
                }
                for (int i = deleteIndex; i < size -1 ; ++i) {
                    array[i] = array[i+1];
                }
                size--;
                printf("Xoa thanh cong\n1"
                       "");
                break;
                
            case 7:
						for ( i = 0; i < n - 1; i++) {  
			        minIndex = arr;
			        for (j = mindIndex + 1; j < n; j++) {  
			            if (arr[j] < arr[minIndex]) {  
			                minIndex = j;
			            }  
			        }   
			        if (minIndex != i) {  
			            temp = arr[i];  
			            arr[i] = arr[minIndex];  
			            arr[minIndex] = temp;  
			        }  
			    }  
			 
			    printf("tang dan:\n");  
			    for (i = 0; i < n; i++) {  
			        printf("%d ", arr[i]);  
			    }  
			    printf("\n");     
            case 0:
                break;
            default:
                printf("Lua chon ko hop le, vui long nhap lai\n");
                break;
        }
        if(choice == 11){
            printf("Thoat chuong trinh");
            break;
        }
    }
    return 0;
}

    