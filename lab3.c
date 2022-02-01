//loopในCเป็นloopนับรอบ
//address มีค่าตั้งแต่1 >>> 1addressมีค่าเท่ากับ1byte
//int ใช้พื้นที่4byte >>> จำแค่addressแรกที่ใช้ แล้วจะรู้ว่าตั้งแ9jaddresscidนั้นนับไปจนเก็บค่าครบ4byte >>> addressพวกนั้นเก็บค่าiไว้
//ramเป็นshare memory = ใช้ได้ทุกaddressที่osจัดมาให้  >>> พอใช้เสร็จก็จะคืนพื้นที่กลับมาแต่จะไม่clearค่าให้ = ขยะ
//ตัวแปรglobal จะถูกกำหนดค่าเริ่มต้นให้อัตโนมัติ

// C library Ex. math.h
#include <stdio.h>
//int k, l;     //ตัวแปรglobal
//ReturnType FunctionName(parameter){
       //statement

       //return ........ (keyword returnเป็นการบังคับออกจากfunction >>> void จะใส่แค่return จะไม่ส่งค่ากลับ)
//}
//statementต้องอยู่ในfunctionเสมอ แต่ตัวแปรอยู่ภายนอกได้
int addTen(int x){
       printf("addTen x = %d\n",x);
       x+=10;
       printf("after added addTen x = %d\n", x);
       return x;
}

int addTwenty();     //function prototype = function header >>> ReturnType FunctionName();

int main(){
       //double d = 10;
       //int i = 12.56;       //under flow จะได้warning  >>> หรือ int i = (int)12.56 แบบนี้ได้เลย
       int x = 200;
       int y = addTen(x);
       printf("In main x = %d, y = %d\n",x,y);
       int z = addTwenty();
       printf("In main x = %d, y = %d, z = %d\n",x,y,z);
       //int x = 1000;      //ในscopeเดียวกันประกาศตัวแปรตัวนั้นซ้ำไม่ได้
}

int x = 10;   //ตัวแปรglobal สามารถแก้ไขค่าได้เลย

int addTwenty(){     //จะหาxในlocal scopeก่อน ตั้งแต่บรรทัดที่เรียกxขึ้นไปถึง{และในparameter ถ้าไม่่มี >>> จะไปหาในscopeใหญ่กว่าที่อยู่ติดกัน({}ที่อยู่ติดกัน) แต่ถ้าเป็น{}สุดท้ายจะไปหาในglobal
       printf("addTwenty x = %d\n",x);    //xในนี้ไม่มี 
       x+=20;
       printf("after added addTwenty x = %d\n",x);
       return x;
}

//int main() 
//{
       //int i = 0, l = 0;    //ตัวแปรlocalถ้าไม่ได้กำหนดค่าไว้ให้ จะได้ค่าที่addressนั้นเก็บอยู่(ขยะในนั้น)
       //printf("%d %d %d %d\n",i,j,k,l);
       //while(i<10){
       //       printf("%d\n",i);
       //      i++;
       //}

       //while(1){      //while(true) = while(เลขที่ไม่ใช่0=ค่าความจริงจากdata type)
       //       printf("%d\n",i);
       //       i++;
       //}             //หยุดinfinite loop(terminate)โดยกดctrl c(interrupt signal)

       //for(int i + 0 ; i<10 ; i++){       //จบloopทุกครั้งจะเข้าไปทำที่statementที่3ก่อนเสมอ
       //      printf("%d\n",i);
       //}

       //int i =0 ;
       //for( ; ; i++){       //forต้องมี3statementเสมอ แต่เป็นstatementว่างได้
       //       printf("%d\n",i);
       //}
//}