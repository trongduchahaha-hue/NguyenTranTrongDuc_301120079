#include <stdio.h>

struct Xe {
    char mau[50];   
    int nam;         
    float gia;      
};

int main() {
    struct Xe xeCuaToi = {"Toyota Camry", 2020, 850000000};

    printf("Thong tin xe:\n");
    printf("Mau xe: %s\n", xeCuaToi.mau);
    printf("Nam san xuat: %d\n", xeCuaToi.nam);
    printf("Gia xe: %.0f VND\n", xeCuaToi.gia);

    return 0;
}

