#include<stdio.h>
#include<windows.h>

int main(){
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");
    int multi5=0, primo=0;
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("Número: %d é par  \t",i);
        }else{
            printf("Número: %d é ímpar\t",i);
        }
        if(i%3==0&&i%5==0){
            printf("múltiplo de 3 e 5\t\t");
            multi5=1;
        }else{
            if(i%3==0&&i%4==0){
                printf("múltiplo de 3 e 4\t\t");
            }else{
                if(i%3==0){
                    printf("múltiplo de 3\t\t\t");
                }else{
                    if(i%4==0&&i%5==0){
                        printf("múltiplo de 4 e 5\t\t");
                        multi5=1;
                    }else{
                        if(i%4==0){
                            printf("múltiplo de 4\t\t\t");
                        }else{
                            if(i%5==0){
                                printf("múltiplo de 5\t\t\t");
                                multi5=1;
                            }else{
                                printf("não é múltiplo de 3, 4 ou 5\t");
                            }
                        }
                    }
                }
            }
        }
        primo=0;
        if(i==2){
            primo=1;
        }
        for(int x=i;x>2;x--){
            if(i%(x-1)!=0||i==3){
                primo=1;
            }else{
                primo=0;
                break;
            }
        }
        if(primo==1){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
            printf("é primo.\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        }else{
            printf("não é primo.\n");
        }
        if(multi5==1&&i>5){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
            printf("Seguem números múltiplos de 5 antes dele em ordem decrescente:\n");
            for(int j=i-5;j>=1;j=j-5){
                printf("%d ",j);
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            printf("\n");
        }
        multi5=0;
    }
    return 0;
}