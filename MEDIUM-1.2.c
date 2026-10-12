#include <stdio.h>


void queen(int col,int left,int right,int limit,int *add){
    if(col==limit){
        (*add)++;
        return;
    }
    int full=col | left | right ;//1表示已经放
    int board=(~full) & limit;//1表示还能放
    int place=0; 

    while(board!=0){
        place=board & (-board);
        board=board^place;//1表示还能放
        queen(col | place, (left | place) >>1 ,(right | place) <<1 ,limit ,add);

    }

}

int main(){
    int n,limit;
    scanf("%d",&n);
    limit = (1<<n)-1;
    int add=0;
    queen(0,0,0,limit,&add );
    printf("%d",add);
    return 0;

}