#include<stdio.h>
#include<string.h>

int main(){
    
    int n;
    printf("Enter the no. of frames:");
    scanf("%d",&n);

    char input[100][100];
    char dataTransmitted[100][100];
    char dataReceived[100][100];

    for(int i = 0 ; i < n; i++){
       printf("Frame%d:", i+1);
       scanf("%s", input[i]);  
    }

    printf("AT THE SENDER\nData as frames:\n");

    for(int y = 0; y < n; y++){
       char str[100];
       int l = strlen(input[y])+1;
       sprintf(str, "%d", l);
       strcat(str, input[y]);
       strcpy(dataTransmitted[y], str);
       printf("Frame %d:%s\n", y+1, str);
    }

    printf("Data transmitted:");

    for(int i = 0 ; i < n ; i++){
         printf("%s", dataTransmitted[i]);
    }

    printf("\nAT THE RECEIVER\nThe data received\nThe data after moving count char:");

    for(int i = 0 ; i < n ; i++){
	   int charcount = dataTransmitted[i][0]; 
           for(int j = 1; j < charcount-1; j++){
	      dataReceived[i][j-1] = dataTransmitted[i][j]; 
	      printf("%c", dataReceived[i][j-1]);
	   }
           printf(" ");
    }
    
    printf("\nThe data in frame form:\n");
    for(int i = 0 ; i < n ; i++){
      printf("Frame%d:%s\n", i+1, dataReceived[i]);
    }
       
    return 0;
}
