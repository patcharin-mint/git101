#include<stdio.h>

void printfString(char *s){     //การ+-pointerไปn คือ การ+-ไปnเท่าของขนาดของpointer
    for(char *p = s ; *p != '\0' ; p++){      //stringมันจบที่'\0'เสมอ
        printf("[%p] = %c\n",p,*p);
    }
}

void printIntArray(int *i, int size){
    for(int *j = i ; j < (i+size) ; j++ ){      //arrayอื่นที่ไม่ใช่string มันไม่รู้ว่าจบที่ไหน 
        printf("[%p] = %d\n",j,*j);
    }
}

void addTen(int *i,int size){
    for(int *j = i; j < (i+size) ; j++){
        *j +=10;
    }
}
int main(){

    char s[100];
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    scanf("%s",&s[0]);
    printfString(&s[0]);    //ส่งaddress(char array = string)ไปให้parameterที่เป็นตัวแปรpointer = pass by reference
    printIntArray(data,10);
    addTen(data,10);
    printIntArray(data,10);

    // int a = 100;                //เลขฐาน10
    // int b = 0144;               //เลขฐาน8
    // int c = 0x64;               //เลขฐาน16
    // int d = 0b1101010101000;    //เลขฐาน2   //เก็บเป็นเลขฐาน2ทั้งหมด
    
    // printf("%d %d %d %d\n",a,b,c,d);

    // int x = 100;    //ตอนรันตัวแปรx จะไปmappingกับพื้นที่ที่ถูกallowcateจากosมาให้(ตามdata typeและcpu) //addressของตัวแปรนั้นคือaddressแรกที่ใช้
    // printf("reference of x = %lu\n",&x);    //& = ampersand == เอาaddressของตัวแปรมา
    // printf("reference of x = %p\n",&x);     //%p ใช้แสดงaddressและแสดงเป็นเลขฐาน16

    //การรันแต่ละครั้งaddressจะเปลี่ยนเสมอ แล้วแต่ว่าตอนนั้นosให้addressไหนมา
    //&x = 1004;  //addressเปลี่ยนแปลงไม่ได้  Butเปลี่ยนให้ตัวแปรไปmappingที่addressอื่นได้
    //pointer คือ ตัวแปรที่เก็บaddressของคนอื่นไว้ Ex. array
    //arrayเป็นcontinueus memory 

    // int data[10] = {10,20,30,40,50};  //arrayจะได้addressที่ต่อเนื่องกัน
    // printf("value of data[0] = %d\n",data[0]);
    // printf("reference of data[0] = %p\n",&data[0]);
    // printf("reference of data = %p\n",data);    //ชื่อarrayเป็นpointerที่เก็บaddressตำแหน่งที่0ไว้เสมอ

    // printf("value of data[5] = %d\n",data[5]);
    // printf("reference of data[5] = %p\n",&data[5]);

    // printf("value of data[100] = %d\n",data[100]);
    // printf("reference of data[100] = %p\n",&data[100]);     //arrayในCเข้าถึงได้หมด เปลี่ยนค่าได้ จะขึ้นแค่warning

    // data[1000] = 200;
    // printf("value of data[1000] = %d\n",data[1000]);
    // printf("reference of data[1000] = %p\n",&data[1000]);   //Segmentation fault = เข้าถึงsegmentที่ไม่มีสิทธิ์เข้าถึง

    // int data[10] = {10,20,30,40,50};
    // int x = 100;
    // int *ptr = &x;  //การประกาศตัวแปรpointer >>> typeที่จะไปชี้ *ชื่อpointer
    // int *arrPtr;
    // arrPtr = data;  //data = &data[0]

    // printf("valuge of ptr = %p\n",ptr);
    // printf("reference of ptr = %p\n",&ptr);
    // printf("value of reference ptr = %d\n",*ptr);   //dereferenceing = ดูว่าpointerตัวนี้เก็บaddressไหนไว้แล้วจะวิ่งไปเอาค่าตามขนาดของpointerออกมา(หรือเป็นการเข้าถึงค่าของaddressที่เก็บไว้) ดังนั้นขนาดของตัวแปรpointerกับตัวที่ไปชี้ต้องเท่ากัน
    // //ตัวแปรที่ประกาศทีหลังจะมีaddressน้อยกว่าตัวแรกๆ >>> เรื่องheap กับ stackไปดูเอา

    // *ptr = 1000;
    // printf("x = %d\n",x);

    // int x;
    // char s[100];
    // char c;
    // scanf("%d %s",&x,s);     //scanf()เป็นการรับinputแบบformat >>>เป็นการpass by reference
    // scanf("%c",&c);     //การรับcharต่อจากการรับตัวอื่น มันจะเก็บenterเข้ามา(แค่char) >>> scanf("\n%c",&c); = มีการenterข้างหน้ามันและจะไม่รับเข้ามา
    // printf("result - %d %c",x,c);
    


}