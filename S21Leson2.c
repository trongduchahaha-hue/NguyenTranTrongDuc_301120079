#include <stdio.h>

struct HocSinh {
    char ten[50];    
    int tuoi;         
    float diemTB;     
};

int main() {
    struct HocSinh hs1;

    printf("Nhap ten hoc sinh: ");
    fgets(hs1.ten, sizeof(hs1.ten), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &hs1.tuoi);

    printf("Nhap diem trung binh: ");
    scanf("%f", &hs1.diemTB);

    printf("\n--- Thong tin hoc sinh ---\n");
    printf("Ten: %s", hs1.ten);
    printf("Tuoi: %d\n", hs1.tuoi);
    printf("Diem trung binh: %.2f\n", hs1.diemTB);

    return 0;
}

