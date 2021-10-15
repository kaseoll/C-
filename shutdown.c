#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//Windows 
int main(void){
 int msgbox, PressKey;
 long long offTime;
 IsWhile = 1;
 msgbox = MessageBox(NULL,"强制关机，按ESC退出","提示",MB_OK);
 getPress();
 if(PressKey = 27){
  exit(0);
 }else{
  scanf("%d",&offTime);
  system("shutdown -f -s -t"+ offTime);//未结果测试
 }
return 0;
}
void getPress(){
 while(1){
  if(_kbhit){
   PressKey = _getch();
   break;
  }else{sleep(100);}
 
 }
}
