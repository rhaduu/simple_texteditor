#include <iostream>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

int main(void){

    int t, i, j;
    std::cout<<"Insert an empty line to exit the program.\n";

    for (t=0; t<MAX; t++){
        std::cout<<t<<": ";
        std::cin.getline(text[t], LEN);
        
        if(!*text[t]) break;
    }
    for (i=0; i<t; i++){
        for(j=0; text[i][j]; j++)
            std::cout<<text[i][j];
    }

    return 0;
}