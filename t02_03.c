// 12S25056 - Arauna B.H. Manurung

#include <stdio.h>

typedef struct {
    char op;
    int hasil;
    int input;
    int count;
} Operasi;

int main() {
    Operasi o;

    scanf("%c", &o.op);

    if (o.op == '+') o.hasil = 0;
    else if (o.op == '-') o.hasil = 0;
    else if (o.op == '*') o.hasil = 1;

    o.count = 0;

    printf("%c\n", o.op);

    while (o.count < 5) {
        scanf("%d", &o.input);

        printf("%d\n", o.input);

        if (o.input == -1) {
            printf("0\n");
            break;
        }

        if (o.op == '+') {
            o.hasil = o.hasil + o.input;
        } else if (o.op == '-') {
            o.hasil = o.hasil - o.input;
        } else if (o.op == '*') {
            o.hasil = o.hasil * o.input;
        }

        printf("%d\n", o.hasil);

        o.count++;

        if (o.count == 5) break;
    }

    return 0;
}