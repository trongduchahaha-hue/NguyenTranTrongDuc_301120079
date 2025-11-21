#include <stdio.h>
#include <string.h>

struct HocSinh {
    char ten[50];
    int tuoi;
    float diemTB;
};

void timHocSinh(struct HocSinh students[], int n, char tenCanTim[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].ten, tenCanTim) == 0) {
            printf("\n-- Tim thay hoc sinh --\n");
            printf("Ten: %s", students[i].ten);
            printf("Tuoi: %d\n", students[i].tuoi);
            printf("Diem trung binh: %.2f\n", students[i].diemTB);
            return;
        }
    }
    printf("\nKhong tim thay hoc sinh co ten \"%s\"\n", tenCanTim);
}

int main() {
    struct HocSinh students[5];
    char tenTim[50];

    for (int i = 0; i < 5; i++) {
        getchar();

        printf("Nhap ten hoc sinh thu %d: ", i + 1);
        fgets(students[i].ten, sizeof(students[i].ten), stdin);

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].tuoi);

        printf("Nhap diem trung binh: ");
        scanf("%f", &students[i].diemTB);

        printf("\n");
    }

    getchar(); 
    printf("Nhap ten hoc sinh can tim: ");
    fgets(tenTim, sizeof(tenTim), stdin);

    timHocSinh(students, 5, tenTim);

    return 0;
}

