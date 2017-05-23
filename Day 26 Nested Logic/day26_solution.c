#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int real_D,real_M,real_Y;
    int rtn_D, rtn_M, rtn_Y;
    int fine = 0;
    scanf("%d %d %d",&real_D,&real_M,&real_Y);
    scanf("%d %d %d",&rtn_D, &rtn_M, &rtn_Y);
    if ( real_Y > rtn_Y){
        fine = 10000;
    } else if (real_Y == rtn_Y) {
        if( real_M > rtn_M){
            fine = 500 *  (real_M - rtn_M);
        } else if (real_M == rtn_M){
            if( real_D > rtn_D){
                fine = 15*(real_D -rtn_D);
            } else {
                fine = 0;
            }
        }
    }
    printf("%d",fine);
    return 0;
}
