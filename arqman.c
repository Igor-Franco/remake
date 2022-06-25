#include<stdio.h>
#include<locale.h>

int dado, opcao;
char char_acao;

int acao_sn(){
                fflush(stdin);
                scanf("%c", &char_acao);
                printf("tecla digitada: %c", char_acao);
                return 0;
            }
int funcao_escadaria(){

            printf ("\n\n irra\n\n");
            return 0;}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    FILE *arq;
    arq = fopen("fase1.txt","r");
    if ( arq == NULL){
        printf("nao foi possivel abrire o arquivo");
        }
    char frase[1000];
    while (fgets(frase, 1000, arq)!= NULL){
        printf("%s", frase);
        }
    fclose(arq);



    while (char_acao != 'n' && char_acao != 's'){
        printf("\n\nDeseja seguir em frente?(s/n)");
        acao_sn();
        }
    if(char_acao == 's'){
        printf("\n\nResposta sim\n\n");
        funcao_escadaria();
        }
    if(char_acao == 'n'){
        printf("\n\nHarold ja foi longe de mais para desistir agora, e segue em frente mesmo assim.\n\n ");
        funcao_escadaria();
        }

           /* int acao_sn(){
                fflush(stdin);
                scanf("%c", &char_acao);
                printf("tecla digitada: %c", char_acao);
            }


    int funcao_escadaria(){

            printf ("\n\n irra\n\n")
    }*/
    getchar();
}