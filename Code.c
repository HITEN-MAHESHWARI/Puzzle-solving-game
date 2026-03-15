#include <stdio.h>

int main() {
    int grid[6][6] = {{1,0,0,0,0,24},{0,0,6,0,0,0},{9,0,0,0,0,0},{0,0,0,19,0,0},{13,0,0,0,31,36},{0,0,16,0,0,0}};
    int i;
    int j;
    int row;
    int column;
    int number = 2;
    int previousROW;
    int previousCOLUMN;
    int nextROW;
    int nextCOLUMN;
    int found;
    
    while(number <= 36){
       do{
           found = 0;
           for(i = 0; i < 6; i++){
               for(j = 0; j < 6; j++){
                   if(grid[i][j] == number){
                       number++;
                       found = 1;
                   }
               }
           }
       }while(found == 1);
       nextROW = -1;
       nextCOLUMN = -1;
    printf("Grid Status: \n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(grid[i][j] == 0){
                printf(" [ ]");
            }
            else{
                printf("[%d]", grid[i][j]);
                }
        }
        printf("\n");
    }
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(grid[i][j] == number - 1){
                previousROW = i;
                previousCOLUMN = j;
            }
            if(grid[i][j] == number + 1){
                nextROW = i;
                nextCOLUMN = j;
            }
        }
    }
    
    printf("Action: Place number %d\n", number);
    printf("Enter the row and column indices (0 - 5): ");
    scanf("%d %d", &row, &column);
    if(number % 2 == 0 && row % 2 == 1 && column % 2 == 1){
        printf("Parity is unbalanced!");
        continue;
    }
        else{
            if(row >= 0 && row <= 5 && column <= 5 && column >= 0){
                if((row == previousROW + 1 && column == previousCOLUMN )||
				   (row == previousROW - 1 && column == previousCOLUMN) || 
				   (row == previousROW && column == previousCOLUMN - 1) ||
				   (row == previousROW && column == previousCOLUMN + 1)){
                if(grid[row][column] == 0){
                    grid[row][column] = number;
                    number++;
                }
                else{
                    printf("Grid already filled! please choose their adjacent Grid.\n");
        }
        
            }
            else{
                printf("Invalid move! choose right Adjacency.\n");
            }
            if(nextROW != -1){
                if(!((row == nextROW + 1 && column == nextCOLUMN) ||
                 (row == nextROW - 1 && column == nextCOLUMN) ||
                 (row == nextROW && column == nextCOLUMN + 1) ||
                 (row == nextROW && column == nextCOLUMN - 1))){
                printf("Must connect to anchor %d\n", number + 1);
                continue;
            }
        }
            }
            else{
            printf("Invalid position\n");
        }
    }
    if(number > 36){
    printf("Congratulations! You solved the puzzle.\n");
    }
    }
  return 0;  
}
