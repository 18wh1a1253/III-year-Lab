#include<stdio.h>
#include<string.h>
int main() {
 int count = 0, n, j = 0;
 char data[80];
 char stuffedData[80];
 printf("Enter Data: ");
 scanf("%s",data);
 printf("AT SENDER \n");
 printf("Before Character Stuffing:%s\n",data);
 printf("AT RECEIVER\n");
printf("After Character stuffing:");
 printf("DLESTX");
 for(int i = 0; i < strlen(data); i++) {
    if(data[i] == 'D' && data[i+1]== 'L' && data[i+2] == 'E'){
              printf("DLE");
                j = j + 3;
    }
    printf("%c", data[i]);
    stuffedData[j] = data[i];
    j++;
 }
printf("DLEETX\n");
printf("After Destuffing:");
for(int i = 0; i < j; i++) {
    if(stuffedData[i] == 'D' && stuffedData[i] == 'L' && stuffedData[i] == 'E') {
	    i = i + 3;
    } 
    printf("%c", stuffedData[i]);
 }
 printf("\n");
 return 0;
}
