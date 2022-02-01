//gcc pathปัจจุบันไปdirestoryที่อยู่ของไฟล์ที่จะcompile(relative path)/file.c
//หรือ absolutive path คือ เขียนตั้งแต่root Ex. /c = drive c แล้วไปเรื่อยๆจนถึงไฟล์ที่จะใช้
//function mainเป็นfucntionเดียวที่ไม่ต้องใส่return
/*Function ที่รับ Input
    1.scanf(format) = รับinputแบบมีformat จะใช้เรื่องpointer
    2.gets(ตัวแปรที่จะเอาไว้เก็บinput) = get string = รับinputจากkey boardโดยตรง >>> เปลี่ยนค่าตัวแปรโดยตรง ไม่มีreturnค่ากลับ
    3.fgets(ตัวแปรที่จะเก็บ,buffer การเขียนให้ถูกหลัก ต้องไม่มากกว่าarray,stdin อ่านค่าหรือรับค่าจากไหน) = file get stream 
    4.getchar() = รับcharตัวเดียว(ถ้าใส่ไปหลายตัวก็จะรับแค่ตัวแรก) มีreturnค่ากลับ
*/
//buffer = ทีเก็บข้อมูล ที่ข้อมูลต้นทางกับปลายทางมีความเร็วต่างกัน เพื่อไม่ให้มีการรอ = โหลดข้อมูลจากramใส่buffer บอกให้cpuไปทำอย่างอื่นก่อน พอramโหลดเสร็จก็ให้เอาข้อมูลจากbufferไปประมวลผลเลย
#include<stdio.h>   //#include<> = ให้เอาไฟล์นี้มา  //.h = มีแค่header
#include<stdlib.h>
int main()          //เวลารันจะมารันที่นี่ที่แรก    
{                   //type มากำกับfunction = return type = บอกว่ามีการส่งค่ากลับเป็นdata typeไร หรือไม่มีการส่งค่ากลับ(void)  
    //char str[10];   //char array ขนาด10 >>> เก็บได้มากสุด9ตัว(ขนาด-1 เสมอ) แต่ปลอดภัยแค่8ตัว(ขนาด-2)
    //gets(str);      //รับinputเก็บไว้ที่str
    //fgets(str,10,stdin);    //มีbufferขนาด10จะรับได้9ตัว
    //printf("in = %s",str);
    //char c = getchar();
    //printf("==%c",c);

    //char str_i[10];
    //char str_f[10];
    //char str_l[10];

    //printf("enter i:");
    //fgets(str_i, 10, stdin);
    //printf("enter f:");
    //fgets(str_f, 10, stdin);
    //printf("enter l:");
    //fgets(str_l, 10, stdin);

    //int i = atoi(str_i);    //atoi = array to integer
    //float f = atof(str_f);  //atof = array to float
    //long l = atol(str_l);   //atol =  array to long
                            //atoบลา จะแปลงเท่าที่แปลงได้ ถึงตัวที่แปลงไม่ได้ก็จบแค่นั้น ถ้าแปลงไม่ได้จะreturn 0
    //printf("%d - %f - %ld",i,f,l);  //%ld ใช้กับlong

    char str[10] = "";
    fgets(str,10,stdin);
    int i = atoi(str);

    //ralational operator > >= < <= == !=
    //logical operator && || !
    if (i>400){
        printf("if %d", i<400);
    }
    else if (i<=400 && i>100){
        printf("else if %d", i <=400 && i>100);
    }
    else{
        printf("else %d %d", i>400 , i>100);
    }
}
/*Cไม่มีboolean จะใช้ค่าความจริงของแต่ละdata type เป็นbooleanแทน
false >>> int i = 0; , float f = 0.0; , char c = '\0'(terminate charecter, null character >> ascii code 0 = null character);
true >>> char str[10] = ""; , 
    "kong" = ['k', 'o', 'n', 'g', '\0'] >>>เริ่มด้วยตำแหน่งแรกของตัวแรกในเมมโมรี่ แล้วจบด้วย'\0'เสมอเพื่อบอกว่าจบแล้วนะ  ไม่ได้จำว่ามีกี่ตัว
*/