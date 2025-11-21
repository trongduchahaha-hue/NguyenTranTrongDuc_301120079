#include <stdio.h>

struct Sach {
    char ten[100];      
    char tacGia[50];    
    float gia;          
};

int main() {
    struct Sach books[3];
    int i;

    for (i = 0; i < 3; i++) {
        fflush(stdin); 

        printf("Nhap ten sach thu %d: ", i + 1);
        fgets(books[i].ten, sizeof(books[i].ten), stdin);

        printf("Nhap ten tac gia: ");
        fgets(books[i].tacGia, sizeof(books[i].tacGia), stdin);

        printf("Nhap gia sach: ");
        scanf("%f", &books[i].gia);

        getchar(); 
        printf("\n");
    }

    printf("=== Thong tin cac cuon sach ===\n");
    for (i = 0; i < 3; i++) {
        printf("Sach %d:\n", i + 1);
        printf("Ten: %s", books[i].ten);
        printf("Tac gia: %s", books[i].tacGia);
        printf("Gia: %.2f\n\n", books[i].gia);
    }

    return 0;
}

