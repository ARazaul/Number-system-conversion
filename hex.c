#include <stdio.h>
int main() {
    int x=0x55,y=0xDC,z;
    z=x&y;
    printf("%x",z);
    return 0;
}
