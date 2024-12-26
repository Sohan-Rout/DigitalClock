#include<stdio.h>
#include<time.h>


int main(){
    time_t raw_time;
    struct tm *time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);

    return 0;
}