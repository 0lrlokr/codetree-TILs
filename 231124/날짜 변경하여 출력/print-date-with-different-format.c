#include <stdio.h>

int main() {
    
    int year;
    int month; 
    int day;

    scanf("%d.%d.%d",&year, &month, &day);
    printf("%d-%d-%d",month,day,year);
    return 0;
}