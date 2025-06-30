#include<stdio.h>
int main()
{
    int n;
    int x;
    // 整数の入力
    scanf("%d %d", &n,&x);//N
    // printf("%d %d\n",n,x);
    int s[n];
    int tmp = 0;
    int result = 0;
    int k = 0;
    int min = 0;
    int mintmp = 0;
    scanf("%d",&tmp);
    for(int i = 0; i < n;i++){
        s[i] = 0;
    }
    if(tmp == 0){
        s[0] = 1;
            printf("%d",tmp - 1);
    }else{
        s[tmp-1] = 1;
            printf("%d",tmp);
    }
        // printf(" at %d %d %d %d\n",s[0],s[1],s[2],s[3]);
    printf(" ");
    for(int i = 1; i < x;i++){
        scanf(" %d",&tmp);
        if(tmp != 0){
            s[tmp - 1]++;
            printf("%d",tmp);
        }else{
            // printf("%d %d",i,tmp)
            for(int j = ((i > n) ? n - 1:i); j >= 0;j--){
                if(s[j] <= min ){
                    min = s[j];
                    mintmp = j;
                }

            }
            min = i;
            s[mintmp]++;
            printf("%d",mintmp + 1);
            mintmp = 0;
        }
        // printf(" at %d %d %d %d -> %d\n",s[0],s[1],s[2],s[3],i);
        if(i != x - 1){
            printf(" ");

        }
    }
    printf("\n");
    return 0;
}