#include <stdio.h>
#include <string.h>

struct DiaChi {
    char duong[100];
    char thanhPho[50];
    char quocGia[50];
};

struct Nguoi {
    char ten[50];
    int tuoi;
    struct DiaChi diaChi;
};

int main() {
    struct Nguoi nguoi1;

    printf("Nhap ten: ");
    fgets(nguoi1.ten, sizeof(nguoi1.ten), stdin);
    nguoi1.ten[strcspn(nguoi1.ten, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &nguoi1.tuoi);
    getchar();

    printf("Nhap dia chi chi tiet:\n");

    printf("1. Ten duong: ");
    fgets(nguoi1.diaChi.duong, sizeof(nguoi1.diaChi.duong), stdin);
    nguoi1.diaChi.duong[strcspn(nguoi1.diaChi.duong, "\n")] = '\0';
    getchar();

    printf("2. Thanh pho: ");
    fgets(nguoi1.diaChi.thanhPho, sizeof(nguoi1.diaChi.thanhPho), stdin);
    nguoi1.diaChi.thanhPho[strcspn(nguoi1.diaChi.thanhPho, "\n")] = '\0';
	getchar();
	
    printf("3. Quoc gia: ");
    fgets(nguoi1.diaChi.quocGia, sizeof(nguoi1.diaChi.quocGia), stdin);
    nguoi1.diaChi.quocGia[strcspn(nguoi1.diaChi.quocGia, "\n")] = '\0';
    getchar();
	
    printf("\n--- Thong tin ca nhan ---\n");
    printf("Ten: %s\n", nguoi1.ten);
    printf("Tuoi: %d\n", nguoi1.tuoi);
    printf("Dia chi: %s, %s, %s\n", nguoi1.diaChi.duong, nguoi1.diaChi.thanhPho, nguoi1.diaChi.quocGia);

    return 0;
}
