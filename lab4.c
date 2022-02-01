// สัปดาห์ที่ 4
// ให้นิสิตคัดเลือกหนึ่งคนในกลุ่ม พรีเซนต์ตามข้อที่กลุ่มได้รับใน lab 4

#include <stdio.h>
#include <stdlib.h>

int is_prime(int x)
{
    int r=1;
    int count=0; 
    for(r;r<=x;r++)
    {
        if(x%r==0)
            count++;
        if(count>2){
            count++;
            break;}
    }
    if (count==2)
        return 1;
    else 
        return 0;
}


int main() {
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i=1;i<=n;i++) {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}