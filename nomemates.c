#include<unistd.h>
#include<signal.h>
#include<stdio.h>

void handleSignal(int signal){
    printf("jajaja no me matas\n");
}

int main(){
    signal(2,handleSignal);
    signal(12,handleSignal);
    while(1){
        printf("Trabajando \n");
        sleep(1);
    }
    return 0;
}