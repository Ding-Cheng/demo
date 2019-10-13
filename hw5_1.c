#include<stdio.h>
#include<string.h>
int main(){
	printf("Choose either to print ASCII values of lowercase characters" );
	printf(" or to print ASCII values of uppercase characters.\n");
	printf("Your answer (input \" lowercase \" or\" uppercase \") :\n");
	char abc[30]; 
	scanf("%29s",abc);
	FILE *cp;
	int i,j;
	if(strcmp(abc,"lowercase")==0){ //adjusting and compare
			if((cp=fopen("values.dat","w"))==NULL){
				printf("File could not be opened.");
			}
			else{
				fprintf(cp,"%-20s%-15s\n","Character","ASCII value");
				for(i=0;i<26;i++){
					fprintf(cp,"%-22c%-15d\n",'a'+i,'a'+i);
				}
				fclose(cp);
				} 
	//To see what is inside in the values.dat
    printf("\n\n\n");
    FILE *cfPtr;
	char a[80];
	if((cfPtr=fopen("values.dat","r"))==NULL){
		printf("error");
	}
	else{
		for(i=0;i<=26;i++){  //includes the table head
			fgets(a,80,cfPtr);
			printf("%s\n",a);
		}
		fclose(cfPtr);
	}
} 
	else if(strcmp(abc,"uppercase")==0){    //adjusting and compare
			if((cp=fopen("values.dat","w"))==NULL){
				printf("File could not be opened.");
			}
			else{
				fprintf(cp,"%-20s%-15s\n","Character","ASCII value");
				for(j=0;j<26;j++){
					fprintf(cp,"%-22c%-15d\n",'A'+j,'A'+j);
				}
				fclose(cp);
			}
	//To see what is inside in the values.dat
    printf("\n\n\n");
    FILE *cfPtr;
	char a[80];
	if((cfPtr=fopen("values.dat","r"))==NULL){
		printf("error");
	}
	else{
		for(i=0;i<=26;i++){   //includes the table head
			fgets(a,80,cfPtr);
			printf("%s\n",a);
		}
		fclose(cfPtr);
	}
} 
	else{
	printf("Your answer is wrong!");	
}
}

