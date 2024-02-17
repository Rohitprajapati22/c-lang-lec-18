#include<stdio.h>
main()
{
    
    char str[50];
    int i,j,len=0,n[50]={0};
    
    printf("Enter your name :");
    gets(str);
    
    len = strlen(str);
    
    printf("lenth is %d\n",len);
	
	for(i = 0;i < len;i++){
		for(j = 0;j < len;j++){
			if(str[i] == str[j]){
				n[i] ++;
			}
		}
	}
	
	for(i = 0;i < len;i++){
		if(n[i] != 0){
			printf("%c = %d\n",str[i],n[i]);
			n[i] ++;
		}
	}
	
}
