// สัปดาห์ที่ 6 มีการเปิดห้องให้สอบถามข้อสงสัย
// ให้นิสิตคัดเลือกหนึ่งคนในกลุ่ม พรีเซนต์ตามข้อที่กลุ่มได้รับใน lab 6

#include <stdio.h>
#define ARRAY_SIZE 98

int main() {

    int i, j;
    int A[ARRAY_SIZE] = {0};

    for (i = 2; i < ARRAY_SIZE; i++)
        A[i] = 1;
    for (i = 2; i < ARRAY_SIZE; i++) {
        for (j = 2; j < ARRAY_SIZE; j++)
        {
            if(((j%i!=0 && i!=j) || (i==j)) && A[j]!=0)
                A[j]=j;  
            else if(j%i==0 && i!=j)
                A[j]=0;
        }
        if (pow(i,2) >= ARRAY_SIZE)
            break;
    }
    for (i = 2; i < ARRAY_SIZE; i++
        if(A[i]!=1 && A[i]!=0)
            printf("%d ",A[i]);
    printf("\n");
    return 0;
}
    
     

