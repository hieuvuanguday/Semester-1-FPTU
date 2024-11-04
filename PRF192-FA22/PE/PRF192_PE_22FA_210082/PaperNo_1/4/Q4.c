#include <stdio.h>
#include <string.h>
char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);

//----------------------------------------
char* getFirstName(char* FullName){
	 char FirstName[20];
     //Begin your statements here
     int subSize = 0;
     int i = 0;
     while(FullName[i] != ' '){
     	FirstName[subSize] = FullName[i];
     	subSize++;
     	i++;
	 }
     //End your statements    
	 return FirstName;
}

//===============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION===========
int main() {
 
  char FirstName[20];
  char FullName[81];  
  system("cls");
  printf("\nTEST Q4 (3.0 marks):\n");
  printf("\nPlease enter full name:");
  scanf("%80[^\n]",FullName); 
  trim(FullName);  	   
  strcpy(FirstName,getFirstName(FullName));  
  //=====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE=====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM== 
  printf("\nOUTPUT:\n");
  printf("%s", FirstName); 
  printf("\n");
  system ("pause");
  return(0);
}
//=== Do not add new or change statements in this function.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//=== Do not add new or change statements in this function.===
char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}
//=== Do not add new or change statements in this function.===
char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr +1);
		ptr = strstr(s, "  ");
	}
	return s;
}
