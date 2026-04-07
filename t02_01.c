// 12S25056 - Arauna B.H. Manurung

#include <stdio.h>

typedef struct {
    int jumlah;
    double harga;
    double total;
    double diskon;
    double potongan;
    double bayar;
} Transaksi;

int main() {
    Transaksi t;

    scanf("%d", &t.jumlah);
    scanf("%lf", &t.harga);

    t.total = t.jumlah * t.harga;
    t.diskon = 0;

    if (t.total > 500000) {
        t.diskon = 0.15;
    } else if (t.total >= 100000) {
        t.diskon = 0.10;
    } else if (t.total > 50000) {
        t.diskon = 0.05;
    }

    t.potongan = t.total * t.diskon;
    t.bayar = t.total - t.potongan;

    if (t.diskon == 0) {
        printf("---\n");
    } else {
        printf("%.2lf\n", t.potongan);
    }

    printf("%.2lf\n", t.bayar);

    return 0;
}
