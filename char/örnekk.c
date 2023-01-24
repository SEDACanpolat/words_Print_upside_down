#include <stdio.h>




char b[]={'a','z','e','r','b','a','y','c','a','n'};



main(void){
    int i,a=10;
    
    while(a>0){
    	
	for(i=0;i<11;i++){
		if (i-a<0){}
		
		else{
			printf("%c",b[i-a]);
		}
     	}
     	
    printf("\n");
	a--;
}
}
	
