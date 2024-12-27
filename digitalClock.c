#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

//this function will fill the time in the buffer
void fillTime(char *buffer, int choice){
    time_t raw_time;
    struct tm *time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);

    if(choice == 1){
        strftime(buffer, 50, "%I:%M:%S %p", time_info);
        printf("\n  Current Time : %s", buffer);
    }
    else if(choice == 3){
        strftime(buffer, 100, "%H Hours %M Minutes %S Seconds", time_info);
        printf("\n  Time Passed Till Now : %s", buffer);
    }
    else{
        strftime(buffer, 50, "%H:%M:%S", time_info);
        printf("\n  Current Time : %s", buffer);
    }
}

//this function will fill the date in the buffer
void fillDate(char *buffer){
    time_t raw_time;
    struct tm *time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);

    strftime(buffer, 100, "%d, %B,%Y", time_info);
}

//this function will take the choice from the user
int choice(){
    int choice;
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    printf("----------------------------------------------------------\n");
    return choice;
}

//this function will clear the screen
void clearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//main code starts here
int main(){
    char time[50], date[100];

    printf("--------------------Digital Clock-------------------------\n");
    printf("Choose the time format you want to see\n");
    printf("1. 12-hour format\n");
    printf("2. 24-hour format (default)\n");
    printf("3. Expanded format\n");
    
    int input = choice();
    while(1){
        fillTime(time, input);
        fillDate(date);
        clearScreen();
        int timer = 1;

        printf("\n  Today is : %s", date);
        fflush(stdout);

        sleep(timer);
    }

    return 0;
}