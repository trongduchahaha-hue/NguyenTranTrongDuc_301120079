#include <stdio.h>

struct SanPham {
    char ten[50];   
    float gia;      
    int soLuong;    
};

int main() {
    struct SanPham products[5];
    int i;
    float tongGiaTri = 0;

    for (i = 0; i < 5; i++) {
        getchar(); 

        printf("Nhap ten san pham thu %d: ", i + 1);
        fgets(products[i].ten, sizeof(products[i].ten), stdin);

        printf("Nhap gia san pham: ");
        scanf("%f", &products[i].gia);

        printf("Nhap so luong san pham: ");
        scanf("%d", &products[i].soLuong);

        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        tongGiaTri += products[i].gia * products[i].soLuong;
    }

    printf("Tong gia tri tat ca san pham: %.2f\n", tongGiaTri);

    return 0;
}

