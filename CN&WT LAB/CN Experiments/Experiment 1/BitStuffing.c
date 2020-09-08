#include<stdio.h>
#include<string.h>
int main() {
 int i = 0, count = 0, n, j = 0;
 char bits[80];
 char stuffedData[80];
 printf("Enter the frame size:");
 scanf("%d", &n);
 printf("Enter Data: ");
 scanf("%s", bits);
 printf("AT SENDER \n");
 printf("Before Bit Stuffing: %s\n", bits);
 printf("AT RECEIVER\n");
 printf(" After Bit stuffing: ");
 printf("01111110"); 
 for(i = 0; i < strlen(bits); i++)  {
    if(bits[i] == '1')
        count++;
    printf("%c", bits[i]);
    stuffedData[j] = bits[i];
    j++;
    if(count == 5) {
        printf("0");
	stuffedData[j] = 0;
        count = 0;
	j++;
    }
 }
printf("01111110\n");
printf("After Destuffing:");
count = 0;
for(i = 0; i < j; i++) {
    if(stuffedData[i] == '1')
        count++;
    printf("%c", stuffedData[i]);
    if(count == 5) {
        i++;
    }
 }
 printf("\n");
 return 0;
}
