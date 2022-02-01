#include <stdio.h>                      //stdio = standard input/output
#define M_PI 3.1415                     //ประกาศค่าคงที่Pi โดยใช้key word #define

int a = 10;                             //ตัวแปรa มีtype int มีค่า=10   //intเก็บได้4byte > bitแรกเป็นsign bit
double b = 12.5;
unsigned int c = 1000;                  //unsigned int = bitแรกคิดเป็นค่า = เก็บได้แค่+และเก็บค่าได้มากขึ้น
char d = 'A';                           //'A'=สิ่งที่เราเห็น คอมจะเก็บเป็นเลขจำนวนเต็มคือ 65   // '' ใช้กับchar , ""ใช้กับstring
char name[] = "kong";                   //ตัวแปรnameเป็นตัวแปรarray typeคือchar == เก็บstring

int main()                              //function main   //C มันstrong type = ทุกอย่างต้องกำกับtype
{                                       //scopeดูจาก{}
    a = a + d;                          //data typeชนิดเดียวกันเอามาทำกันได้ B.คอมมันมองเหมือนกัน(ไม่จำนวนเต็มก็ทศนิยม)
    int ch = 'A' + 10;
    //printf("Hello World\n");            //จบทุกคำสั่งด้วย;เสมอ    //อย่าลืมsaveก่อนcompile   //ถ้าไม่มีmain functionจะerror
    //printf("a = %05d, b = %lf\n",a,b);  //printfไม่มีขึ้นบรรทัดใหม่ให้ ดังนั้นใช้\n
    //printf("c = %-10u, d = %c",c,d);    //หลัง , คือ argument ตามลำดับ  //%-10u = มีพื้นที่ให้10ช่องรวมค่า แล้วจัดให้ชิดซ้าย(-)
    //printf("ch = %d",ch);

    //int e = 1/2;                           //int/int = int == หารไม่เอาเศษ ; ได้0 >>> แล้วเอาไปเก็บในint ได้ 0
    //float r = 1/2.0;                       //int/float = float ; 0.5 >>> เอา0.5 ไปเก็บในfloat ได้ 0.5   ถ้าเก็บในint ;เก็บ0
    //printf("e = %d, r = %f",e,r);          //ทำขวาก่อน >>> แล้วค่อยถูกกำหนดtype(ดูdata typeฝั่งขวาก่อน) >>> แล้วค่อยเอาไปกำหนดค่าให้ฝั่งซ้าย(ทีนี้ก็ดูdata typeฝั่งซ้าย)

    //int t = 9%20;                       //%ใช้ได้แค่intกับint
    //printf("t = %d",t);

    printf("name = %s",name);             //%sใช้กับchar array
}

// gcc file name = compileแล้วได้ไฟล์ตามชื่อไฟล์นั้น
// gcc file name -o new name file = compileแล้วได้ไฟล์ตามชื่อnew name file
//แต่ละtypeจะเก็บข้อมูลได้ไม่เท่ากัน 
//ถ้ากำหนดformatผิด(%) >>> compileผ่าน(บางอันจะขึ้นwarning แต่ไม่เกิดerror) Butแสดงค่าผิด
// * ใช้กับint*charไม่ได้ int*stringไม่ได้
