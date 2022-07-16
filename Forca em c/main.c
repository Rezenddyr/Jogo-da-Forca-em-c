#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int vjog(char aux[], int tam){
    int i;
    for(i=0; i<tam; i++){
        if(aux[i]=='-'){
            return 1;
        }
    }
    return 0;
}

int forc(char palavra[]){
    system("cls");
    int j, i=0, verro=0, count=0, alf[26];
    int tam = strlen(palavra)-1;
    char letra, aux[tam], dnv;
    for(j=0; j<tam; j++)
        aux[j] = '-';
    aux[j]='\0';
    for(j=0; j<26; j++)
        alf[j] = 0;
    while(count<6 && vjog(aux, tam)){
        system("cls");
        fflush(stdin);
        if (count==0){
           printf("\n\n");
					printf("  ###################***##   \n");
					printf("  ####                *      \n");
					printf("  ####                *      \n");
					printf("  ##                  *      \n");
					printf("  ##                *   *    \n");
					printf("  ##              *       *  \n");
					printf("  ##               *    *    \n");
					printf("  ##                 **      \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                      \n");
					printf("  ##                      \n");
					printf("\n");
					printf("\n");
        }else if(count==1){
            printf("\n\n");
					printf("  ###################***##   \n");
					printf("  ####                *               \n");
					printf("  ####               ***              \n");
					printf("  ##                *o o*             \n");
					printf("  ##                * U *             \n");
					printf("  ##                  *               \n");
					printf("  ##                                   \n");
					printf("  ##                                  \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                         \n");
					printf("  ##                      \n");
					printf("  ##                      \n");
					printf("\n");
					printf("\n");
        }
        else if(count==2){
            printf("\n\n");
					printf("  ###################***##                      \n");
					printf("  ####                *               \n");
					printf("  ####               ***              \n");
					printf("  ##                *o o*             \n");
					printf("  ##                * U *             \n");
					printf("  ##                  *               \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##                      \n");
					printf("  ##                      \n");
					printf("\n");
					printf("\n");
        }
        else if(count==3){
            printf("********************************************************************************\n");
            printf("\n\n");
					printf("  ###################***##   \n");
					printf("  ####                *               \n");
					printf("  ####               ***              \n");
					printf("  ##                *o o*             \n");
					printf("  ##                * U *             \n");
					printf("  ##                  *               \n");
					printf("  ##                / |    \n");
					printf("  ##               /  |    \n");
					printf("  ##              /   |    \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##                      \n");
					printf("  ##                      \n");
					printf("\n");
					printf("\n");
        }
        else if(count==4){
            printf("  ###################***##   \n");
					printf("  ####                *               \n");
					printf("  ####               ***              \n");
					printf("  ##                *o o*             \n");
					printf("  ##                * ~ *             \n");
					printf("  ##                  *               \n");
					printf("  ##                / |\\   \n");
					printf("  ##               /  | \\   \n");
					printf("  ##              /   |  \\  \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##                      \n");
					printf("  ##                      \n");
					printf("\n");
					printf("\n");
        }else if (count==5){
            printf("  ###################***##   \n");
					printf("  ####                *               \n");
					printf("  ####               ***              \n");
					printf("  ##                *o o*             \n");
					printf("  ##                * o *             \n");
					printf("  ##                  *               \n");
					printf("  ##                / |\\   \n");
					printf("  ##               /  | \\   \n");
					printf("  ##              /   |  \\  \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##                 /  \n");
					printf("  ##                /   \n");
					printf("  ##                      \n");
					printf("  ##                      \n");
					printf("\n");
					printf("\n");
        }
        if(i && verro){
            printf("Nice continua assim.\n");
            verro = 0;
        }
        else if(i)
            printf("Voce errou.\n");
        //puts(palavra);//desmanchar para não mostrar palavra
        puts(aux);
        if(i)
        {
            printf("Letras indicadas: ");
            for(j=0;j<26;j++)
                if(alf[j])
                    printf("%c ", j+'a');
        }

        printf("\n\nDigite uma letra:");
        do{
            scanf(" %c", &letra);
        }while(alf[letra-'a']==1);

        alf[letra-'a']=1;

        for(j=0; j<tam; j++){
            if(letra==palavra[j]){
                aux[j]=letra;
                verro = 1;
            }
        }
        if(verro==0){
            count++;
        }
        i=1;
    }
    system("cls");
    if(count==6)
    {
        printf("  ###################***##   \n");
					printf("  ####                *               \n");
					printf("  ####               ***              \n");
					printf("  ##                *x x*             \n");
					printf("  ##                * o *             \n");
					printf("  ##                  *               \n");
					printf("  ##                / |\\   \n");
					printf("  ##               /  | \\   \n");
					printf("  ##              /   |  \\  \n");
					printf("  ##                  |    \n");
					printf("  ##                  |    \n");
					printf("  ##                 / \\ \n");
					printf("  ##                /   \\\n");
					printf("  ##                      \n");
					printf("  ##                      \n");
					printf("\n");
					printf("\n");
        printf("Quer jogar novamente(S/N)?");
        scanf(" %c", &dnv);
    }
    else{
        printf("Você acertou. ");
        if(count==0)
            printf("0 erros Parabens!!!Você é o rei da forca!\n");
        else if(count==1)
            printf("1 erro Muito bom, mas treine mais para se tornar o rei da forca\n");
        else if(count==2||count==3)
            printf("2 erros Ta bom, mas pode melhorar!\n");
        else if(count==4)
            printf("3 erros Foi por pouco,mas conseguiu\n");
        else if(count==5)
            printf("4 erros Você precisa praticar mais\n");
        else{
            printf("5 erros Você falhou!");

        }
        printf("Jogar novamente(S/N)?");
        scanf(" %c", &dnv);
    }
    if (dnv=='s'){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int lingua, num,i=0, j=0;
    char aux[20];
    do{
    system("cls");
    FILE *arg;
    printf("\n\n");
    printf("         XXXXX    XXXXX     XXXX     XXXXX       XXXX       XXXXX     \n");
    printf("            XX   XX   XX   XX       XX   XX      XX   X    XX   XX    \n");
    printf("            XX   XX   XX   XX       XX   XX      XX    X   XX   XX    \n");
    printf("            XX   XX   XX   XX       XX   XX      XX    X   XXXXXXX    \n");
    printf("            XX   XX   XX   XX  XX   XX   XX      XX    X   XX   XX    \n");
    printf("        X   XX   XX   XX   XX   X   XX   XX      XX   X    XX   XX    \n");
    printf("         XXXX     XXXXX     XXXX     XXXXX       XXXX      XX   XX    \n");
    printf("\n");
    printf("               XXXXXXX    XXXXX    XXXXX      XXXX    XXXXX           \n");
    printf("               XX        XX   XX   XX   X    XX      XX   XX          \n");
    printf("               XX        XX   XX   XX   X   XX       XX   XX          \n");
    printf("               XXXXXXX   XX   XX   XXXXX    XX       XXXXXXX          \n");
    printf("               XX        XX   XX   XX X     XX       XX   XX          \n");
    printf("               XX        XX   XX   XX  X     XX      XX   XX          \n");
    printf("               XX         XXXXX    XX   X     XXXX   XX   XX          \n");
    printf("\n");
    printf("\n\n");
    printf("\n\n");
    system("pause");
    system("cls");
    printf("********************************************************************************\n");
    printf("                               1- Ingles                                        \n");
    printf("                               2- Portugues                                     \n");
    printf("********************************************************************************\n");
    scanf("%d", &lingua);
    srand(time(NULL));
    if (lingua==1){
        arg = fopen("ingles.txt", "r");
    }else if(lingua==2){
        arg = fopen("port.txt", "r");
    }
    else{
        printf("nao existe");
        break;
    }
    system("cls");
    while(fgets(aux, 20, arg))
        j++;
    rewind(arg);
    num=rand()%j;
    for(i=0;i<=num;i++)
        fgets(aux, 20, arg);
    //puts(aux);
    fclose(arg);
    }while(forc(aux));
return 0;
}
