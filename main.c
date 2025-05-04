//Write your code in this file
#include <stdio.h>
#include <ctype.h>



int main(){
    char name[5][11];
    int grade[5][13];
    float average[5];
    float total_average = 0.0;
    int best_average = 0;

    for(int i = 0; i < 5; i++){
        printf("");
        scanf("%s %d %d %d %d %d %d %d %d %d %d %d %d %d", name[i], &grade[i][0], &grade[i][1], &grade[i][2], &grade[i][3],
        &grade[i][4], &grade[i][5], &grade[i][6], &grade[i][7], &grade[i][8], &grade[i][9], &grade[i][10], &grade[i][11], &grade[i][12]);

        name[i][0] = toupper(name[i][0]);
        for(int j = 1; name[i][j] != '\0'; j++){
            name[i][j] = tolower(name[i][j]);
        }

        int sum = 0;
        for(int j = 0; j < 13; j++){
            sum += grade[i][j];
        }
        average[i] = sum / 13.0;
        total_average += average[i];

        if(average[i] > average[best_average]){
            best_average = i;
        }
    }

    total_average = total_average/5;
    printf("%s\n", name[best_average]);

    for(int i = 0; i < 5; i++){
        if(average[i] < total_average){
            printf("%s\n", name[i]);
        }
    }








    return 0;
}

