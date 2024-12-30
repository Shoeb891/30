#include <REGX51.H>

#define SEG1 {P3_3 = 0; P3_4 = 0; P3_5 = 1;}
#define SEG2 {P3_3 = 0; P3_4 = 1; P3_5 = 0;}
#define SEG3 {P3_3 = 1; P3_4 = 0; P3_5 = 0;}
#define NULL {P3_3 = 0; P3_4 = 0; P3_5 = 0;}

code unsigned char seg[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

int main(void) {
    unsigned char i, j, k, m;
    unsigned int l;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                for (l = 0; l < 1000; l++) {
                    NULL
                    P0 = seg[i];
                    SEG1
                    for (m = 0; m < 50; m++);

                    NULL
                    P0 = seg[j];
                    SEG2
                    for (m = 0; m < 50; m++);

                    NULL
                    P0 = seg[k];
                    SEG3
                    for (m = 0; m < 50; m++);
                }
            }
        }
    }

    return 0;
}
