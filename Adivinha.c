#include <stdio.h>

int main(){
    int i,j,x,c,d,flag=0;
    int N,S,QT,*NUM,*num2,*posicoes;
    int menor=0,flag2=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d",&QT,&S);
        NUM = (int)malloc(QT*sizeof(int));
        num2 = (int)malloc(QT*sizeof(int));
        posicoes = (int)malloc(QT*sizeof(int));
        for(j=0;j<QT; j++){
            scanf("%d",&NUM[j]);
        }
        flag=0;
        for(x=0;x<QT;x++){
            if(NUM[x]==S && flag!=1){
                printf("Entrou%d\n",(x+1));
                flag=1;
                free(NUM);
            }else{
                    if(NUM[x]<S){
                        num2[c] = S - NUM[x];
                        posicoes[c] = x + 1;
                        c+=1;
                    }else{
                        num2[x] = NUM[x] - S;
                        posicoes[c] = x + 1;
                        c+=1;

                }
                menor=num2[0],flag2=0;
                for(d=0;d<QT;d++){
                    if(num2[d]>menor){
                        menor = num2[d];
                    }
                }

                for(int o=0;o<QT;o++){
                    printf("%d\n",num2);
                    /*if(menor==num2[o]&& flag2!=1){
                        printf("E%d\n",posicoes[o]);
                        flag2=1;
                        free(posicoes);
                        free(num2);*/
                    //}
                }
            }

        }
    }


return 0;
}
