#include <stdio.h>
#include <time.h>


time_t currentTime;


int main(){

printf("Hello World!\n"); 

currentTime = time(0); 

char* theTime = ctime(&currentTime);

printf("The current time is %s", theTime); 


return 0; 




}
