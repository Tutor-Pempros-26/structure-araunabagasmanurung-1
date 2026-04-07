// 12S25056 - Arauna B.H. Manurung


#include <stdio.h>

typedef struct {
    int level;
    char menu[5][50];
    int count;
    char kesimpulan[50];
} Makanan;

int main() {
    Makanan m;
    scanf("%d", &m.level);

    if (m.level == 1) {
        m.count = 1;
        sprintf(m.menu[0], "staple food");
        sprintf(m.kesimpulan, "you need side dishes");
    } 
    else if (m.level == 2) {
        m.count = 2;
        sprintf(m.menu[0], "side dishes");
        sprintf(m.menu[1], "staple food");
        sprintf(m.kesimpulan, "you need vegetables");
    } 
    else if (m.level == 3) {
        m.count = 3;
        sprintf(m.menu[0], "vegetables");
        sprintf(m.menu[1], "side dishes");
        sprintf(m.menu[2], "staple food");
        sprintf(m.kesimpulan, "good");
    } 
    else if (m.level == 4) {
        m.count = 4;
        sprintf(m.menu[0], "fruits");
        sprintf(m.menu[1], "vegetables");
        sprintf(m.menu[2], "side dishes");
        sprintf(m.menu[3], "staple food");
        sprintf(m.kesimpulan, "very good");
    } 
    else if (m.level == 5) {
        m.count = 5;
        sprintf(m.menu[0], "milk");
        sprintf(m.menu[1], "fruits");
        sprintf(m.menu[2], "vegetables");
        sprintf(m.menu[3], "side dishes");
        sprintf(m.menu[4], "staple food");
        sprintf(m.kesimpulan, "perfect");
    }

    for (int i = 0; i < m.count; i++) {
        printf("%s\n", m.menu[i]);
    }

    printf("%s\n", m.kesimpulan);

    return 0;
}