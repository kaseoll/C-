#include <stdio.h>  
2
#include <stdlib.h>  
3
#include <windows.h>  
4
int main(){  
5  MessageBox(NULL,"按键测试","测试",MB_OK);  
6  short keyPress;  
7  char zh_user[]= "用户";  
8  char zh_press[] = "按下";  
9  char zh_null[] = "NULL";  
10  char zh_key[] =  "键";  
11  char zh_exit[] = "退出";  
12  char zh_while[] = "循环";  
13  while(1){  
14   getPressKey();  
15   putMsgs();  
16  }  
17
}  
18
void putMsgs(){  
19  puts(zh_user);  
20  puts(zh_press);  
21  puts("了");  
22  puts(keyPress);  
23  if(keyPress == 27){  
24   puts(zh_exit);  
25   puts("了");  
26   puts(zh_while);  
27   puts("\n");  
28  }else{  
29  puts("\n");  
30  }  
31
}  
32
void getPressKey(){  
33  while(1){  
34   if(_kbhit()){  
35    keyPress = _getch();  
36    break;  
37   }else{  
38    sleep(100);  
39   }  
40  }  
41
}  
42
  
43 
